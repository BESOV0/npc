#include "npc.h"

void *vmem = NULL;
uint32_t *vgactl_port_base = NULL;

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

uint32_t screen_size() {
  return SCREEN_W * SCREEN_H * sizeof(uint32_t);
}

 void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-NPC","RISCV64");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(SCREEN_W * 2,SCREEN_H * 2,0,&window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() {
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
  if(vgactl_port_base[1] == 0) 
  return;
  update_screen();
  vgactl_port_base[1] = 0;
}

void init_vga() {
  vgactl_port_base = (uint32_t *)malloc(8);
  vgactl_port_base[0] = (SCREEN_W << 16) | SCREEN_H;
  vmem = (uint8_t *)malloc(screen_size());
  init_screen();
  memset(vmem, 0, screen_size());
}
void free_vga(){
  free(vgactl_port_base);
  free(vmem);
}


