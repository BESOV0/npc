// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_SIRV_GNRL_DFFLR__PI8_H_
#define VERILATED_VNPC_YSYX_22050598_SIRV_GNRL_DFFLR__PI8_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__lden,0,0);
    VL_IN8(__PVT__dnxt,5,0);
    VL_OUT8(__PVT__qout,5,0);
    VL_IN8(__PVT__rst_n,0,0);
    CData/*5:0*/ __PVT__qout_r;
    CData/*5:0*/ __Vdly__qout_r;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi8(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi8();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
