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
static int canvas_w = 0, canvas_h = 0;
static int canvas_x = 0, canvas_y = 0;

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
    if(getenv("NWM_APP")) 
    {
        int fbctl = 4;
        fbdev = 5;
        screen_w = *w; screen_h = *h;
        char buf[64];
        int len = sprintf(buf, "%d %d", screen_w, screen_h);
        // let NWM resize the window and create the frame buffer
        write(fbctl, buf, len);
        while (1) 
        {
            // 3 = evtdev
            int nread = read(3, buf, sizeof(buf) - 1);
            if (nread <= 0) continue;
            buf[nread] = '\0';
            if (strcmp(buf, "mmap ok") == 0) break;
        }
        close(fbctl);
    }
    else
    { 
    	char buf[32] = {};
  	int fd = open("/proc/dispinfo", 0, 0);
  	if (read(fd, buf, sizeof(buf))) {
	sscanf(buf, "WIDTH: %d\nHEIGHT: %d", &screen_w, &screen_h);
	//printf("screen_w is %d ,screen_h is %d\n",screen_w,screen_h);
  	}
  	close(fd);
  	if(*w > screen_w || *h > screen_h){
  	printf("wrong canvas size\n");
  	assert(0);
  	}
  	if(*w == 0 && *h == 0){
	canvas_w = screen_w;
	canvas_h = screen_h;
  	} 
  	else{
  	canvas_w = *w;
  	canvas_h = *h;
  	canvas_x = (screen_w - canvas_w) / 2;
  	canvas_y = (screen_h - canvas_h) / 2;
  	//printf("canvas_w is %d ,canvas_h is %d\n",canvas_w,canvas_h);
  	}
   }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  	int fd = open("/dev/fb",0,0);
  	assert(fd != -1);	
  	uint32_t canvas_point = canvas_y * screen_w + canvas_x ;  	
  	for(int i = 0 ; i < h; i++){
    		lseek(fd, (canvas_point + x + (i + y) * screen_w) * 4, SEEK_SET);
    		write(fd, pixels + i * w , w * 4);//int fd, const void* buf, size_t count write a line every time
  	}
  	close(fd);
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
