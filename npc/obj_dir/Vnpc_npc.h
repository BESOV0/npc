// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_NPC_H_
#define VERILATED_VNPC_NPC_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_ysyx_22050598_ifu_bpu;
class Vnpc_ysyx_22050598_ifu;
class Vnpc_ysyx_22050598_IF_ID;
class Vnpc_ysyx_22050598_idu_decode;
class Vnpc_ysyx_22050598_regfile;
class Vnpc_ysyx_22050598_idu_forward;
class Vnpc_ysyx_22050598_ID_EX;
class Vnpc_ysyx_22050598_exu_alu;
class Vnpc_ysyx_22050598_exu_csr;
class Vnpc_ysyx_22050598_exu_rd_pc_mux;
class Vnpc_ysyx_22050598_EX_LS;
class Vnpc_ysyx_22050598_lsu;
class Vnpc_ysyx_22050598_lsu_rd_mux;
class Vnpc_ysyx_22050598_LS_WB;
class Vnpc_ysyx_22050598_EBREAK;
class Vnpc_ysyx_22050598_pipeline_ctrl;


class Vnpc_npc final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_ysyx_22050598_ifu_bpu* __PVT__ysyx_22050598_ifu_bpu;
    Vnpc_ysyx_22050598_ifu* __PVT__u_ysyx_22050598_ifu;
    Vnpc_ysyx_22050598_IF_ID* __PVT__u_ysyx_22050598_IF_ID;
    Vnpc_ysyx_22050598_idu_decode* __PVT__u_ysyx_22050598_idu_decode;
    Vnpc_ysyx_22050598_regfile* __PVT__u_ysyx_22050598_regfile;
    Vnpc_ysyx_22050598_idu_forward* __PVT__ysyx_22050598_idu_forward;
    Vnpc_ysyx_22050598_ID_EX* __PVT__u_ysyx_22050598_ID_EX;
    Vnpc_ysyx_22050598_exu_alu* __PVT__u_ysyx_22050598_exu_alu;
    Vnpc_ysyx_22050598_exu_csr* __PVT__u_ysyx_22050598_exu_csr;
    Vnpc_ysyx_22050598_exu_rd_pc_mux* __PVT__u_ysyx_22050598_exu_rd_pc_mux;
    Vnpc_ysyx_22050598_EX_LS* __PVT__u_ysyx_22050598_EX_LS;
    Vnpc_ysyx_22050598_lsu* __PVT__u_ysyx_22050598_lsu;
    Vnpc_ysyx_22050598_lsu_rd_mux* __PVT__ysyx_22050598_lsu_rd_mux;
    Vnpc_ysyx_22050598_LS_WB* __PVT__ysyx_22050598_LS_WB;
    Vnpc_ysyx_22050598_EBREAK* __PVT__u_ysyx_22050598_EBREAK;
    Vnpc_ysyx_22050598_pipeline_ctrl* __PVT__ysyx_22050598_pipeline_ctrl;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ __PVT__if_prdt_taken;
        CData/*2:0*/ __PVT__id_op_a_sel;
        CData/*1:0*/ __PVT__id_op_b_sel;
        CData/*4:0*/ __PVT__id_read_rs1_idx;
        CData/*4:0*/ __PVT__id_read_rs2_idx;
        CData/*0:0*/ __PVT__id_ex_w_reg_en;
        CData/*4:0*/ __PVT__id_write_rd_idx;
        CData/*0:0*/ __PVT__id_ex_inst_is_ebreak;
        CData/*0:0*/ __PVT__id_ex_inst_is_ecall;
        CData/*0:0*/ __PVT__id_ex_inst_is_jalr;
        CData/*0:0*/ __PVT__id_ex_inst_is_jal;
        CData/*0:0*/ __PVT__id_ex_inst_is_store;
        CData/*0:0*/ __PVT__id_ex_inst_is_set;
        CData/*0:0*/ __PVT__id_ex_inst_is_srax;
        CData/*0:0*/ __PVT__id_ex_inst_5_shamt;
        CData/*0:0*/ __PVT__id_ex_inst_is_mret;
        CData/*0:0*/ __PVT__id_ex_inst_is_csri;
        CData/*1:0*/ __PVT__id_ex_ls_data_bus;
        CData/*0:0*/ __PVT__id_ex_inst_divrem_bus;
        CData/*4:0*/ __PVT__id_ex_inst_mul_bus;
        CData/*5:0*/ __PVT__id_ex_csr_bus;
        CData/*5:0*/ __PVT__id_ex_branch_bus;
        CData/*1:0*/ __PVT__id_ex_unsigned_bus;
        CData/*0:0*/ __PVT__id_ex_ls_req;
        CData/*0:0*/ __PVT__id_ex_inst_is_rv64;
        CData/*0:0*/ __PVT__id_inst_is_illegal;
        CData/*0:0*/ __PVT__forward_load_stall;
        CData/*4:0*/ __PVT__ex_write_rd_idx;
        CData/*0:0*/ __PVT__ex_w_reg_en;
        CData/*0:0*/ __PVT__ex_inst_is_ebreak;
        CData/*0:0*/ __PVT__ex_inst_is_ecall;
        CData/*0:0*/ __PVT__ex_inst_is_jalr;
        CData/*0:0*/ __PVT__ex_inst_is_jal;
        CData/*0:0*/ __PVT__ex_inst_is_store;
        CData/*0:0*/ __PVT__ex_inst_is_set;
        CData/*0:0*/ __PVT__ex_inst_is_srax;
        CData/*0:0*/ __PVT__ex_inst_5_shamt;
        CData/*0:0*/ __PVT__ex_inst_is_mret;
        CData/*1:0*/ __PVT__ex_ls_data_bus;
        CData/*0:0*/ __PVT__ex_inst_divrem_bus;
        CData/*4:0*/ __PVT__ex_inst_mul_bus;
        CData/*5:0*/ __PVT__ex_csr_bus;
        CData/*5:0*/ __PVT__ex_branch_bus;
        CData/*1:0*/ __PVT__ex_unsigned_bus;
        CData/*0:0*/ __PVT__ex_ls_req;
        CData/*0:0*/ __PVT__ex_inst_is_rv64;
        CData/*0:0*/ __PVT__ex_ls_alu_rd_data_en;
        CData/*0:0*/ __PVT__ex_ls_alu_pc_en;
        CData/*0:0*/ __PVT__ex_ls_load_en;
        CData/*0:0*/ __PVT__ex_ls_store_en;
        CData/*0:0*/ __PVT__muldiv_ready;
        CData/*0:0*/ __PVT__muldivout_valid;
        CData/*0:0*/ __PVT__ex_pc_data_ena;
        CData/*0:0*/ __PVT__ls_alu_rd_data_en;
        CData/*0:0*/ __PVT__ls_load_en;
        CData/*0:0*/ __PVT__ls_store_en;
        CData/*1:0*/ __PVT__ls_ls_data_type;
        CData/*4:0*/ __PVT__ls_rd_idx;
        CData/*0:0*/ __PVT__ls_inst_is_ebreak;
        CData/*0:0*/ __PVT__ls_load_unsigned;
        CData/*0:0*/ __PVT__wb_rd_en;
        CData/*4:0*/ __PVT__wb_rd_idx;
    };
    struct {
        CData/*0:0*/ __PVT__wb_inst_is_ebreak;
        CData/*2:0*/ __PVT__pipeline_flush;
        CData/*4:0*/ __PVT__pipeline_stall;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_ifu__flush_pc_en;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_ifu__pc_stall;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_IF_ID__if_stall;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_IF_ID__if_flush;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_ID_EX__id_ex_stall;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_ID_EX__id_ex_flush;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_exu_alu__ex_unsigned_bus;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_exu_alu__ex_muldiv_flush;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_exu_rd_pc_mux__csr_rd_en;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned;
        CData/*0:0*/ __Vcellinp__u_ysyx_22050598_EX_LS__ex_ls_stall;
        CData/*0:0*/ __Vcellinp__ysyx_22050598_LS_WB__ls_wb_stall;
        CData/*0:0*/ __Vcellinp__ysyx_22050598_pipeline_ctrl__exu_is_rem;
        CData/*0:0*/ __Vcellinp__ysyx_22050598_pipeline_ctrl__exu_is_div;
        CData/*0:0*/ __Vcellinp__ysyx_22050598_pipeline_ctrl__exu_is_mul;
        SData/*9:0*/ __PVT__id_ex_op_type;
        SData/*9:0*/ __PVT__ex_op_type;
        VL_OUT(test_if_inst,31,0);
        VL_OUT(test_id_inst,31,0);
        VL_OUT(test_ex_inst,31,0);
        VL_OUT(test_ls_inst,31,0);
        VL_OUT(test_wb_inst,31,0);
        IData/*31:0*/ __PVT__if_id_inst;
        IData/*31:0*/ __PVT__id_inst;
        IData/*31:0*/ __PVT__ex_inst;
        IData/*31:0*/ __PVT__ls_inst;
        IData/*31:0*/ __PVT__wb_inst;
        VL_OUT64(test_if_pc,63,0);
        VL_OUT64(test_id_pc,63,0);
        VL_OUT64(test_ex_pc,63,0);
        VL_OUT64(test_ls_pc,63,0);
        VL_OUT64(test_wb_pc,63,0);
        QData/*63:0*/ __PVT__ebreak_a0;
        QData/*63:0*/ __PVT__if_bpu_pc_op;
        QData/*63:0*/ __PVT__if_id_pc;
        QData/*63:0*/ __PVT__id_pc;
        QData/*63:0*/ __PVT__id_imm;
        QData/*63:0*/ __PVT__id_read_rs1_data;
        QData/*63:0*/ __PVT__id_read_rs2_data;
        QData/*63:0*/ __PVT__id_ex_alu_op_a;
        QData/*63:0*/ __PVT__id_ex_alu_op_b;
        QData/*63:0*/ __PVT__id_ex_bs_zimm_data;
        QData/*63:0*/ __PVT__ex_alu_op_a;
        QData/*63:0*/ __PVT__ex_alu_op_b;
        QData/*63:0*/ __PVT__ex_pc;
        QData/*63:0*/ __PVT__ex_bs_zimm_data;
        QData/*63:0*/ __PVT__ex_ls_alu_rd_ls_data;
        QData/*63:0*/ __PVT__ex_ls_alu_pc;
        QData/*63:0*/ __PVT__ex_ls_store_data;
        QData/*63:0*/ __PVT__ex_csr_rd_pc_data;
        QData/*63:0*/ __PVT__ex_rd_data;
        QData/*63:0*/ __PVT__ex_pc_data;
        QData/*63:0*/ __PVT__ls_pc;
        QData/*63:0*/ __PVT__ls_alu_rd_ls_data;
        QData/*63:0*/ __PVT__ls_store_data;
        QData/*63:0*/ __PVT__wb_pc;
        QData/*63:0*/ __PVT__ls_wb_load_data;
        QData/*63:0*/ __PVT__ls_rd_data;
        QData/*63:0*/ __PVT__wb_rd_data;
    };

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_npc(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_npc();
    VL_UNCOPYABLE(Vnpc_npc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
