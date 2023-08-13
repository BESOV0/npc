// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_EX_LS_H_
#define VERILATED_VNPC_YSYX_22050598_EX_LS_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi7;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi5;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr;


class Vnpc_ysyx_22050598_EX_LS final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__ex_ls_alu_rd_ls_data_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ex_ls_rd_data_en_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ex_ls_load_en_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ex_ls_store_en_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi7* __PVT__ex_ls_ls_data_bus_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi5* __PVT__ex_ls_write_rd_idx_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__ex_ls_store_data_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ex_ls_load_unsigned_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ex_ls_inst_is_ebreak_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr* __PVT__ex_ls_inst_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__ex_ls_pc_dfflr;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__ex_ls_stall,0,0);
    VL_IN8(__PVT__ex_ls_alu_rd_data_en,0,0);
    VL_IN8(__PVT__ex_ls_load_en,0,0);
    VL_IN8(__PVT__ex_ls_store_en,0,0);
    VL_IN8(__PVT__ex_ls_ls_data_bus,1,0);
    VL_IN8(__PVT__ex_ls_write_rd_idx,4,0);
    VL_IN8(__PVT__ex_ls_load_unsigned,0,0);
    VL_OUT8(__PVT__ex_ls_alu_rd_data_en_o,0,0);
    VL_OUT8(__PVT__ex_ls_load_en_o,0,0);
    VL_OUT8(__PVT__ex_ls_store_en_o,0,0);
    VL_OUT8(__PVT__ex_ls_ls_data_type_o,1,0);
    VL_OUT8(__PVT__ex_ls_rd_idx_o,4,0);
    VL_OUT8(__PVT__ex_ls_load_unsigned_o,0,0);
    VL_IN8(__PVT__ex_ls_inst_is_ebreak,0,0);
    VL_OUT8(__PVT__ex_ls_inst_is_ebreak_o,0,0);
    CData/*0:0*/ __PVT__ex_ls_alu_rd_data_en_r;
    CData/*0:0*/ __PVT__ex_ls_load_en_r;
    CData/*0:0*/ __PVT__ex_ls_store_en_r;
    CData/*1:0*/ __PVT__ex_ls_ls_data_bus_r;
    CData/*4:0*/ __PVT__ex_ls_write_rd_idx_r;
    CData/*0:0*/ __PVT__ex_ls_inst_is_ebreak_r;
    CData/*0:0*/ __PVT__ex_ls_load_unsigned_r;
    CData/*0:0*/ __PVT__ex_ls_en;
    CData/*0:0*/ __PVT__ex_ls_store_data_en;
    VL_IN(__PVT__ex_ls_inst,31,0);
    VL_OUT(__PVT__ex_ls_inst_o,31,0);
    IData/*31:0*/ __PVT__ex_ls_inst_r;
    VL_IN64(__PVT__ex_ls_pc,63,0);
    VL_OUT64(__PVT__ex_ls_pc_o,63,0);
    VL_IN64(__PVT__ex_ls_alu_rd_ls_data,63,0);
    VL_IN64(__PVT__ex_ls_store_data,63,0);
    VL_OUT64(__PVT__ex_ls_alu_rd_ls_data_o,63,0);
    VL_OUT64(__PVT__ex_ls_store_data_o,63,0);
    QData/*63:0*/ __PVT__ex_ls_alu_rd_ls_data_r;
    QData/*63:0*/ __PVT__ex_ls_store_data_r;
    QData/*63:0*/ __PVT__ex_ls_pc_r;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_EX_LS(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_EX_LS();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_EX_LS);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
