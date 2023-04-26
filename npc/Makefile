	VSRC = $(wildcard ./vsrc/npc.v)
	CSRC = $(wildcard ./csrc/npcmain.cpp)
	IMG ?=
all: default
.PHONY:clean
clean:
	rm -rf obj_dir wave.vcd	
sim:	
	verilator -Wno-fatal  -y ./vsrc $(VSRC)  $(CSRC) --top-module npc --cc --trace --exe --prof-cfuncs -CFLAGS -DVL_DEBUG # top是顶层模块名字
	make -C obj_dir -f Vnpc.mk Vnpc
	./obj_dir/Vnpc
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	gtkwave wave.vcd
run:
	./obj_dir/Vnpc $(IMG)
.PHONY:sim	
include ../Makefile
