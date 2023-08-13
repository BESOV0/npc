// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_SIRV_GNRL_DFFLR__PI4_H_
#define VERILATED_VNPC_YSYX_22050598_SIRV_GNRL_DFFLR__PI4_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__lden,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN16(__PVT__dnxt,9,0);
    VL_OUT16(__PVT__qout,9,0);
    SData/*9:0*/ __PVT__qout_r;
    SData/*9:0*/ __Vdly__qout_r;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi4(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi4();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
