#include "npc.h"

#ifdef  DIFFTEST

extern uint64_t *cpu_gpr;
extern uint64_t dut_pc;

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint64_t addr, void *buf, size_t n, bool direction))dlsym(handle , "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t NO))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)() = (void (*)())dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init();
  ref_difftest_memcpy(0x80000000,guest_to_host(0x80000000), img_size, DIFFTEST_TO_REF);
  reg_struct dut_reg_cpy = get_dut_state(cpu_gpr, 0x80000000);
  ref_difftest_regcpy(&dut_reg_cpy, DIFFTEST_TO_REF);
}

void difftest_one_step(char a) {
	if(a == 0)
  		ref_difftest_exec(1);
  	else{
  		reg_struct temp_dut, temp_ref;
  		temp_dut = get_dut_state(cpu_gpr,dut_pc);
  		ref_difftest_regcpy(&temp_dut,DIFFTEST_TO_REF);
  	}
}
bool difftest_check(uint32_t inst) {
  reg_struct ref, dut;
  ref_difftest_regcpy(&ref, DIFFTEST_TO_DUT);
  dut = get_dut_state(cpu_gpr,dut_pc);
  return checkregs(&ref, &dut, inst);
}

#endif
