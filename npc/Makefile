DIFFTEST_ON ?=

VSRC = $(wildcard ./vsrc/npc.v)
CSRC = $(wildcard ./csrc/*.cpp)
IMG ?=
TOP_MODULE := npc
VERILATOR_FLAGS += --compiler gcc -Wno-fatal -j -O3 --cc --exe
VERILATOR_FLAGS += --top-module ${TOP_MODULE}
VERILATOR_FLAGS += -y ./vsrc ${VSRC} ${CSRC}
GCC_LDFLAGS +=  -LDFLAGS -ldl -LDFLAGS -lreadline -LDFLAGS -lSDL2

ifdef DIFFTEST_ON
DIFFTEST_SO := ${NEMU_HOME}/build/riscv64-nemu-interpreter-so
RUN_FLAGS += --diff=${DIFFTEST_SO}
endif

clean:
	rm -rf obj_dir wave.vcd	
sim:	
	verilator ${VERILATOR_FLAGS} ${GCC_LDFLAGS}
	make -C obj_dir -f Vnpc.mk Vnpc
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
run:
	./obj_dir/Vnpc ${RUN_FLAGS} $(IMG)
prof:
	gprof ./obj_dir/Vnpc gmon.out >> gprof.out
	verilator_profcfunc gprof.out >> report.out
.PHONY:sim run prof clean
include ../Makefile 
