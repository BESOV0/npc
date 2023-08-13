// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_LSU_H_
#define VERILATED_VNPC_YSYX_22050598_LSU_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_lsu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__load_en,0,0);
    VL_IN8(__PVT__store_en,0,0);
    VL_IN8(__PVT__ls_type,1,0);
    VL_IN8(__PVT__load_unsigned,0,0);
    CData/*7:0*/ __PVT__rlen;
    CData/*7:0*/ __PVT__wlen;
    CData/*0:0*/ __PVT__size_b;
    CData/*0:0*/ __PVT__size_hw;
    CData/*0:0*/ __PVT__size_w;
    CData/*0:0*/ __PVT__size_dw;
    VL_IN64(__PVT__ls_store_data,63,0);
    VL_IN64(__PVT__ls_loc,63,0);
    VL_OUT64(__PVT__load_data_o,63,0);
    QData/*63:0*/ __PVT__raddr;
    QData/*63:0*/ __PVT__rdata;
    QData/*63:0*/ __PVT__waddr;
    QData/*63:0*/ __PVT__wdata;
    QData/*63:0*/ __Vtask_pmem_read_test__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read_test__1__rdata;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_lsu(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_lsu();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_lsu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
