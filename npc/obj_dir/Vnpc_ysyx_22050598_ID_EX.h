// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_ID_EX_H_
#define VERILATED_VNPC_YSYX_22050598_ID_EX_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi3;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi4;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi5;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi7;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi8;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr;


class Vnpc_ysyx_22050598_ID_EX final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi3* __PVT__id_ex_inst_bus_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi4* __PVT__id_ex_op_type_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__alu_op_a_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__alu_op_b_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__id_ex_pc_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__id_ex_bs_zimm_data_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi5* __PVT__id_write_rd_idx_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__id_ex_w_reg_en_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi7* __PVT__id_ex_ls_data_bus_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__id_ex_inst_divrem_bus_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi5* __PVT__id_ex_inst_mul_bus_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi8* __PVT__id_ex_csr_bus_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi8* __PVT__id_ex_branch_bus_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi7* __PVT__id_ex_unsigned_bus_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__id_ex_ls_req_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__id_ex_inst_is_rv64_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__id_ex_inst_is_illegal_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr* __PVT__id_ex_inst_dfflr;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__id_ex_flush,0,0);
        VL_IN8(__PVT__id_ex_stall,0,0);
        VL_IN8(__PVT__id_write_rd_idx,4,0);
        VL_IN8(__PVT__id_ex_w_reg_en,0,0);
        VL_IN8(__PVT__id_ex_inst_is_ebreak,0,0);
        VL_IN8(__PVT__id_ex_inst_is_ecall,0,0);
        VL_IN8(__PVT__id_ex_inst_is_jalr,0,0);
        VL_IN8(__PVT__id_ex_inst_is_jal,0,0);
        VL_IN8(__PVT__id_ex_inst_is_store,0,0);
        VL_IN8(__PVT__id_ex_inst_is_set,0,0);
        VL_IN8(__PVT__id_ex_inst_is_srax,0,0);
        VL_IN8(__PVT__id_ex_inst_5_shamt,0,0);
        VL_IN8(__PVT__id_ex_inst_is_mret,0,0);
        VL_IN8(__PVT__id_inst_is_csri,0,0);
        VL_IN8(__PVT__id_ex_ls_data_bus,1,0);
        VL_IN8(__PVT__id_ex_inst_divrem_bus,0,0);
        VL_IN8(__PVT__id_ex_inst_mul_bus,4,0);
        VL_IN8(__PVT__id_ex_csr_bus,5,0);
        VL_IN8(__PVT__id_ex_branch_bus,5,0);
        VL_IN8(__PVT__id_ex_unsigned_bus,1,0);
        VL_IN8(__PVT__id_ex_ls_req,0,0);
        VL_IN8(__PVT__id_ex_inst_is_rv64,0,0);
        VL_IN8(__PVT__id_ex_inst_is_illegal,0,0);
        VL_OUT8(__PVT__id_write_rd_idx_o,4,0);
        VL_OUT8(__PVT__id_ex_w_reg_en_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_ebreak_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_ecall_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_jalr_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_jal_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_store_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_set_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_srax_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_5_shamt_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_mret_o,0,0);
        VL_OUT8(__PVT__id_ex_ls_data_bus_o,1,0);
        VL_OUT8(__PVT__id_ex_inst_divrem_bus_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_mul_bus_o,4,0);
        VL_OUT8(__PVT__id_ex_csr_bus_o,5,0);
        VL_OUT8(__PVT__id_ex_branch_bus_o,5,0);
        VL_OUT8(__PVT__id_ex_unsigned_bus_o,1,0);
        VL_OUT8(__PVT__id_ex_ls_req_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_rv64_o,0,0);
        VL_OUT8(__PVT__id_ex_inst_is_illegal_o,0,0);
        CData/*4:0*/ __PVT__temp_id_write_rd_idx;
        CData/*0:0*/ __PVT__temp_id_ex_w_reg_en;
        CData/*1:0*/ __PVT__temp_id_ex_ls_data_bus;
        CData/*0:0*/ __PVT__temp_id_ex_inst_divrem_bus;
        CData/*4:0*/ __PVT__temp_id_ex_inst_mul_bus;
        CData/*5:0*/ __PVT__temp_id_ex_csr_bus;
        CData/*5:0*/ __PVT__temp_id_ex_branch_bus;
        CData/*1:0*/ __PVT__temp_id_ex_unsigned_bus;
        CData/*0:0*/ __PVT__temp_id_ex_ls_req;
        CData/*0:0*/ __PVT__temp_id_ex_inst_is_rv64;
        CData/*0:0*/ __PVT__temp_id_ex_inst_is_illegal;
        CData/*4:0*/ __PVT__id_write_rd_idx_r;
        CData/*0:0*/ __PVT__id_ex_w_reg_en_r;
        CData/*1:0*/ __PVT__id_ex_ls_data_bus_r;
        CData/*0:0*/ __PVT__id_ex_inst_divrem_bus_r;
        CData/*4:0*/ __PVT__id_ex_inst_mul_bus_r;
        CData/*5:0*/ __PVT__id_ex_csr_bus_r;
        CData/*5:0*/ __PVT__id_ex_branch_bus_r;
        CData/*1:0*/ __PVT__id_ex_unsigned_bus_r;
    };
    struct {
        CData/*0:0*/ __PVT__id_ex_ls_req_r;
        CData/*0:0*/ __PVT__id_ex_inst_is_rv64_r;
        CData/*0:0*/ __PVT__id_ex_inst_is_illegal_r;
        CData/*0:0*/ __PVT__id_ex_en;
        CData/*0:0*/ __PVT__id_ex_inst_btype;
        CData/*0:0*/ __PVT__id_ex_pc_en;
        CData/*0:0*/ __PVT__id_ex_den;
        VL_IN16(__PVT__id_ex_op_type,9,0);
        VL_OUT16(__PVT__id_ex_op_type_o,9,0);
        SData/*8:0*/ __PVT__id_ex_inst_bus;
        SData/*8:0*/ __PVT__temp_id_ex_inst_bus;
        SData/*9:0*/ __PVT__temp_id_ex_op_type;
        SData/*8:0*/ __PVT__id_ex_inst_bus_r;
        SData/*9:0*/ __PVT__id_ex_op_type_r;
        VL_IN(__PVT__id_ex_inst,31,0);
        VL_OUT(__PVT__id_ex_inst_o,31,0);
        IData/*31:0*/ __PVT__temp_id_ex_inst;
        IData/*31:0*/ __PVT__id_ex_inst_r;
        VL_IN64(__PVT__alu_op_a,63,0);
        VL_IN64(__PVT__alu_op_b,63,0);
        VL_IN64(__PVT__id_ex_pc,63,0);
        VL_IN64(__PVT__id_ex_bs_zimm_data,63,0);
        VL_OUT64(__PVT__alu_op_a_o,63,0);
        VL_OUT64(__PVT__alu_op_b_o,63,0);
        VL_OUT64(__PVT__id_ex_pc_o,63,0);
        VL_OUT64(__PVT__id_ex_bs_zimm_data_o,63,0);
        QData/*63:0*/ __PVT__temp_alu_op_a;
        QData/*63:0*/ __PVT__temp_alu_op_b;
        QData/*63:0*/ __PVT__temp_id_ex_pc;
        QData/*63:0*/ __PVT__temp_id_ex_bs_zimm_data;
        QData/*63:0*/ __PVT__alu_op_a_r;
        QData/*63:0*/ __PVT__alu_op_b_r;
        QData/*63:0*/ __PVT__id_ex_pc_r;
        QData/*63:0*/ __PVT__id_ex_bs_zimm_data_r;
    };

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_ID_EX(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_ID_EX();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_ID_EX);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
