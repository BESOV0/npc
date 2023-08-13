// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_IDU_FORWARD_H_
#define VERILATED_VNPC_YSYX_22050598_IDU_FORWARD_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_idu_forward final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__id_rs1_idx,4,0);
    VL_IN8(__PVT__id_rs2_idx,4,0);
    VL_IN8(__PVT__alu_op_a_sel,2,0);
    VL_IN8(__PVT__alu_op_b_sel,1,0);
    VL_IN8(__PVT__id_rd_idx,4,0);
    VL_IN8(__PVT__id_branch_bus,5,0);
    VL_IN8(__PVT__id_inst_is_csri,0,0);
    VL_IN8(__PVT__id_inst_is_store,0,0);
    VL_IN8(__PVT__ex_rd_idx,4,0);
    VL_IN8(__PVT__ex_rd_en,0,0);
    VL_IN8(__PVT__ex_load_en,0,0);
    VL_IN8(__PVT__mem_rd_idx,4,0);
    VL_IN8(__PVT__mem_rd_en,0,0);
    VL_IN8(__PVT__wb_rd_idx,4,0);
    VL_IN8(__PVT__wb_rd_en,0,0);
    VL_OUT8(__PVT__forward_load_stall,0,0);
    CData/*4:0*/ __PVT__id_rs1_idx_vaild;
    CData/*4:0*/ __PVT__id_rs2_idx_vaild;
    CData/*0:0*/ __PVT__ex_rd_idx_not_zero;
    CData/*0:0*/ __PVT__mem_rd_idx_not_zero;
    CData/*0:0*/ __PVT__wb_rd_idx_not_zero;
    CData/*0:0*/ __PVT__ex_forward_rs1;
    CData/*0:0*/ __PVT__mem_forward_rs1;
    CData/*0:0*/ __PVT__wb_forward_rs1;
    CData/*0:0*/ __PVT__ex_forward_rs2;
    CData/*0:0*/ __PVT__mem_forward_rs2;
    CData/*0:0*/ __PVT__wb_forward_rs2;
    CData/*0:0*/ __PVT__ex_load_stall_rs1;
    CData/*0:0*/ __PVT__ex_load_stall_rs2;
    VL_IN64(__PVT__rs1_data,63,0);
    VL_IN64(__PVT__rs2_data,63,0);
    VL_IN64(__PVT__id_imm,63,0);
    VL_IN64(__PVT__pc_data,63,0);
    VL_IN64(__PVT__ex_alu_data,63,0);
    VL_IN64(__PVT__mem_data,63,0);
    VL_IN64(__PVT__wb_data,63,0);
    VL_OUT64(__PVT__alu_op_a,63,0);
    VL_OUT64(__PVT__alu_op_b,63,0);
    VL_OUT64(__PVT__ex_bs_zimm_data,63,0);
    QData/*63:0*/ __PVT__forward_rs1_data;
    QData/*63:0*/ __PVT__forward_rs2_data;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_idu_forward(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_idu_forward();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_idu_forward);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
