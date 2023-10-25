#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <fcntl.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

uint32_t NDL_GetTicks() {
  struct timeval time_value;
  gettimeofday(&time_value, NULL);
  return (uint32_t)(time_value.tv_sec * 1000 + time_value.tv_usec / 1000);
}

int NDL_PollEvent(char *buf, int len) {
	int fd = open("/dev/events", 0, 0);
	//memset(buf, 0, len);
  	if (read(fd, buf, len)) {
  		//printf("shift\n");
  		close(fd);
    		return 1;
  	}
  	else {
  		close(fd);
    		return 0;
  	}
  	
}

void NDL_OpenCanvas(int *w, int *h) {
  char buf[32] = {};
  int fd = open("/proc/dispinfo", 0, 0);
  if (read(fd, buf, sizeof(buf))) {
	sscanf(buf, "WIDTH: %d\nHEIGHT: %d", &screen_w, &screen_h);
  	//printf("%d\n",screen_w);
  	//printf("%d\n",screen_h);
  	}
  	close(fd);
  if(*w > screen_w || *h > screen_h){
  	printf("wrong canvas size\n");
  	assert(0);
  
  }
  if(*w == 0 && *h == 0){
	*w = screen_w;
	*h = screen_h;
  }
}


void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  	int fd = open("/dev/fb",O_RDWR);
  	assert(fd != -1);
  	int temp_x = (screen_w - w) / 2;	
  	for(int i = 0 ; i < h; i++){
    		lseek(fd, (temp_x + i * screen_w) * 4, SEEK_SET);//same as am_gpu_fbdraw (x + i*screen_w) is offset
    		write(fd, pixels + i * w , w * 4);//int fd, const void* buf, size_t count write a line every time
  	}
  	close(fd);
  	return;
}


void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
