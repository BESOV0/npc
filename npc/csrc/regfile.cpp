#include "npc.h"

uint64_t *cpu_gpr = NULL;
extern uint64_t dut_pc;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void dump_gpr(){
  int i;
  for (i = 0; i < 32; i++) {
    if ((i+1)%2!=0)
    printf("%s is 0x%016lx    ",regs[i], cpu_gpr[i]);
    else
    printf("%s is 0x%016lx\n",regs[i], cpu_gpr[i]);
  }
}

unsigned long int isa_reg_str2val(const char *s) {
	for (int i = 0;i<32;i++){	  
	   if (strcmp("pc",s) == 0)
	      return dut_pc; 
	   else if(strcmp(regs[i],s) == 0)
	      return cpu_gpr[i];
	}
	return 0;
}
#ifdef DIFFTEST
bool checkregs(reg_struct *ref, reg_struct *dut) {
  if(ref->pc != dut->pc){
    Log("%s",ANSI_FMT("DIFFTEST PC IS FALIED!", ANSI_FG_RED));
    Log("NEMU PC IS 0x%016lx NPC PC IS 0x%016lx",ref->pc,dut->pc);
    return false;
  }
  
  for (int i = 0; i < 32; i++) {
    if(ref->gpr[i] != dut->gpr[i]){
      Log("%s",ANSI_FMT("DIFFTEST REG IS FALIED!", ANSI_FG_RED));
      Log("NEMU NEXT PC IS 0x%016lx NPC NEXT PC IS 0x%016lx",ref->pc,dut->pc);
      Log("REG IS %s NEMU IS 0x%016lx NPC IS 0x%016lx",regs[i],ref->gpr[i],dut->gpr[i]);
      return false;
    }
  }
  return true;
}

reg_struct get_dut_state(uint64_t *dut_reg,uint64_t pc) {
  reg_struct dut;
  for (int i = 0; i < 32; i++) {
    dut.gpr[i] = dut_reg[i];
  }
  dut.pc = pc;
  return dut;
}
#endif
