#include <nvboard.h>
#include <Vencode.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(Vencode* encode);

static void single_cycle() {
  dut.clk = 0; dut.eval();
  dut.clk = 1; dut.eval();
}

int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();


  while(1) {
    single_cycle();
    nvboard_update();
  }
}

