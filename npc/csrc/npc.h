#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <getopt.h>
#include <assert.h> 
#include "macro.h"

#define uint64_t unsigned long int

typedef unsigned long int word_t;
word_t expr(char *e, bool *success);
int wp_info();
void LIST_DEL(int num);
void new_wps(char *str);
bool watchpoints_expr();
unsigned int pmem_read (unsigned long int n);
unsigned long int isa_reg_str2val(const char *s);
void init_wp_pool();
void init_regex();
