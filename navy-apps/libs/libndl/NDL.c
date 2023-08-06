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

  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[128];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  
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


#define Middle
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  	int fd = open("/dev/fb",O_RDWR);
  	//assert(fd != -1);
  	int temp_x = x;
  	int temp_y = y;
  	int temp_h = h;
  	//printf("screen_w is %d\n",screen_w);
  	//printf("h is %d\n",h);
  	#ifdef Middle
  	temp_x = (screen_w - w) / 2;
  	//printf("temp_x is %d\n",temp_x);
  	temp_y = (screen_h - h) / 2;
  	temp_h = h + temp_y;
  	#endif
  	for(int i = temp_y; i < temp_h; i++){
    		lseek(fd, (temp_x + i*screen_w) * 4, SEEK_SET);//same as am_gpu_fbdraw (x + i*screen_w) is offset
    		write(fd, pixels + (i-temp_y) * w , w*4);//int fd, const void* buf, size_t count write a line every time
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
