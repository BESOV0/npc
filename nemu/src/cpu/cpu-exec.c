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
#include <common.h>
#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 200
/////////////////////////////////////////////////////////ITRACR//////////////////////////////
#define BUFFER_SIZE 16
typedef struct {
    unsigned int buffer[BUFFER_SIZE];
    volatile unsigned int pW; //write addr
    volatile unsigned int pR; //read addr
    volatile unsigned int a;// counter
}ring_buffer;

void ring_buffer_init(ring_buffer *dst_buf)
{
    dst_buf->pW = 0;
    dst_buf->pR = 0;
    dst_buf->a = 0;
}

void ring_buffer_write(unsigned int c, ring_buffer *dst_buf)
{
    int i = (dst_buf->pW + 1)%BUFFER_SIZE;
        dst_buf->buffer[dst_buf->pW] = c;
        dst_buf->pW = i;
        if(dst_buf->a < BUFFER_SIZE)
    	dst_buf->a = dst_buf->a + 1;
}

int ring_buffer_read(unsigned int *c,ring_buffer *dst_buf)
{
	int count = 0;
    	while(1){
        	*c = dst_buf->buffer[dst_buf->pR];
        	dst_buf->pR = (dst_buf->pR + 1)%BUFFER_SIZE;
        	count++;
        	if((count != BUFFER_SIZE) && ( count < (dst_buf->a))){
        		++c;
        	}
        	else{
        	dst_buf->pR = 0;
        	break;
        	}
        } 
    
    return 0;
}

extern unsigned long int sym_value[9999];
extern unsigned long int sym_size[9999]; 
extern unsigned long int sym_name_num[9999];
extern unsigned char strtable[9999];
extern unsigned int sym_func_num;

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();
bool watchpoints_expr();
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) 
  { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINT
  if (!watchpoints_expr()) {
  nemu_state.state = NEMU_STOP;
  }
#endif
}
//////////////////////////RINGBUF/////////////////////////////////
unsigned int inst_ringbuff[BUFFER_SIZE]={};//ringbuff arry
ring_buffer test_buffer;
//////////////////////////////////////////////////
#ifdef CONFIG_FTRACE
uint32_t backcount = 0;//suojinduiqi
#endif 
static void exec_once(Decode *s, vaddr_t pc) {  
  ring_buffer_write(pc,&test_buffer);
//////////////////
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
/////////////////
  ring_buffer_write(s->isa.inst.val,&test_buffer);
  ring_buffer_read(inst_ringbuff,&test_buffer);
////////////////
  cpu.pc = s->dnpc;
#ifdef CONFIG_FTRACE
	uint32_t finst = s->isa.inst.val;
	uint32_t opcode = (finst & 0x0000007f);
	uint32_t fun3 = (finst & 0x00007000) >> 12;
	uint32_t rs1 = (finst & 0x000f8000) >> 15;
	uint32_t rd = (finst & 0x00000f80) >> 7;	
	bool jalorjalr = (opcode == 0x0000006f) || ((opcode == 0x00000067) && (fun3 == 0x00000000));
	bool jalr =  (opcode == 0x00000067) && (fun3 == 0x00000000);
	if( jalorjalr && (rd == 0x00000001)){
		for(int icnt = 0; icnt < sym_func_num; icnt++){
		unsigned char* pstr = strtable+sym_name_num[icnt];
		if((cpu.pc >= sym_value[icnt]) && (cpu.pc < sym_value[icnt]+sym_size[icnt])){
			if( backcount == 0){
			backcount++;
			printf("0x%016lx: call [%s@0x%016lx]\n",pc,pstr,sym_value[icnt]);
			}
			else{
			uint32_t temp_backcount = backcount;
			printf("0x%016lx:",pc);
				while(temp_backcount--){
				printf("   ");
				}
			printf("call [%s@0x%016lx]\n",pstr,sym_value[icnt]);
			backcount++;
			}
		}
		/*
		else
		printf("0x%016lx: call [%s@0x%016lx]\n",ftrace_pc,"???",sym_value[i]);
		*/
		}
	}
		
	if( jalr && (rd == 0x00000000) && (rs1 == 0x00000001))
	{
		for(int icnt = 0; icnt < sym_func_num; icnt++){
		unsigned char* pstr = strtable+sym_name_num[icnt];		
		if((pc >= sym_value[icnt]) && (pc < sym_value[icnt]+sym_size[icnt])){
			if(backcount == 0)
			printf("0x%016lx: ret [%s]\n",pc,pstr);
			else{
			uint32_t temp_backcount = backcount -1;
			printf("0x%016lx:",pc);
				while(temp_backcount--){
				printf("   ");
				}
			printf("ret [%s]\n",pstr);
			backcount--;
			}
		}			
		/*
		else
		printf("0x%016lx: ret [%s]\n",ftrace_pc,"???");
		*/
		}
	}		
#endif  
  
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);//执行一次
    g_nr_guest_inst ++;
    //printf("pc is %lx\n",cpu.pc);
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) 
  Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else 
  Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: 
    case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();
  ring_buffer_init(&test_buffer);
  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: 
    case NEMU_ABORT:
/////////////////////////////////////////////////////////RINGBUFF////////////////////////////////////////////////////////////
      for(int cc=0;cc< test_buffer.a;cc=cc+2){
      	if(((nemu_state.state == NEMU_ABORT) || (nemu_state.state == NEMU_END && nemu_state.halt_ret != 0)) && (cc == test_buffer.pW-2)){
      	Log("%s 0x%08x ", ANSI_FMT("BAD PC IS", ANSI_FG_RED),inst_ringbuff[cc]);
      	//printf("BAD PC IS 0x%08x ",inst_ringbuff[cc]);
      	Log("%s 0x%08x ", ANSI_FMT("BAD INST IS", ANSI_FG_RED),inst_ringbuff[cc+1]);
      	}
        else{
        //printf("GOOD PC IS 0x%08x ",inst_ringbuff[cc]);
        Log("%s 0x%08x", ANSI_FMT("GOOD PC IS", ANSI_FG_GREEN),inst_ringbuff[cc]);
        Log("%s 0x%08x ", ANSI_FMT("GOOD INST IS", ANSI_FG_GREEN),inst_ringbuff[cc+1]);
        }
        }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}

