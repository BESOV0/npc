#include <common.h>
#include "syscall.h"
#include <sys/time.h>
#include <proc.h>

//#define STRACE
int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);
//extern void naive_uload(PCB *pcb, const char *filename);
const char *filename = "/bin/nterm";
  #ifdef STRACE
const char *strs[] = {
  "SYS_exit", "SYS_yield", "SYS_open", "SYS_read", "SYS_write", "SYS_kill", "SYS_getpid", "SYS_close",
  "SYS_lseek", "SYS_brk", "SYS_fstat", "SYS_time", "SYS_signal", "SYS_execve", "SYS_fork", "SYS_link",
  "SYS_unlink", "SYS_wait", "SYS_times", "SYS_gettimeofday"
};

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
} Finfo_sys;

static Finfo_sys file_table_sys[] __attribute__((used)) = {
  [0]  = {"stdin",  0, 0},
  [1] = {"stdout", 0, 0},
  [2] = {"stderr", 0, 0},
  [3] = {"/dev/events", 0, 0},
  [4] = {"/proc/dispinfo", 0, 0},
  [5] = {"/dev/fb", 0, 0},
  #include "files.h"
};
char *do_filename(int type,int fd){
	char *temp = "there is no file for this syscall";
 	if (((type == SYS_read) || (type == SYS_write) || (type == SYS_close) || (type == SYS_lseek)))
 		return file_table_sys[fd].name;
 	else
 		return temp;
}
  #endif
static uintptr_t get_sys_time(struct timeval *tv, struct timezone *tz){
	AM_TIMER_UPTIME_T time;
  	time = io_read(AM_TIMER_UPTIME);
  	if(tv != NULL){
  		tv->tv_sec = time.us / 1000000;
  		tv->tv_usec = time.us % 1000000;
  		tz = NULL;
  		return 0;
  	}
  	else {	
  		Log("should not reach here");
    		return -1;
  	}
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
  #ifdef STRACE
  if(a[0] != 19)
  Log("%s call, syscall ID is %d, return value is %d,filename is %s",strs[a[0]],a[0],c->GPRx,do_filename(a[0],a[1]));
  #endif
  
  switch (a[0]) {
  	case SYS_yield: yield(); break;
  	case SYS_exit:  naive_uload(NULL,filename);break;//halt(a[0]); break;
  	case SYS_brk:   c->GPRx = brk_temp(a[1]); break;
  	case SYS_open:  c->GPRx = fs_open((char*)a[1], a[2], a[3]); break;
    	case SYS_read:  c->GPRx = fs_read(a[1], (char*)a[2], a[3]); break;
    	case SYS_write: c->GPRx = fs_write(a[1], (char*)a[2], a[3]); break;
    	case SYS_close: c->GPRx = fs_close(a[1]); break;
    	case SYS_lseek: c->GPRx = fs_lseek(a[1], a[2], a[3]); break;
    	case SYS_gettimeofday: c->GPRx = get_sys_time((struct timeval *)a[1],(struct timezone *)a[2]); break;
    	case SYS_execve:naive_uload(NULL,(char*)a[1]);break;
    	default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
