#include "Vnpc.h"
#include "npc.h"

#define NR_CMD ARRLEN(cmd_table)
//#define VCD_WAVE

#ifdef VCD_WAVE
#include "verilated_vcd_c.h"
#endif

vluint64_t main_time = 0;  //initial sim time
Vnpc *top = new Vnpc("top");
static char *img_file = NULL;
static char *diff_so_file = NULL;
long img_size;
char NPC_STOP = 0; 
 
double sc_time_stamp()
{
    return main_time;
}
///////////////////////////////////NPC Command Part///////////////////////////
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
   Log("wrong format please try again");
   Log("Format is x [N] [Location]");
   return 0;
   }
   
   uint64_t m,n,addr_temp;
   long long *mem;
   mem =(long long*)malloc(sizeof(long long));
   char *str;
   addr_temp = strtol(addr,&str,16);
   sscanf(len,"%ld",&n); 
   

     for (int i = 0; i < n; i++) 
     {
         pmem_read_test(addr_temp + i * 4,mem,8);
	 printf("0x%016lx  ",addr_temp + i * 4);
	 printf("0x%016llx\n",*mem);
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
   Log("result is %d",expr_result);
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
//############################################DPI-C Part#####################################################//
char ebreak_flag = 0;
extern "C" void ebreak(long long int code){
	ebreak_flag = 1;
	if(code == 0)
	Log("%s",ANSI_FMT("HIT GODD TRAP", ANSI_FG_GREEN));
	else
	Log("%s",ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED));
}  
/*****************************initial instrcution Part****************************/
 //00800e13          	addi	t3,x0,8
 //ffce0e93          	addi	t4,t3,-4
 //040e8f13		addi	t5,t4,64
 //00004297             auipc   t0,4
 //000002b7             lui     t0,0
 //ff9ff2ef             jal     t0,-8  0xff,0x9f,0xf2,0xef
 //00100073		ebreak
uint8_t instr[128] = {0x13,0x0e,0x80,0x00,0x93,0x0e,0xce,0xff,0x13,0x8f,0x0e,0x04,0xb7,0x02,0x00,0x00,0x97,0x42,0x00,0x00,0x73,0x00,0x10,0x00};
//////////////////////////////////pmem//////////////////////////////////////////// 
static uint8_t pmem[pmem_size] PG_ALIGN = {};
uint8_t* guest_to_host(long long paddr) { return pmem + paddr - 0x80000000;}
uint8_t* guest_to_host_instr(long long paddr) { return instr + paddr - 0x80000000;}

static inline uint64_t host_read(void *addr, int len) {
  switch (len) { 	
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: assert(0);
  }
}

static inline void host_write(void *addr, int len, uint64_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: assert(0);
  }
}

extern "C" void pmem_read (long long raddr,long long *rdata){
	long long a;
	if(img_size == 0){
	a = host_read(guest_to_host_instr(raddr),8);
	}
	else{
	if(raddr < 0x80000000){
	printf("%llx\n",raddr);
	}
	assert(raddr - 0x80000000 >= 0);
	assert(raddr - 0x80000000 < pmem_size);
	a = host_read(guest_to_host(raddr),8);
	}
	*rdata = (long long)a;
}

void pmem_write(long long waddr, long long wdata, char wmask) {
	uint64_t rdata;
	rdata = host_read(guest_to_host(waddr),8);
	long long mask = 0 ;
	long long temp = 0x00000000000000ff;
	for(int i = 0 ; i < 8 ; i++ ){
		if(wmask & (0x01 << i)){
			mask |= (temp << (i * 8));
		}
	}
	long long temp_data = (wdata & mask) | (rdata & ~mask);
	host_write(guest_to_host(waddr), 8, temp_data);
}
void vmem_write(void *waddr,uint64_t wdata, char wmask) {
	uint64_t rdata;
	rdata = host_read(waddr,8);
	long long mask = 0 ;
	long long temp = 0x00000000000000ff;
	for(int i = 0 ; i < 8 ; i++ ){
		if(wmask & (0x01 << i)){
			mask |= (temp << (i * 8));
		}
	}
	long long temp_data = (wdata & mask) | (rdata & ~mask);
	host_write(waddr, 8, temp_data);
}

uint64_t temp_mtime = 0;
extern "C" void pmem_read_test(long long raddr,long long *rdata,char len){
	switch(raddr){
	case RTC_ADDR + 8 : {temp_mtime = get_time(); *rdata = (temp_mtime >> 32);return;}
	case RTC_ADDR :     {*rdata = temp_mtime;return;}
	case KBD_ADDR :     {*rdata = key_dequeue();return;}
	case VGACTL_ADDR :  {*rdata = vgactl_port_base[0];return;}
	default:            { 	
			   /* if(raddr < 0x0000000080000000){
				printf("0x%016llx\n",raddr);
				printf("0x%016llx\n",addr);
				printf("0x%08x\n",inst);
				*rdata = 0;
				return;
				}
				*/
			      assert(raddr - 0x80000000 >= 0);
			      assert(raddr - 0x80000000 < pmem_size);    
			      *rdata = (long long)host_read(guest_to_host(raddr),(int)len); 
			      return;
			     }
	}
}

