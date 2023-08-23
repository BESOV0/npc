// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VNPC__DPI_H_
#define VERILATED_VNPC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ysyx_22050598_EBREAK.v:7:30
    extern void ebreak(long long ebreak_a0);
    // DPI import at vsrc/ysyx_22050598_EBREAK.v:8:30
    extern void fencei();
    // DPI import at vsrc/ysyx_22050598_ifu.v:82:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/ysyx_22050598_lsu.v:297:34
    extern void pmem_read_test(long long raddr, long long* rdata, char rlen, long long addr, int inst);
    // DPI import at vsrc/ysyx_22050598_lsu.v:298:34
    extern void pmem_write_test(long long waddr, long long wdata, char wlen, char wmask);
    // DPI import at vsrc/ysyx_22050598_regfile.v:19:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
