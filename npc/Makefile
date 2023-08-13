	VSRC = $(wildcard ./vsrc/npc.v)
	CSRC = $(wildcard ./csrc/*.cpp)
	IMG ?=
all: default
.PHONY:clean
clean:
	rm -rf obj_dir wave.vcd	
sim:	
	verilator --compiler gcc -Wno-fatal -y ./vsrc $(VSRC) $(CSRC) -j 16 --top-module npc --cc --exe -LDFLAGS -lreadline -LDFLAGS -lSDL2 -I/home/xg/ysyx-workbench/npc/csrc/ #-DVL_DEBUG--trace--prof-cfuncs--threads --threads-dpi 
	make -C obj_dir -f Vnpc.mk Vnpc
	#./obj_dir/Vnpc
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	#gtkwave wave.vcd
run:
	./obj_dir/Vnpc $(IMG)
.PHONY:sim	
include ../Makefile