uint32_t size_vga;
uint32_t vga_flag = 0 ;
extern "C" void pmem_write_test(long long waddr, long long wdata,char wmask) {
	long long offset_min = waddr - FB_ADDR;
	long long offset_max = waddr - size_vga - FB_ADDR;
	bool ADDR_NOT_IN_FB = (offset_min < 0) || (offset_max > 0);
	if(ADDR_NOT_IN_FB){
		switch(waddr){
		case SERIAL_PORT :     {putchar((char)wdata);return;}
		case VGACTL_ADDR + 8 : {vgactl_port_base[1] = (uint32_t)wdata;return;}
		default:               { 
					 assert(waddr - 0x80000000 >= 0);
					 assert(waddr - 0x80000000 < pmem_size);
					 pmem_write(waddr,wdata,wmask);
					 return;
					}
		}
	}
	else{
	vmem_write((uint8_t*)vmem + offset_min,wdata,wmask);
	//host_write((uint8_t*)vmem + offset_min, (int)len, wdata);
	return;
	}	
}
////////////////////////////////load outside instrcution part////////////////////////////////////
static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 0; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  //Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"diff" , required_argument, NULL, 'd'},
    {0      , 0                , NULL,  0 },
    };
  int o;
  while ( (o = getopt_long(argc, argv, "-d:", table, NULL)) != -1) {
    switch (o) {
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        Log("\t-f,--ftrace=FILE     read  elf file");
        return 0;
    }
  }
  return 0;
}
////////////////////////////////////////////////////////sim Part///////////////////////////////////////////////////

static void single_cycle() {
  top->clk = 0; 
  top->eval();
  top->clk = 1; 
  top->eval();
}

static void reset(int n) {
  top->rst = 0;
  while (n -- > 0){ 
  single_cycle();
  }
  top->rst = 1;
}

unsigned long int temp = 0;
unsigned char startover_flag = 0 ;
uint64_t g_timer = 0;
uint64_t inst_num = 0;
uint64_t cycle_num = 0;
uint64_t dut_pc = 0 ;
void simmain(unsigned long int exectime){
    if (startover_flag == 1){
    Log("This program is finished please lanch again to run other programs");
    return;
    }
    
    if (NPC_STOP == 1){
    NPC_STOP = 0; 
    }

    #ifdef VCD_WAVE
    Verilated::traceEverOn(true); 
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);   
    tfp->open("wave.vcd");
    #endif
    if(exectime != -1)
    temp+= exectime;
    else
    temp = exectime;
    uint64_t timer_start = get_time();
    while (sc_time_stamp() < temp && (ebreak_flag == 0) && (NPC_STOP == 0)) 
    {		
    		#ifdef DIFFTEST
    		char skip_device = top->addr_is_device ;
    		uint32_t difftest_inst = top->test_wb_inst ;
    		#endif
    		single_cycle();
    		/*
                if (exectime != -1){
                Log("if_pc is 0x%lx instrcution is 0x%08x",top->test_if_pc,top->test_if_inst);                    
                Log("id_pc is 0x%lx instrcution is 0x%08x",top->test_id_pc,top->test_id_inst);
                Log("ex_pc is 0x%lx instrcution is 0x%08x",top->test_ex_pc,top->test_ex_inst);            
        	Log("ls_pc is 0x%lx instrcution is 0x%08x",top->test_ls_pc,top->test_ls_inst);         	
        	Log("wb_pc is 0x%lx instrcution is 0x%08x",top->test_wb_pc,top->test_wb_inst);    
        	Log("npc_stall is %d",top->npc_stall);                
  		}
  		*/
        	if (!watchpoints_expr()) {
                NPC_STOP = 1;
                temp = main_time + 1;
                }  
    		//5 stage core inst start with 0x00000000 skip it and bubble is 0x00000013 skip it 
		bool skip_wb_inst_req  = (top->test_wb_inst != 0x00000013) && (top->test_wb_inst != 0);
		//stall posedge is executed one inst but at the first time cpu execute inst 0x00000000 so skip it
		//when npc_stall is hign cpu is stalled so skip it
		//the reason why npc_stall and posedge_stall's logic is or is why posedge is coming npc_stall is 1 but this cycle exexcutes inst so the logic is or
		//when stall negedge cpu don't execute inst but other condition is satisfied so skip it
		bool skip_wb_stall_req = ((top->posedge_stall == 1) && top->test_wb_pc != 0x80000000) || (top->npc_stall == 0) && (top->negedge_stall == 0);
                if(skip_wb_inst_req && skip_wb_stall_req){
                	inst_num++;
                #ifdef DIFFTEST              
                dut_pc = top->test_wb_pc ;
                difftest_one_step(skip_device);
                //Log("nemu exec once at cycle %ld",cycle_num);  
                if(!difftest_check(difftest_inst))
                	ebreak_flag = 1 ;
                #endif
                }
                cycle_num++;
                #ifdef VCD_WAVE
		            tfp->dump(main_time); //dump wave
		            #endif
        	      main_time++;
        	      vga_update_screen();
        	      if(inst_num % 600 == 0)
        	      keyboard_update(&ebreak_flag);         	
    }
    uint64_t timer_end = get_time();
    g_timer += timer_end - timer_start;
    if((ebreak_flag==1) && (startover_flag == 0)){
    top->final();
    #ifdef VCD_WAVE
    tfp->close();
    #endif
    delete top;
    startover_flag = 1 ;
    free_vga();
    Log("cycle num is %ld,inst num is %ld,time is %ld us",cycle_num, inst_num, g_timer);
    Log("simulation frequency is %ld inst/s",(inst_num *1000000)/ g_timer);
    Log("IPC is %lf",(double)inst_num/(double)cycle_num);
    } 
    
} 

/******************************************************main***********************************************************/ 

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}

int main(int argc, char **argv)
{
    init_sdb();
    init_keymap();
    init_vga(); 
    size_vga = screen_size();
    parse_args(argc, argv);
    img_size = load_img();//pass arg
    reset(5);
    #ifdef DIFFTEST
    init_difftest(diff_so_file, img_size);
    #endif
    assert(img_size < pmem_size);
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
    						{ Log("Unknown command '%s' ", cmd); }
    					}
    return 0;
}
