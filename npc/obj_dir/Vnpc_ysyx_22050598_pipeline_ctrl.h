// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_PIPELINE_CTRL_H_
#define VERILATED_VNPC_YSYX_22050598_PIPELINE_CTRL_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_pipeline_ctrl final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ex_pc_ena,0,0);
    VL_OUT8(__PVT__pipeline_flush,2,0);
    VL_IN8(__PVT__muldiv_ready,0,0);
    VL_IN8(__PVT__muldivout_valid,0,0);
    VL_IN8(__PVT__exu_is_mul,0,0);
    VL_IN8(__PVT__exu_is_div,0,0);
    VL_IN8(__PVT__exu_is_rem,0,0);
    VL_IN8(__PVT__forward_load_stall,0,0);
    VL_OUT8(__PVT__pipeline_stall,4,0);
    CData/*0:0*/ __PVT__ex_id_not_equal;
    CData/*0:0*/ __PVT__pc_flush_ena;
    CData/*0:0*/ __PVT__inst_is_muldiv;
    CData/*0:0*/ __PVT__muldiv_stall;
    VL_IN64(__PVT__ex_pc_data,63,0);
    VL_IN64(__PVT__id_pc_data,63,0);
    QData/*63:0*/ __PVT__temp_ex_pc_data;
    QData/*63:0*/ __PVT__temp_id_pc_data;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_pipeline_ctrl(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_pipeline_ctrl();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_pipeline_ctrl);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
