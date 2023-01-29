#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vnpc.h"
#include "stdio.h"
#include <stdlib.h>
#include <assert.h>
#include "svdpi.h"
#include "Vnpc__Dpi.h"
vluint64_t main_time = 0;  //initial 仿真时间
 
double sc_time_stamp()
{
    return main_time;
}
 
Vnpc *top = new Vnpc("top");

int ebreak_flag = 0;
void ebreak(){
	ebreak_flag = 1;
} 

static void single_cycle() {
  top->clk = 0; top->eval();

  top->clk = 1; top->eval();
}

static void reset(int n) {
  top->rst = 0;
  while (n -- > 0) 
  single_cycle();
  top->rst = 1;
}
//16 8 4 2 1
 //000000001000 00000 000 11100 0010011
 //111111111100 11100 000 11101 0010011
 //000001000000 11101 000 11110 0010011
 //000000000000 00000 000 00000 1110011
 //00800e13          	addi	t3,x0,8
 //ffce0e93          	addi	t4,t3,-4
 //040e8f13		addi	t5,t4,64
 //00000073		ebreak
unsigned char instr[64] ={0x00,0x80,0x0e,0x13,0xff,0xce,0x0e,0x93,0x04,0x0e,0x8f,0x13,0x00,0x00,0x00,0x73}; 
static unsigned int pmem_read (unsigned long int n){
	unsigned int a;
	a = instr[n];
	a = ((a << 8 | instr[n+1]) << 8 | instr[n+2] ) << 8 | instr[n+3];
	return a;
}
 
int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv); 
    Verilated::traceEverOn(true); //导出vcd波形需要加此语句
 
    VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此语句
 
    //Vnpc *top = new Vnpc("top"); //调用VAccumulator.h里面的IO struct
 
    top->trace(tfp, 0);   
    tfp->open("wave.vcd"); //打开vcd
    reset(10);
    while (sc_time_stamp() < 20 && !Verilated::gotFinish()&& (ebreak_flag==0)) 
    { //控制仿真时间
    		unsigned long int pc = top->pc - 0x0000000080000000;
                top->inst = pmem_read(pc);
                single_cycle();
  		top->eval();
		tfp->dump(main_time); //dump wave
        	main_time++; //推动仿真时间
    }
    top->final();
    tfp->close();
    delete top;
 
    return 0;
}
