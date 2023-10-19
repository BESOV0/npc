#include <nvboard.h>
#include <VYiwei.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(VYiwei* Yiwei);//修改

static void single_cycle() {
  dut.clk = 0; dut.eval();

  dut.clk = 1; dut.eval();
}

static void reset(int n) {
  dut.rst = 0;
  while (n -- > 0) 
  single_cycle();
  dut.rst = 1;
}

int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  reset(10);

  while(1) {
    single_cycle();
    nvboard_update();
  }
}
