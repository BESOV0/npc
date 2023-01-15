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
#define immU() do { *imm = SEXTS(BITS(i, 31, 12), 20); } while(0)
#define immS() do { *imm = (SEXTS(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() \
        do { *imm = ((((((SEXTS(BITS(i, 31, 31), 1) << 8) | BITS(i, 19, 12)) << 1) | BITS(i,20,20)) << 10 ) | BITS(i, 30, 21)) << 1; } \
        while(0)
        
#define immB() \
             do { *imm = ((((((SEXTS(BITS(i, 31, 31), 1) << 1) | BITS(i, 7, 7)) << 6) | BITS(i, 30, 25)) << 4) | BITS(i, 11, 8)) << 1; } \
             while(0)




static void decode_operand(Decode *s, int *dest, sword_t *src1, sword_t *src2, sword_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);//位抽取
  
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

#define usrc1R() do { *usrc1 = R(rs1); } while (0)
#define usrc2R() do { *usrc2 = R(rs2); } while (0)
#define uimmI() do { *uimm = BITS(i, 31, 20); } while(0)
#define uimmU() do { *uimm = BITS(i, 31, 12); } while(0)
#define uimmS() do { *uimm = (BITS(i, 31, 25) << 5) | BITS(i, 11, 7); } while(0)
#define uimmJ() \
        do { *uimm = ((((((BITS(i, 31, 31) << 8) | BITS(i, 19, 12)) << 1) | BITS(i,20,20)) << 10 ) | BITS(i, 30, 21)) << 1; } \
        while(0)
 /*       
#define uimmB() \
             do { *uimm = ((((((SEXT(BITS(i, 31, 31),1) << 1) | BITS(i, 7, 7)) << 6) | BITS(i, 30, 25)) << 4) | BITS(i, 11, 8)) << 1; } \
             while(0)
             */
#define uimmB() \
             do { *uimm = ((((((BITS(i, 31, 31) << 1) | BITS(i, 7, 7)) << 6) | BITS(i, 30, 25)) << 4) | BITS(i, 11, 8)) << 1; } \
             while(0)


static void decode_operand_u(Decode *s, int *dest, word_t *usrc1, word_t *usrc2, word_t *uimm, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);//位抽取
  
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *dest = rd;
  switch (type) {
    case TYPE_I: usrc1R();           uimmI(); break;
    case TYPE_U:                     uimmU(); break;
    case TYPE_S: usrc1R(); usrc2R(); uimmS(); break;
    case TYPE_J:                     uimmJ(); break;
    case TYPE_B: usrc1R(); usrc2R(); uimmB(); break;
    case TYPE_R: usrc1R(); usrc2R();          break;
  }
}

static int decode_exec(Decode *s) {
  int dest = 0;
  sword_t src1 = 0, src2 = 0, imm = 0;
  word_t usrc1 = 0, usrc2 = 0, uimm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &dest, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

#define INSTPAT_MATCH_U(s, name, type, ... /* execute body */ ) { \
  decode_operand_u(s, &dest, &usrc1, &usrc2, &uimm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = s->pc + (imm << 12));
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + imm, 8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + imm, 8, src2));
  
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, BITS(src2,31,0)));
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + imm);
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2,31,0),32));
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(src1 + imm,31,0),32));
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->pc + 4;s->dnpc = s->pc+imm);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = (imm << 12) & 0xfffffffffffff000);//maybe
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << BITS(imm,5,0));
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->pc + 4; s->dnpc = (src1 + imm) & ~1);
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2 ? s->pc + imm : s->snpc));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + imm, 4),32));
  INSTPAT_U("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (usrc1 < uimm ? 1 :0));  
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2 ? s->pc + imm : s->snpc));
  //bit add
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ imm);
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, BITS(src2,15,0)));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, BITS(src2,7,0)));
  INSTPAT_U("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(usrc1 + uimm, 1));//maybe need zero ext
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = src1 >> BITS(imm,4,0)); 
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & imm);
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT((BITS(src1,31,0) << BITS(src2,4,0)),32));//maybe wrong
  INSTPAT_U("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (usrc1 < usrc2 ? 1 :0));
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);
  //bubble add
  INSTPAT_U("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = usrc1 >> BITS(uimm,5,0));//unsigned ext 0
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = (((src1 == src2) || (src1 > src2)) ? s->pc + imm : s->snpc));
  //div add
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT(BITS((src1 * src2),31,0),32));
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXT(BITS(src1,31,0)/BITS(src2,31,0),32));//maybe wrong
  //goldbach add
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXT(BITS(src1,31,0) % BITS(src2,31,0),32));//maybe wrong
  //if else add
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = (src1 < src2 ? s->pc + imm : s->snpc));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = (src1 < src2 ? 1 :0));
  //load-store add
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + imm,2),16));
  INSTPAT_U("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(usrc1 + uimm, 2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, BITS(src2,15,0)));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT(BITS(src1 - src2,31,0),32));
  //movsx add
  INSTPAT("000000? ????? ????? 001 ????? 00110 11", slliw  , I, if(BITS(imm,5,5) == 0) R(dest) = SEXT(BITS(src1 << BITS(imm,5,0),31,0),32));
  INSTPAT("010000? ????? ????? 101 ????? 00110 11", sraiw  , I, if(BITS(imm,5,5) == 0) R(dest) = SEXTS(BITS(src1,31,0),32) >> BITS(imm,5,0));
  //mul-longlong add
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = src1*src2);
  //shift add
  INSTPAT_U("0000000 ????? ????? 101 ????? 00110 11",srliw , I, R(dest) = SEXT((BITS(usrc1,31,0) >> BITS(uimm,4,0)),32));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw  ,  R, R(dest) = SEXTS(BITS(src1,31,0),32) >> BITS(src2,4,0));
  INSTPAT_U("0000000 ????? ????? 101 ????? 01110 11", srlw , R, R(dest) = SEXT((BITS(usrc1,31,0) >> BITS(usrc2,4,0)),32));
  //switch add
  INSTPAT_U("??????? ????? ????? 110 ????? 11000 11", bltu , B, s->dnpc = (usrc1 < usrc2 ? s->pc + uimm : s->snpc));
  
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
