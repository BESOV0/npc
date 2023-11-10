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
#include <SDL2/SDL.h>
#include <dlfcn.h>

/************************pmem**********************/
#define pmem_size 0x10000000
/**********************IO ADDR*********************/
#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)
/*******************************Log***************************/
#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE

#define log_write(...) IFDEF(CONFIG_TARGET_NATIVE_ELF, \
  do { \
    extern FILE* log_fp; \
    extern bool log_enable(); \
    if (log_enable()) { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
    } \
  } while (0) \
)

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
    log_write(__VA_ARGS__); \
  } while (0)
  
  
#define Log(format, ...) \
   _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
       __FILE__, __LINE__, __func__, ## __VA_ARGS__)
/******************************************************/
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
void dump_gpr();
uint8_t* guest_to_host(long long paddr);
/************************difftest*********************/
#define DIFFTEST 1
#ifdef DIFFTEST
typedef struct {
  uint64_t gpr[32];
  uint64_t pc;
} reg_struct;
void difftest_one_step(char a);
bool difftest_check(uint32_t inst);
bool checkregs(reg_struct *ref, reg_struct *dut, uint32_t inst);
reg_struct get_dut_state(uint64_t *dut_reg,uint64_t pc);
void init_difftest(char *ref_so_file, long img_size);
#endif
/************************timer**********************/
extern uint64_t boot_time;
uint64_t get_time();
/**********************keyboard********************/
void keyboard_update(char *ebreak_flag);
void key_enqueue(uint32_t am_scancode);
uint32_t key_dequeue();
void send_key(uint8_t scancode, bool is_keydown);
void init_keymap();
/***********************vga***********************/
#define SCREEN_W 400//640
#define SCREEN_H 300//480
extern void *vmem;
extern uint32_t *vgactl_port_base;
void init_screen();
void init_vga(); 
void vga_update_screen();
void free_vga();
uint32_t screen_size();
