#include <nvboard.h>
#include <Vkeyboard.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(Vkeyboard* keyboard);//修改

static void single_cycle() {
  dut.clk = 0; dut.eval();

  dut.clk = 1; dut.eval();
}

static void reset() {
  dut.rst = 1; dut.eval();

  dut.rst = 0; dut.eval();
  
  dut.rst = 1; dut.eval();
}

int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  reset();

  while(1) {
    single_cycle();
    nvboard_update();
  }
}

