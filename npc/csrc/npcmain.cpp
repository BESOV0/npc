#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vnpc.h"
#include "stdio.h"
#include <stdlib.h>
#include <assert.h>
#include "svdpi.h"
#include "Vnpc__Dpi.h"
#include <getopt.h>
#include "assert.h" 
vluint64_t main_time = 0;  //initial 仿真时间
static char *img_file = NULL;
static char *log_file = NULL;
long img_size;
 
 
double sc_time_stamp()
{
    return main_time;
}
 
Vnpc *top = new Vnpc("top");

int ebreak_flag = 0;
int ebreak(long long int code){
	ebreak_flag = 1;
	if(code == 0){
	printf("HIT GOOD TRAP\n");
	return 0;
	}
	else
	printf("HIT BAD TRAP\n");
	return 0;
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
 //00004297             auipc   t0,4
 //000002b7             lui     t0,0
 //ff9ff2ef             jal     t0,-8  0xff,0x9f,0xf2,0xef
 //00100073		ebreak
unsigned char instr[4096] ={0x00,0x80,0x0e,0x13,0xff,0xce,0x0e,0x93,0x04,0x0e,0x8f,0x13,0x00,0x00,0x42,0x97,0x00,0x00,0x02,0xb7,0x00,0x10,0x00,0x73}; 

static unsigned int pmem_read (unsigned long int n){
	unsigned int a;
	if(img_size == 128){
	a = instr[n];
	a = ((a << 8 | instr[n+1]) << 8 | instr[n+2] ) << 8 | instr[n+3];
	}
	else{
	a = instr[n+3];
	a = ((a << 8 | instr[n+2]) << 8 | instr[n+1] ) << 8 | instr[n];
	}
	
	return a;
}
 
static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 128; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  //Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(instr, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"log"      , required_argument, NULL, 'l'},
    {0          , 0                , NULL,  0 },
    };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'l': log_file = optarg; break;
      case 1:   img_file = optarg;return 0;
      default:
        printf("\t-f,--ftrace=FILE     read  elf file\n");
        return 0;
    }
  }
  return 0;
}
 
int main(int argc, char **argv)
{


    parse_args(argc, argv);

    img_size = load_img();
    assert(img_size < 4096);
    //Verilated::commandArgs(argc, argv); 
    Verilated::traceEverOn(true); //导出vcd波形需要加此语句
 
    VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此语句
 
    //Vnpc *top = new Vnpc("top"); //调用VAccumulator.h里面的IO struct
 
    top->trace(tfp, 0);   
    tfp->open("wave.vcd"); //打开vcd
    reset(10);
    while (sc_time_stamp() < 30 && !Verilated::gotFinish() && (ebreak_flag==0)) 
    { //控制仿真时间
    		unsigned long int pc = top->pc - 0x0000000080000000;
                top->inst = pmem_read(pc);            
  		top->eval();
		tfp->dump(main_time); //dump wave
        	main_time++; //推动仿真时间
        	single_cycle();
    }

    top->final();
    tfp->close();
    delete top;
 
    return 0;
}
