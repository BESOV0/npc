#include "npc.h"

void device_update(char *ebreak_flag) {
  vga_update_screen();
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        *ebreak_flag = 1;
        break;
      // If a key was pressed
      case SDL_KEYUP:
      case SDL_KEYDOWN:
       {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        //printf("%d\n",k);
        send_key(k, is_keydown);
        break;
      }
      default: break;
    }
  }
}
