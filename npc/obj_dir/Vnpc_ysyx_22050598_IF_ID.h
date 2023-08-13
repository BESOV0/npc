// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_IF_ID_H_
#define VERILATED_VNPC_YSYX_22050598_IF_ID_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr;


class Vnpc_ysyx_22050598_IF_ID final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__pc_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr* __PVT__inst_dfflr;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__if_flush,0,0);
    VL_IN8(__PVT__if_stall,0,0);
    CData/*0:0*/ __PVT__if_en;
    VL_IN(__PVT__if_inst,31,0);
    VL_OUT(__PVT__if_inst_o,31,0);
    IData/*31:0*/ __PVT__temp_inst;
    IData/*31:0*/ __PVT__inst_r;
    VL_IN64(__PVT__if_pc_i,63,0);
    VL_OUT64(__PVT__if_pc_o,63,0);
    QData/*63:0*/ __PVT__temp_pc;
    QData/*63:0*/ __PVT__pc_r;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_IF_ID(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_IF_ID();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_IF_ID);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
