#include <common.h>
#include "syscall.h"
/*
#define STRACE
enum {
  SYS_exit ,
  SYS_yield,
  SYS_open,
  SYS_read,
  SYS_write,
  SYS_kill,
  SYS_getpid,
  SYS_close,
  SYS_lseek,
  SYS_brk,
  SYS_fstat,
  SYS_time,
  SYS_signal,
  SYS_execve,
  SYS_fork,
  SYS_link,
  SYS_unlink,
  SYS_wait,
  SYS_times,
  SYS_gettimeofday
};
*/
  #ifdef STRACE
const char *strs[] = {
  "SYS_exit", "SYS_yield", "SYS_open", "SYS_read", "SYS_write", "SYS_kill", "SYS_getpid", "SYS_close",
  "SYS_lseek", "SYS_brk", "SYS_fstat", "SYS_time", "SYS_signal", "SYS_execve", "SYS_fork", "SYS_link",
  "SYS_unlink", "SYS_wait", "SYS_times", "SYS_gettimeofday"
};
  #endif
//Context is regfile strcut shangxiawen
size_t write_temp(int fd, const void* buf, size_t len){
	if(fd == 1 || fd == 2){
	for(int i = 0; i < len; i++)
  	putch(*(char *)(buf+i));
  	return len;
  	}
  	else
  	return -1 ;
}

size_t brk_temp(size_t addr){
  	return 0 ;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;//a7
  a[1] = c->GPR2;//a0
  a[2] = c->GPR3;//a1
  a[3] = c->GPR4;//a2
  
  switch (a[0]) {
  	case SYS_yield: yield(); break;
  	case SYS_exit: halt(a[0]); break;
  	case SYS_write: c->GPRx = write_temp(a[1],(void*)a[2],a[3]); break;
  	case SYS_brk: c->GPRx = brk_temp(a[1]); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  #ifdef STRACE
  Log("%s call, syscall ID is %d, return value is %d",strs[a[0]],a[0],c->GPRx);
  #endif
}
