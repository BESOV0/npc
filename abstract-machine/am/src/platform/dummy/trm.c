#include <am.h>
//#include "npc.h"
//#include <riscv.h>
Area heap = RANGE(NULL, NULL);

void putch(char ch) {
	//outb(SERIAL_PORT, ch);
}

void halt(int code) {
  while (1);
}
