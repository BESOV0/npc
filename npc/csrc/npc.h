#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <getopt.h>
#include <assert.h> 
#include "macro.h"
#include <cstdint>
#include <cassert>
#include <cstdlib>
#include <svdpi.h>
#include "Vnpc__Dpi.h"
#include "verilated_dpi.h"
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/time.h>

typedef unsigned long int word_t;
word_t expr(char *e, bool *success);
int wp_info();
void LIST_DEL(int num);
void new_wps(char *str);
bool watchpoints_expr();
unsigned long int isa_reg_str2val(const char *s);
void init_wp_pool();
void init_regex();

void simmain(unsigned long int exectime);
extern "C" void pmem_read (long long raddr,long long *rdata);
void dump_gpr();


uint64_t get_time();
