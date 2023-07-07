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
#include <memory/paddr.h>
#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"


static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args);

static int cmd_info(char *args);

static int cmd_x(char *args);

static int cmd_p(char *args);

static int cmd_d(char *args);

static int cmd_w(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Single step debugging", cmd_si},
  { "info", "information of reg", cmd_info},
  { "x", "search mem", cmd_x },
  { "p", "solve expr", cmd_p },
  { "d", "delete watchpoint", cmd_d },
  { "w", "set a watchpoint", cmd_w },
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_si(char *args){
  int cnt;
     if (args == NULL)
        cnt = 1;
     else
     sscanf(args,"%d",&cnt);        
     cpu_exec(cnt);
  return 0;
}

static int cmd_info(char *args){
   char *mode = args;
   //sscanf(args,"%s",mode); 
   if (strcmp(mode,"r") == 0)
      isa_reg_display();
   else if (strcmp(mode,"w") == 0) 
      wp_info();
   return 0;
}

word_t vaddr_read(vaddr_t addr, int len);

static int cmd_x(char *args){

   const char s[2]= " ";
   //次数的字符串指针
   char *len = strtok(args, s);
   //地址的字符串指针
   char *addr = strtok(NULL, s);
   
   if((addr == NULL) || (len == NULL))
   {
   printf("wrong format please try again\n");
   printf("Format is x [N] [Location]\n");
   return 0;
   }
   
   int n;
   vaddr_t addrr;
   unsigned int mem;
   
   char *str;
   //数据类型转换
   sscanf(len,"%d",&n); 
   addrr = strtol(addr,&str,16);

   
     for (int i = 0; i < n; i++) 
     {
         mem = vaddr_read(addrr + i * 4, 4);
	 printf("0x%08lx	", addrr + i * 4);
	 printf("0x%08x\n",mem);
     }
     
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

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

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

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { 
        nemu_state.state = NEMU_QUIT;
        return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
