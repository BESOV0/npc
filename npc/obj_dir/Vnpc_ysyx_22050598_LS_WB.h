// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_LS_WB_H_
#define VERILATED_VNPC_YSYX_22050598_LS_WB_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi5;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr;


class Vnpc_ysyx_22050598_LS_WB final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__ls_wb_rd_data_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ls_wb_rd_en_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi5* __PVT__ls_wb_rd_idx_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ls_wb_ebreak_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr* __PVT__ls_wb_inst_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__ls_wb_pc_dfflr;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__ls_wb_stall,0,0);
    VL_IN8(__PVT__ls_wb_rd_en,0,0);
    VL_IN8(__PVT__ls_wb_rd_idx,4,0);
    VL_IN8(__PVT__ls_wb_inst_is_ebreak,0,0);
    VL_OUT8(__PVT__ls_wb_rd_en_o,0,0);
    VL_OUT8(__PVT__ls_wb_rd_idx_o,4,0);
    VL_OUT8(__PVT__ls_wb_inst_is_ebreak_o,0,0);
    CData/*0:0*/ __PVT__ls_wb_en;
    CData/*0:0*/ __PVT__ls_wb_rd_en_r;
    CData/*4:0*/ __PVT__ls_wb_rd_idx_r;
    CData/*0:0*/ __PVT__ls_wb_inst_is_ebreak_r;
    VL_IN(__PVT__ls_wb_inst,31,0);
    VL_OUT(__PVT__ls_wb_inst_o,31,0);
    IData/*31:0*/ __PVT__ls_wb_inst_r;
    VL_IN64(__PVT__ls_wb_pc,63,0);
    VL_OUT64(__PVT__ls_wb_pc_o,63,0);
    VL_IN64(__PVT__ls_wb_rd_data,63,0);
    VL_OUT64(__PVT__ls_wb_rd_data_o,63,0);
    QData/*63:0*/ __PVT__ls_wb_rd_data_r;
    QData/*63:0*/ __PVT__ls_wb_pc_r;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_LS_WB(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_LS_WB();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_LS_WB);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
