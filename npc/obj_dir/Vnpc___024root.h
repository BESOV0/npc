// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC___024ROOT_H_
#define VERILATED_VNPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vnpc__Syms;
class Vnpc_VerilatedVcd;


//----------

VL_MODULE(Vnpc___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT(inst,31,0);
    VL_OUT64(pc_now,63,0);
    VL_OUT64(fdata,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak;
        CData/*0:0*/ npc__DOT__id_ex_w_reg_en;
        CData/*0:0*/ npc__DOT__id_ex_inst_is_srax;
        CData/*0:0*/ npc__DOT__id_ex_inst_divrem_bus;
        CData/*4:0*/ npc__DOT__id_ex_inst_mul_bus;
        CData/*5:0*/ npc__DOT__id_ex_csr_bus;
        CData/*5:0*/ npc__DOT__id_ex_branch_bus;
        CData/*1:0*/ npc__DOT__id_ex_unsigned_bus;
        CData/*0:0*/ npc__DOT__wb_rd_en;
        CData/*4:0*/ npc__DOT__wb_rd_idx;
        CData/*0:0*/ npc__DOT__ex_load_en_o;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_IFU__DOT__sign_reg__DOT__qout_r;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en;
        CData/*5:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type;
        CData/*2:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a;
        CData/*1:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b;
        CData/*1:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or;
        CData/*0:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_and;
        SData/*9:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen;
        VlWide<3>/*64:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b;
        VlWide<3>/*64:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data;
    };
    struct {
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op;
        VlWide<4>/*127:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
        VlWide<3>/*64:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result;
        IData/*31:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev;
        QData/*63:0*/ npc__DOT__read_rs2_data;
        QData/*63:0*/ npc__DOT__wb_data;
        QData/*63:0*/ npc__DOT__rd_data;
        QData/*63:0*/ npc__DOT__alu_op_a;
        QData/*63:0*/ npc__DOT__alu_op_b;
        QData/*63:0*/ npc__DOT__ex_bs_data;
        QData/*63:0*/ npc__DOT__ex_store_data_o;
        QData/*63:0*/ npc__DOT__csr_rd_data;
        QData/*63:0*/ npc__DOT__alu_rd_data_o;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_IFU__DOT__pc;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_IFU__DOT__rdata;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res;
    };
    struct {
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__read_csr_data;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__mstatus_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__mtvec_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__mepc_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_csr__DOT__mcause_dfflr__DOT__qout_r;
        QData/*63:0*/ npc__DOT__u_ysyx_22050598_lsu__DOT__rdata;
        VlUnpacked<QData/*63:0*/, 32> npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*0:0*/ __Vclklast__TOP__npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak;
    IData/*31:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout;
    IData/*31:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout;
    QData/*63:0*/ __Vtask_npc__DOT__u_ysyx_22050598_IFU__DOT__pmem_read__0__rdata;
    QData/*63:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout;
    QData/*63:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout;
    QData/*63:0*/ __Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__6__rdata;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vnpc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vnpc___024root);  ///< Copying not allowed
  public:
    Vnpc___024root(const char* name);
    ~Vnpc___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vnpc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
