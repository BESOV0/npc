// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_lsu.h"

extern "C" void pmem_read_test(long long raddr, long long* rdata, char rlen);

VL_INLINE_OPT void Vnpc_ysyx_22050598_lsu____Vdpiimwrap_pmem_read_test_TOP__npc__u_ysyx_22050598_lsu(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_lsu____Vdpiimwrap_pmem_read_test_TOP__npc__u_ysyx_22050598_lsu\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char rlen__Vcvt;
    for (size_t rlen__Vidx = 0; rlen__Vidx < 1; ++rlen__Vidx) rlen__Vcvt = rlen;
    pmem_read_test(raddr__Vcvt, &rdata__Vcvt, rlen__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write_test(long long waddr, long long wdata, char wlen);

VL_INLINE_OPT void Vnpc_ysyx_22050598_lsu____Vdpiimwrap_pmem_write_test_TOP__npc__u_ysyx_22050598_lsu(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_lsu____Vdpiimwrap_pmem_write_test_TOP__npc__u_ysyx_22050598_lsu\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wlen__Vcvt;
    for (size_t wlen__Vidx = 0; wlen__Vidx < 1; ++wlen__Vidx) wlen__Vcvt = wlen;
    pmem_write_test(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt);
}
