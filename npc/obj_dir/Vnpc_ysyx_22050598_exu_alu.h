// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_EXU_ALU_H_
#define VERILATED_VNPC_YSYX_22050598_EXU_ALU_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_ysyx_22050598_muldiv;


class Vnpc_ysyx_22050598_exu_alu final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_ysyx_22050598_muldiv* __PVT__u_ysyx_22050598___05Fmuldiv;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__ex_muldiv_flush,0,0);
        VL_IN8(__PVT__ex_write_reg_en,0,0);
        VL_IN8(__PVT__ex_inst_is_jalr,0,0);
        VL_IN8(__PVT__ex_inst_is_jal,0,0);
        VL_IN8(__PVT__ex_inst_is_store,0,0);
        VL_IN8(__PVT__ex_inst_is_set,0,0);
        VL_IN8(__PVT__ex_inst_is_srax,0,0);
        VL_IN8(__PVT__ex_inst_5_shamt,0,0);
        VL_IN8(__PVT__ex_inst_divrem_bus,0,0);
        VL_IN8(__PVT__ex_inst_mul_bus,4,0);
        VL_IN8(__PVT__ex_branch_bus,5,0);
        VL_IN8(__PVT__ex_unsigned_bus,0,0);
        VL_IN8(__PVT__ex_ls_req,0,0);
        VL_IN8(__PVT__ex_inst_is_rv64,0,0);
        VL_OUT8(__PVT__ex_alu_rd_data_en,0,0);
        VL_OUT8(__PVT__ex_alu_pc_en_o,0,0);
        VL_OUT8(__PVT__ex_load_en_o,0,0);
        VL_OUT8(__PVT__ex_store_en_o,0,0);
        VL_OUT8(__PVT__muldiv_ready,0,0);
        VL_OUT8(__PVT__muldivout_valid,0,0);
        CData/*0:0*/ __PVT__add_or_sub;
        CData/*0:0*/ __PVT__add_sub_cin;
        CData/*0:0*/ __PVT__mul_valid;
        CData/*0:0*/ __PVT__div_valid;
        CData/*0:0*/ __PVT__muldivw;
        CData/*1:0*/ __PVT__mul_signed;
        CData/*0:0*/ __PVT__div_signed;
        CData/*0:0*/ __PVT__alu_op_is_shift;
        CData/*5:0*/ __PVT__temp_shift_op_b_6;
        CData/*4:0*/ __PVT__temp_shift_op_b_5;
        CData/*5:0*/ __PVT__shift_op_b;
        CData/*0:0*/ __PVT__ex_inst_brach_en;
        CData/*0:0*/ __PVT__branch_cmp;
        CData/*0:0*/ __PVT__branch_cmp_zero;
        CData/*0:0*/ __PVT__inst_beq_en;
        CData/*0:0*/ __PVT__inst_bne_en;
        CData/*0:0*/ __PVT__inst_blt_en;
        CData/*0:0*/ __PVT__inst_bge_en;
        CData/*0:0*/ __PVT__inst_bltu_en;
        CData/*0:0*/ __PVT__inst_bgeu_en;
        CData/*0:0*/ __PVT__branch_en;
        CData/*0:0*/ __PVT__branch_not_jump;
        CData/*0:0*/ __PVT__ex_inst_jump_en;
        VL_IN16(__PVT__ex_alu_op_type,9,0);
        VlWide<3>/*64:0*/ __PVT__adder_op1;
        VlWide<3>/*64:0*/ __PVT__adder_op2;
        VlWide<3>/*64:0*/ __PVT__add_sub_op_a;
        VlWide<3>/*64:0*/ __PVT__add_sub_op_b;
        VlWide<3>/*64:0*/ __PVT__add_sub_in_a;
        VlWide<3>/*64:0*/ __PVT__add_sub_in_b;
        VlWide<3>/*64:0*/ __PVT__sum_sub_data;
        IData/*31:0*/ __PVT__temp_shift_op_a_32;
        VlWide<3>/*64:0*/ __PVT__shift_op_a_32;
        VlWide<3>/*64:0*/ __PVT__shift_op_a_64;
        VlWide<3>/*64:0*/ __PVT__shift_op_a;
        VlWide<3>/*64:0*/ __PVT__temp_shift_result;
        IData/*31:0*/ __PVT__shift_result_32_rev;
        IData/*31:0*/ __Vfunc_reverse32__1__Vfuncout;
        IData/*31:0*/ __Vfunc_reverse32__1__in;
        IData/*31:0*/ __Vfunc_reverse32__2__Vfuncout;
        IData/*31:0*/ __Vfunc_reverse32__2__in;
        VL_IN64(__PVT__ex_alu_op_a,63,0);
    };
    struct {
        VL_IN64(__PVT__ex_alu_op_b,63,0);
        VL_IN64(__PVT__ex_pc,63,0);
        VL_IN64(__PVT__ex_bs_zimm_data,63,0);
        VL_OUT64(__PVT__ex_alu_rd_ls_data,63,0);
        VL_OUT64(__PVT__ex_alu_pc_o,63,0);
        VL_OUT64(__PVT__ex_store_data_o,63,0);
        QData/*63:0*/ __PVT__sum_sub_w_result;
        QData/*63:0*/ __PVT__sum_sub_result;
        QData/*63:0*/ __PVT__result_hi;
        QData/*63:0*/ __PVT__result_lo;
        QData/*63:0*/ __PVT__quotient;
        QData/*63:0*/ __PVT__remainder;
        QData/*63:0*/ __PVT__mul_result;
        QData/*63:0*/ __PVT__div_result;
        QData/*63:0*/ __PVT__mod_result;
        QData/*63:0*/ __PVT__temp_shift_op_a;
        QData/*63:0*/ __PVT__temp_shift_op_a_64;
        QData/*63:0*/ __PVT__shift_result_64_rev;
        QData/*63:0*/ __PVT__shift_result;
        QData/*63:0*/ __PVT__or_op_a;
        QData/*63:0*/ __PVT__or_op_b;
        QData/*63:0*/ __PVT__or_result;
        QData/*63:0*/ __PVT__and_op_a;
        QData/*63:0*/ __PVT__and_op_b;
        QData/*63:0*/ __PVT__and_result;
        QData/*63:0*/ __PVT__xor_op_a;
        QData/*63:0*/ __PVT__xor_op_b;
        QData/*63:0*/ __PVT__xor_result;
        QData/*63:0*/ __PVT__pc_op_a;
        QData/*63:0*/ __PVT__pc_op_b;
        QData/*63:0*/ __PVT__jump_brach_pc;
        QData/*63:0*/ __PVT__ex_jump_pc_res;
        QData/*63:0*/ __PVT__ex_temp_rd_ls_data;
        QData/*63:0*/ __Vfunc_reverse64__0__Vfuncout;
        QData/*63:0*/ __Vfunc_reverse64__0__in;
        QData/*63:0*/ __Vfunc_reverse64__3__Vfuncout;
        QData/*63:0*/ __Vfunc_reverse64__3__in;
    };

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_exu_alu(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_exu_alu();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_exu_alu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
