#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <string.h>

#define keyname(k) #k,

#define KEY_MAX(x,y) (x > y) ? x : y

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

#define NR_KEY (sizeof(keyname) / sizeof(keyname[0]))
static uint8_t keystate[NR_KEY];

int SDL_PushEvent(SDL_Event *ev) {
	//assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
	char buf[32];
	int i = 0;
    	if(NDL_PollEvent(buf, sizeof(buf)) != 0){
    	/*
    		if (strcmp(buf, keyname[0]) == 0) {
    			ev->key.keysym.sym = SDLK_NONE;
    			ev->type = SDL_USEREVENT;
    			return 0;
    		}
    		*/
    		//printf("SDL_PollEvent good\n");
    		printf("%s",buf); 
    	    		for(i = 0; i < NR_KEY;i++){
    			if(strncmp(keyname[i] , buf + 3, KEY_MAX(strlen(buf) - 4,strlen(keyname[i]))) == 0){
    				printf("keyname is %s\n",keyname[i]);
				ev->key.keysym.sym = i;
			 	break;
			}
		}
		
		if (buf[1] == 'd') {
    			ev->type = SDL_KEYDOWN;
    			keystate[i] = 1;
  		} 
  		else if (buf[1] == 'u') {
    			ev->type = SDL_KEYUP;
    			keystate[i] = 0;
  		}
  		return 1;
  	}
  	else
  		return 0;
}


int SDL_WaitEvent(SDL_Event *event) {
	char buf[32];
	int i = 0;
    	while(NDL_PollEvent(buf, sizeof(buf)) == 0); 
    		
    		printf("%s",buf); 
    		//printf("SDL_WaitEvent good\n");
    		for(i = 0; i < NR_KEY;i++){
    			if(strncmp(keyname[i] , buf + 3, KEY_MAX(strlen(buf) - 4,strlen(keyname[i]))) == 0){
    				//printf("keyname is %s\n",keyname[i]);
				event->key.keysym.sym = i;
			 	break;
			}
		}
		if (buf[1] == 'd') {
    			event->type = SDL_KEYDOWN;
    			keystate[i] = 1;
  		} 
  		else if (buf[1] == 'u') {
    			event->type = SDL_KEYUP;
    			keystate[i] = 0;
  		}
  		return 1;	
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
	assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
	return keystate;
  //return NULL;
}
