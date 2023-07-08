/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_B, TYPE_R, 
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXTS(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXTS(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXTS(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() \
        do { *imm = ((((((SEXTS(BITS(i, 31, 31), 1) << 8) | BITS(i, 19, 12)) << 1) | BITS(i,20,20)) << 10 ) | BITS(i, 30, 21)) << 1; } \
        while(0)
        
#define immB() \
             do { *imm = ((((((SEXTS(BITS(i, 31, 31), 1) << 1) | BITS(i, 7, 7)) << 6) | BITS(i, 30, 25)) << 4) | BITS(i, 11, 8)) << 1; } \
             while(0)




static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *dest = rd;
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:                   immJ(); break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_R: src1R(); src2R();         break;
  }
}

static vaddr_t rcsr(word_t imm) {
  switch (imm)
  {
  case 0x342: return cpu.mcause;
  case 0x341: return cpu.mepc;
  case 0x300: return cpu.mstatus;
  case 0x305: return cpu.mtvec;
  default: panic("wrong rcsr imm");
  }
}

static void wcsr(word_t imm,word_t data) {
  switch (imm)
  {
  case 0x342: {cpu.mcause = data; return;}
  case 0x341: {cpu.mepc = data; return;}
  case 0x300: {cpu.mstatus = data; return;}
  case 0x305: {cpu.mtvec = data; return;}
  default: panic("wrong wcsr imm");
  }
}

static void wocsr(word_t imm,word_t data) {
  switch (imm)
  {
  case 0x342: {cpu.mcause |= data;return;}
  case 0x341: {cpu.mepc |= data;return;}
  case 0x300: {cpu.mstatus |= data;return;}
  case 0x305: {cpu.mtvec |= data;return;}
  default: panic("wrong wocsr imm");
  }
}

static vaddr_t ecall(vaddr_t pc) { 
	 bool success; 
	 word_t temp = 0; 
	 temp = isa_reg_str2val("a7", &success); 
	if(success) 
		return isa_raise_intr(temp,pc); 
	else
		panic("wrong reg str"); 
}

static vaddr_t mret() {
 	
  	cpu.mstatus = ((cpu.mstatus & 0x0000000000000080) >> 8) ? (cpu.mstatus | 0x0000000000000008) : (cpu.mstatus & 0xfffffffffffffff7);
  	cpu.mstatus |= 0x0000000000000080;
  	return (cpu.mepc + 4);
}


static int decode_exec(Decode *s) {
  int dest = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &dest, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = s->pc + (int64_t)imm);
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + (int64_t)imm, 8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + (int64_t)imm, 8, src2));
  
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + (int64_t)imm, 4, BITS(src2,31,0)));
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + imm);
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXTS(BITS(src1 + src2,31,0),32));
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXTS(BITS(src1 + imm,31,0),32));
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->pc + 4;s->dnpc = s->pc+(int64_t)imm);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = imm);
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << BITS(imm,5,0));
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->pc + 4; s->dnpc = (src1 + (int64_t)imm) & ~1);
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2 ? s->pc + (int64_t)imm : s->snpc));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXTS(Mr(src1 + (int64_t)imm, 4),32));
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < imm ? 1 :0));  
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2 ? s->pc + (int64_t)imm : s->snpc));
  //bit add
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ imm);
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + (int64_t)imm, 2, BITS(src2,15,0)));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + (int64_t)imm, 1, BITS(src2,7,0)));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = SEXT(Mr(src1 + imm,1),8));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = (int64_t)src1 >> BITS(imm,5,0)); 
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & imm);
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXTS((BITS(src1 << BITS(src2,4,0),31,0)),32));
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1 < src2 ? 1 :0));
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);
  //bubble add
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = src1 >> BITS(imm,5,0));
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = (((src1 == src2) || ((int64_t)src1 > (int64_t)src2)) ? (int64_t)s->pc + (int64_t)imm : s->snpc));
  //div add
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXTS(BITS(((int64_t)src1 * (int64_t)src2),31,0),32));
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXTS(BITS((int64_t)src1,31,0)/BITS((int64_t)src2,31,0),32));
  //goldbach add
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXTS(BITS((int64_t)src1,31,0) % BITS((int64_t)src2,31,0),32));
  //if else add
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int64_t)src1 < (int64_t)src2 ? s->pc + (int64_t)imm : s->snpc));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = ((int64_t)src1 < (int64_t)src2 ? 1 :0));
  //load-store add
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXTS(Mr(src1 + (int64_t)imm,2),16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = SEXT(Mr(src1 + (int64_t)imm,2),16));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXTS(BITS(src1 - src2,31,0),32));
  //movsx add
  INSTPAT("000000? ????? ????? 001 ????? 00110 11", slliw  , I, if(BITS(imm,5,5) == 0) R(dest) = SEXTS(BITS(src1 << BITS(imm,5,0),31,0),32));
  INSTPAT("010000? ????? ????? 101 ????? 00110 11", sraiw  , I, if(BITS(imm,5,5) == 0) R(dest) = (int64_t)SEXTS(BITS(src1,31,0),32) >> BITS(imm,5,0));
  //mul-longlong add
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = (int64_t)src1 * (int64_t)src2);
  //shift add
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11",srliw , I, R(dest) = SEXTS((BITS(src1,31,0) >> BITS(imm,4,0)),32));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11",sraw  , R, R(dest) = (int64_t)SEXTS(BITS(src1,31,0),32) >> BITS(src2,4,0));
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11",srlw  , R, R(dest) = SEXTS((BITS(src1,31,0) >> BITS(src2,4,0)),32));
  //switch add
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu , B, s->dnpc = (src1 < src2 ? s->pc + (int64_t)imm : s->snpc));
  //hello-str add
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu , R, R(dest) = (src1 / src2));
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu , R, R(dest) = (src1 % src2));
  
  //coremark add
  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divwu   , R, R(dest) = SEXTS((BITS(src1,31,0)/BITS(src2,31,0)),32));
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu    , B, s->dnpc = (((src1 == src2) || (src1 > src2)) ? s->pc + (int64_t)imm : s->snpc));
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor     , R, R(dest) = src1 ^ src2);
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb      , I, R(dest) = SEXTS(Mr(src1 + (int64_t)imm,1),8));
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori     , I, R(dest) = src1 | imm);
  //dhrystone add
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti  , I, R(dest) = ((int64_t)src1 < (int64_t)imm ? 1 :0)); 
  //microbench add
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw , R, R(dest) = SEXTS(BITS(src1,31,0) % BITS(src2,31,0),32));
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll   , R, R(dest) = src1 << BITS(src2,5,0));
  //PPT slider add
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem   , R, R(dest) = (int64_t)src1 % (int64_t)src2);
  //fceux add
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu   , I, R(dest) = SEXT(Mr(src1 + (int64_t)imm, 4),32));
  //csr
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , I, R(dest) = rcsr(imm); wcsr(imm,src1));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , I, R(dest) = rcsr(imm); wocsr(imm,src1));
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , I, s->dnpc = ecall(s->pc));
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , R, s->dnpc = mret());
    
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
