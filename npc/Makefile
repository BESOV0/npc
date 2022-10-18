	VSRC = $(wildcard ./vsrc/top.v)
	CSRC = $(wildcard ./csrc/sim_main.cpp)
all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wno-fatal $(VSRC) $(CSRC) --top-module top --cc --trace --exe # top是顶层模块名字
	make -C obj_dir -f Vtop.mk Vtop
	./obj_dir/Vtop
	gtkwave wave.vcd
.PHONY:clean
clean:
	rm -rf obj_dir wave.vcd	
include ../Makefile
