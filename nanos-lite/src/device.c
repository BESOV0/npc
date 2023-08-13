#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  	for(int i = 0; i < len; i++)
  		putch(*(char *)(buf+i));
  	return len;
}
//definition in amdev.h
size_t events_read(void *buf, size_t offset, size_t len) {
	AM_INPUT_KEYBRD_T kbd = io_read(AM_INPUT_KEYBRD);
	if(kbd.keycode != AM_KEY_NONE){
		if(kbd.keydown)
			snprintf((char *)buf, len, "kd %s\n",keyname[kbd.keycode]);
		else
			snprintf((char *)buf, len, "ku %s\n",keyname[kbd.keycode]);
		return len;		
	}
	else
  		return 0;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
	AM_GPU_CONFIG_T gpu_config = io_read(AM_GPU_CONFIG);
	snprintf((char *)buf, len, "WIDTH: %d\nHEIGHT: %d",gpu_config.width,gpu_config.height);
  	return len;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {//len is w
	AM_GPU_CONFIG_T gpu_config = io_read(AM_GPU_CONFIG);
	//printf("fb_width is %d\n",gpu_config.width);
	int x = (offset / 4) % gpu_config.width;//(x + i*screen_w) is offset which means this code is x
  	int y = (offset / 4) / gpu_config.width;//(x + i*screen_w) is offset which means this code is i which is y
  	io_write(AM_GPU_FBDRAW, x, y, (void*)buf, len / 4, 1, true);//order in amdev.h, Write one line at a time
  	return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
