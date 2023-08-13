// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_SIRV_GNRL_DFFLR__PI10_H_
#define VERILATED_VNPC_YSYX_22050598_SIRV_GNRL_DFFLR__PI10_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__lden,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN64(__PVT__dnxt,32,0);
    VL_OUT64(__PVT__qout,32,0);
    QData/*32:0*/ __PVT__qout_r;
    QData/*32:0*/ __Vdly__qout_r;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi10(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi10();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
