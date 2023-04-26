/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
 // assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *ftrace_elf = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}
////////////////////////////////////////////////////////////FTrace////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
void ELF_header_64_parse(Elf64_Ehdr* ehdr , FILE *temp_fp) {
    fseek(temp_fp, 0, SEEK_SET);
    int ret = fread(ehdr, sizeof(Elf64_Ehdr), 1, temp_fp);
    assert(ret == 1);
}

unsigned long int sym_value[9999];
unsigned long int sym_size[9999]; 
unsigned long int sym_name_num[9999];
unsigned char strtable[9999];
unsigned int sym_func_num;

int section_header_64_parse(Elf64_Ehdr* ehdr, FILE *temp_fp) {
    char shstrtable[9999];   
    Elf64_Shdr shdr[9999];
    Elf64_Sym  sym[9999];
    int i,j =0,k = 0;
    int count = ehdr->e_shnum;    //节区表的表项数
    char *temp = shstrtable;
    fseek(temp_fp, ehdr->e_shoff, SEEK_SET);
    int ret = fread(shdr, sizeof(Elf64_Shdr), count, temp_fp);
    if(ret == count){
    Log("Selection head is GOOD");
    }
    fseek(temp_fp, shdr[ehdr->e_shstrndx].sh_offset, SEEK_SET);
    ret = fread(shstrtable, 1, shdr[ehdr->e_shstrndx].sh_size, temp_fp);
    for (i = 0; i< count ; i++){
    	temp = shstrtable;
    	temp = temp + shdr[i].sh_name;    	
    	if(strcmp(temp,".symtab") == 0){
    	j = shdr[i].sh_size;
    	fseek(temp_fp, shdr[i].sh_offset, SEEK_SET);
    	ret = fread(sym, sizeof(Elf64_Sym), (j / 24), temp_fp);
    	if(ret == j / 24)
   	Log("Symbol Selection is GOOD");  	
    	}
    	if(strcmp(temp,".strtab") == 0){
    	fseek(temp_fp, shdr[i].sh_offset, SEEK_SET);
    	ret = fread(strtable, 1,shdr[i].sh_size, temp_fp);
    	if(ret == shdr[i].sh_size){
   	Log("String Table is GOOD");
   	}
    	}   
    } 
    //symbol table find function
    //printf(" symboltable size is %x\n",j);
    for (i = 0; i< (j/24) ; i++){   
    	if(ELF64_ST_TYPE(sym[i].st_info) == STT_FUNC){   	
    		sym_value[k] = sym[i].st_value;
    		sym_size[k] = sym[i].st_size; 
    		sym_name_num[k] = sym[i].st_name;
    		k++;
    	}      
    }
    return k;
}
//#define FTRACETEST
void init_ftrace(char* ftrace_elf) {
	static Elf64_Ehdr ehdr[1];
	// 打开文件
	FILE* temp_fp;
	temp_fp = fopen(ftrace_elf, "r");
	if (NULL == temp_fp)
	{
		Log("fail to open the elf file or Ftrace is not enable");
	}
	else{
	ELF_header_64_parse(ehdr,temp_fp);
	sym_func_num = section_header_64_parse(ehdr,temp_fp);
	}
	#ifdef FTRACETEST
	for (int i = 0; i< sym_func_num ;i++){
	//printf("0x%016lx\n",sym_value[i]);
	unsigned char* p = strtable+sym_name_num[i];
	printf("%s %016lx %016lx\n",p,sym_value[i],sym_size[i]);	
	}
	#endif
}

//////////////////////////////////////////////////////////////////////////////////////////////////
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"ftrace"   , required_argument, NULL, 'f'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'f': ftrace_elf = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg;return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-f,--ftrace=FILE        read  elf file\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);
  
  /* Open the elf file. */
  init_ftrace(ftrace_elf);
  
  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
