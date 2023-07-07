#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "Vnpc.h"
#include <svdpi.h>
#include "Vnpc__Dpi.h"
#include "verilated_dpi.h"
#include "npc.h"
#include <readline/readline.h>
#include <readline/history.h>


#define NR_CMD ARRLEN(cmd_table)

vluint64_t main_time = 0;  //initial sim time
Vnpc *top = new Vnpc("top");
static char *img_file = NULL;
static char *log_file = NULL;
long img_size;
char NPC_STOP = 0; 
 
double sc_time_stamp()
{
    return main_time;
}
/////////////////////////////////////////////////////////////////NPC Command Part////////////////////////////////////////////////////////
void simmain(unsigned long int exectime);
unsigned int pmem_read (unsigned long int n);
void dump_gpr();
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  simmain(-1);
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args) {
  int cnt;
  if (args == NULL)
        cnt = 1;
  else
     sscanf(args,"%d",&cnt); 
            
     simmain(cnt);
  return 0;
}

static int cmd_x(char *args){

   const char s[2]= " ";
   char *len = strtok(args, s);
   char *addr = strtok(NULL, s);
   
   if((addr == NULL) || (len == NULL))
   {
   printf("wrong format please try again\n");
   printf("Format is x [N] [Location]\n");
   return 0;
   }
   
   int m,n,addr_temp;
   unsigned int mem;
   char *str;
   addr_temp = strtol(addr,&str,16);
   m = addr_temp - 0x80000000;
   sscanf(len,"%d",&n); 
   

     for (int i = 0; i < n; i++) 
     {
         mem = pmem_read(m + i * 4);
	 printf("0x%08x	   ",addr_temp + i * 4);
	 printf("0x%08x\n",mem);
     }
     
  return 0;
}

static int cmd_info(char *args){
   char *mode = args;
   if (strcmp(mode,"r") == 0)
      dump_gpr();
   else if (strcmp(mode,"w") == 0) 
      wp_info();
   return 0;
}

static int cmd_p(char *args){
   bool success;
   unsigned int expr_result;
   success = true;
   expr_result = expr(args,&success);
   printf("result is %d\n",expr_result);
   return 0;
}

static int cmd_d(char *args){
   int num;
   sscanf(args,"%d",&num);
   LIST_DEL(num);
   return 0;
}

static int cmd_w(char *args){
    new_wps(args);
    return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "q", "Exit NEMU", cmd_q },
  { "c", "Continue the execution of the program", cmd_c },
  { "x", "search mem", cmd_x },
  { "si", "Single step debugging", cmd_si},
  { "info", "information of reg", cmd_info},
  { "p", "solve expr", cmd_p },
  { "d", "delete watchpoint", cmd_d },
  { "w", "set a watchpoint", cmd_w },
  /* TODO: Add more commands */

};
////////////////////////////////////////////////////////////////DPI-C Part//////////////////////////////////////////////////////////////
char ebreak_flag = 0;
void ebreak(long long int code){
	ebreak_flag = 1;
	if(code == 0)
	printf("HIT GOOD TRAP\n");
	else
	printf("HIT BAD TRAP\n");
} 


uint64_t *cpu_gpr = NULL;
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
	      return top->pc; 
	   else if(strcmp(regs[i],s) == 0)
	      return cpu_gpr[i];
	}
	return 0;
}
////////////////////////////////////////////////////////////initial instrcution Part/////////////////////////////////////////////////////
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

unsigned int pmem_read (unsigned long int n){
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

////////////////////////////////////////////////////load outside instrcution part//////////////////////////////////////////////////
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
////////////////////////////////////////////////////////sim Part///////////////////////////////////////////////////

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
unsigned long int temp = 0;
unsigned long int pc = 0;
unsigned char startover_flag = 0 ;
void simmain(unsigned long int exectime){

     if (startover_flag == 1){
    printf("This program is finished please lanch again to run other programs\n");
    return;
    }
    
    if (NPC_STOP == 1){
    NPC_STOP = 0; 
    }
    
    //Verilated::commandArgs(argc, argv); 
    Verilated::traceEverOn(true); //导出vcd波形需要加此语句
    VerilatedVcdC* tfp = new VerilatedVcdC; //导出vcd波形需要加此语句
    //Vnpc *top = new Vnpc("top"); //调用VAccumulator.h里面的IO struct
    top->trace(tfp, 0);   
    tfp->open("wave.vcd"); //open vcd!Verilated::gotFinish() &&
    if(exectime != -1)
    temp+= exectime;
    else
    temp = exectime;
 
    while (sc_time_stamp() < temp && (ebreak_flag == 0) && (NPC_STOP == 0)) 
    {
    		pc = top->pc - 0x0000000080000000;
                top->inst = pmem_read(pc);
                if (exectime != -1)
        	printf("pc is 0x%016lx instrcution is 0x%08x\n",top->pc,top->inst);            
  		
        	if (!watchpoints_expr()) {
                NPC_STOP = 1;
                temp = main_time + 1;
                }  
                
                top->eval();
		tfp->dump(main_time); //dump wave
        	main_time++;
        	single_cycle();  	
    }
    
    if((ebreak_flag==1) && (startover_flag == 0)){
    top->final();
    tfp->close();
    delete top;
    startover_flag = 1 ;
    } 
    
} 
///////////////////////////////////////////////////////////////main//////////////////////////////////////////////////////////////// 

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}

int main(int argc, char **argv)
{
    init_sdb();
    parse_args(argc, argv);
    img_size = load_img();//pass arg
    assert(img_size < 4096);
    
    reset(10);
    
    for (char *str; (str = rl_gets()) != NULL; ) {
    		char *str_end = str + strlen(str);
    			/* extract the first token as the command */
    			char *cmd = strtok(str, " ");
    				if (cmd == NULL) { continue; }
    				/* treat the remaining string as the arguments,
    				 * which may need further parsing
     				*/
    				char *args = cmd + strlen(cmd) + 1;
    				if (args >= str_end) {
    				args = NULL;
   				 }
    				   						    							
    				 int i;
   				 for (i = 0; i < NR_CMD; i ++) {
      					if (strcmp(cmd, cmd_table[i].name) == 0) {
        					if (cmd_table[i].handler(args) < 0) { 
       						 return 0; }
        						break;
      							}
    					}
    					if (i == NR_CMD) 
    						{ printf("Unknown command '%s'\n", cmd); }
    					}
    return 0;
}
