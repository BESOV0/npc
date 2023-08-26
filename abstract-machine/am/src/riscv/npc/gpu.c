#include <am.h>
#include "npc.h"

#define SYNC_ADDR (VGACTL_ADDR + 8)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, 
    .has_accel = false,
    .width = inl(VGACTL_ADDR) >> 16, 
    .height = inl(VGACTL_ADDR) & 0x0000ffff,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	int x = ctl->x;
	int y = ctl->y;
	int w = ctl->w;
	int h = ctl->h;
	uint32_t *pixels = ctl->pixels;
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  	for (int i = y; i < y+h; i++) {
  		for(int j = x; j < x+w;j++){
  			fb[j+i*(inl(VGACTL_ADDR) >> 16)] = pixels[(j-x)+(i-y)*w];//(inl(VGACTL_ADDR) >> 16) is width of screen
  		}
  	}
  	if (ctl->sync) {
    		outl(SYNC_ADDR, 1);
  	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
