#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
	/*
	int fd = open(filename,0,0);
	int size = lseek(fd,0,SEEK_END);
	printf("size is %d\n",size);
	char *buf = malloc(size);
	if(buf == NULL)  printf("bad malloc\n");
	
	lseek(fd,0,SEEK_SET);
	
	if(read(fd, buf, size)) printf("read success\n");
	
  	SDL_Surface *img = STBIMG_LoadFromMemory(buf, size);
  	if(img == NULL) printf("bad img load\n");
  	free(buf);
  	close(fd);
  	return img;
  	*/
  	
  	FILE *fp = fopen(filename, "r");
  	fseek(fp, 0, SEEK_END);
  	size_t size = ftell(fp);

  	char *buf = malloc(size);
  	fseek(fp, 0, SEEK_SET);
  	fread(buf, size, 1, fp);

  	SDL_Surface *img = STBIMG_LoadFromMemory(buf, size);

  	free(buf);
  	
  	fclose(fp);
  	return img;
  	
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
