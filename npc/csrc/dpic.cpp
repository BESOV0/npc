#include "npc.h"
extern "C" void fencei(){
	Log("%s",ANSI_FMT("FENCEI IN", ANSI_FG_GREEN));
} 
extern "C" void confilct_read(){
	Log("%s",ANSI_FMT("Confilct READ", ANSI_FG_GREEN));
}
extern "C" void deviceandunalign(){
	Log("%s",ANSI_FMT("IF SEE THIS AND PROGRAM DIES CHECK LSU ALIGN FOR DEVICE", ANSI_FG_GREEN));
}
