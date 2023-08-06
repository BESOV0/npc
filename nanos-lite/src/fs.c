#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
extern size_t get_ramdisk_size();
extern size_t serial_write(const void* buf, size_t offset, size_t len);
extern size_t events_read(void *buf, size_t offset, size_t len);
extern size_t dispinfo_read(void *buf, size_t offset, size_t len);
extern size_t fb_write(const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_DISINFO, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENTS] = {"/dev/events", 0, 0, events_read, invalid_write},
  [FD_DISINFO] = {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write},
  [FD_FB] = {"/dev/fb", 0, 0, invalid_read, fb_write},
#include "files.h"
};

int fs_open(char* filename, int flags, int mode){
  int file_num = sizeof(file_table) / sizeof(Finfo);//indicate that how many files there have
  for(int i = 0; i < file_num; i++){
    if(strcmp(filename, file_table[i].name) == 0) { //Select a specific file
      file_table[i].open_offset = 0;
      return i;					    //file descriptor
    }
  }
  panic("Invalid file: %s", filename);//assert(0);
  return -1;
}

int fs_close(int fd){
  file_table[fd].open_offset = 0;
  return 0;
}

size_t fs_read(int fd, void* buf, size_t count){
	if(count == 0)
	return 0;
	
	int size_num;	
  	if(file_table[fd].read == NULL){
  		assert(file_table[fd].open_offset <= file_table[fd].size);//out of bound is not allowed
  		//if count +offset > size, then give what left in file
    		size_num = (count + file_table[fd].open_offset) <= file_table[fd].size ? count : file_table[fd].size - file_table[fd].open_offset;
    		ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, size_num);
  	}
  	else {
    		size_num = file_table[fd].read(buf, file_table[fd].open_offset , count);
  	}
  	file_table[fd].open_offset += size_num;
 	return size_num;
}

size_t fs_write(int fd, const void* buf, size_t count){
	if(count == 0)
	return 0;
	int size_num;	
  	if(file_table[fd].write == NULL){
  		assert(file_table[fd].open_offset <= file_table[fd].size);//out of bound is not allowed
  		//if count +offset > size, then give what left in file
    		size_num = (count + file_table[fd].open_offset) <= file_table[fd].size ? count : file_table[fd].size - file_table[fd].open_offset;
    		ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, size_num);
  	}
  	else {
    		size_num = file_table[fd].write(buf, file_table[fd].open_offset,  count);
  	}
  	file_table[fd].open_offset += size_num;
 	return size_num;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  	size_t temp_offset;
  	switch(whence){
    		case SEEK_SET: temp_offset = offset; break;
    		case SEEK_CUR: temp_offset = file_table[fd].open_offset + offset; break;
    		case SEEK_END: temp_offset = file_table[fd].size + offset; break;
    	default: panic("Invalid lseek mode: %d\n", whence);
  	}
  	file_table[fd].open_offset = temp_offset;
  	assert(file_table[fd].open_offset <= file_table[fd].size);
  	return temp_offset;
}


void init_fs() {
  // TODO: initialize the size of /dev/fb
  AM_GPU_CONFIG_T gpu_config = io_read(AM_GPU_CONFIG);
  file_table[FD_FB].size = gpu_config.height * gpu_config.width * 4;// *4 because one pixel is 4 byte
}
