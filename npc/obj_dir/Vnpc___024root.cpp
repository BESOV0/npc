// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "Vnpc___024root.h"
#include "Vnpc__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void pmem_read_test(long long raddr, long long* rdata, char rlen);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char rlen__Vcvt;
    for (size_t rlen__Vidx = 0; rlen__Vidx < 1; ++rlen__Vidx) rlen__Vcvt = rlen;
    pmem_read_test(raddr__Vcvt, &rdata__Vcvt, rlen__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write_test(long long waddr, long long wdata, char wlen);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wlen__Vcvt;
    for (size_t wlen__Vidx = 0; wlen__Vidx < 1; ++wlen__Vidx) wlen__Vcvt = wlen;
    pmem_write_test(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt);
}

extern "C" void ebreak(long long ebreak_a0);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP(QData/*63:0*/ ebreak_a0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP\n"); );
    // Body
    long long ebreak_a0__Vcvt;
    for (size_t ebreak_a0__Vidx = 0; ebreak_a0__Vidx < 1; ++ebreak_a0__Vidx) ebreak_a0__Vcvt = ebreak_a0;
    ebreak(ebreak_a0__Vcvt);
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__1(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ npc__DOT__ex_pc_data_ena;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_and;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en;
    CData/*7:0*/ npc__DOT__u_ysyx_22050598_lsu__DOT__rlen;
    VlWide<3>/*64:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b;
    VlWide<3>/*64:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data;
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
    IData/*31:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in;
    IData/*31:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp28;
    VlWide<4>/*127:0*/ __Vtemp29;
    QData/*63:0*/ npc__DOT__ex_csr_rd_pc_data;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2;
    QData/*63:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in;
    QData/*63:0*/ __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in;
    // Body
    if (vlSelf->rst) {
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r 
            = vlSelf->npc__DOT__ex_rd_data;
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r 
            = vlSelf->npc__DOT__ex_ls_load_en;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r 
            = ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                   >> 2U)) & ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem) 
                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw)) 
                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div)) 
                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw)));
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0U : (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul) 
                         << 4U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh) 
                                    << 3U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu) 
                                               << 2U) 
                                              | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw))))));
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r 
            = vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_data_bus_dfflr__DOT__qout_r;
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r = 0U;
    }
    if (vlSelf->rst) {
        if ((vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
             >> 0x1fU)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x40000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x20000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x10000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x8000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x4000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x2000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x1000000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x800000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x400000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x200000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x100000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x80000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x40000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x20000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x10000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x8000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x4000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x2000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x1000U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x800U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x400U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x200U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x100U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x80U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x40U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x20U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((0x10U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((8U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((4U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((2U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen)) {
            vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r 
                = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if (vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mstatus_ena) {
            vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mstatus_dfflr__DOT__qout_r 
                = (vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                   & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mstatus_ena))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mstatus_dfflr__DOT__qout_r = 0xa00001800ULL;
    }
    vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_pc_dfflr__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_pc_dfflr__DOT__qout_r
            : 0ULL);
    if (vlSelf->rst) {
        if (vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mtvec_ena) {
            vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_dfflr__DOT__qout_r 
                = (vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                   & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mtvec_ena))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0U : (IData)(vlSelf->npc__DOT__id_ex_branch_bus));
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_en_dfflr__DOT__qout_r 
            = (1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                     >> 4U));
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_en_dfflr__DOT__qout_r = 0U;
    }
    if (vlSelf->rst) {
        if ((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena) 
                   | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                      >> 7U)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mcause_dfflr__DOT__qout_r 
                = ((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                    & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena)))) 
                   | (0xbULL & (- (QData)((IData)((1U 
                                                   & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                      >> 7U)))))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mcause_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        if ((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena) 
                   | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                      >> 7U)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mepc_dfflr__DOT__qout_r 
                = ((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                    & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena)))) 
                   | (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r 
                      & (- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                  >> 7U)))))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mepc_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r 
            = vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_is_ebreak_dfflr__DOT__qout_r;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0U : (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                         << 5U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs) 
                                    << 4U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc) 
                                               << 3U) 
                                              | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci)))))));
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0ULL : (((- (QData)((IData)((1U & 
                                               ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b) 
                                                >> 1U))))) 
                           & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data) 
                          | ((- (QData)((IData)((1U 
                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b))))) 
                             & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm)));
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_inst_dfflr__DOT__qout_r 
            = vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_dfflr__DOT__qout_r;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_req_dfflr__DOT__qout_r 
            = (1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                         >> 2U)) & ((~ (IData)((0U 
                                                != 
                                                (0x7fU 
                                                 & (3U 
                                                    ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                    | (~ (IData)((0U 
                                                  != 
                                                  (0x7fU 
                                                   & (0x23U 
                                                      ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
    } else {
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_inst_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_req_dfflr__DOT__qout_r = 0U;
    }
    if (vlSelf->rst) {
        if ((0x10U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))) {
            vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r 
                = (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r 
                   & (- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                               >> 4U))))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r = 0ULL;
    }
    if (vlSelf->rst) {
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r 
            = (1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r));
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r 
            = (1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                         >> 2U)) & ((~ (IData)((0U 
                                                != 
                                                (0x7fU 
                                                 & (0x3bU 
                                                    ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                    | (~ (IData)((0U 
                                                  != 
                                                  (0x7fU 
                                                   & (0x1bU 
                                                      ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0x200U : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode));
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0ULL : (((- (QData)((IData)((1U & 
                                               ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                >> 2U))))) 
                           & (((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                 & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                & (~ (IData)((0U != 
                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                               ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                               & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))
                               ? vlSelf->npc__DOT__ex_rd_data
                               : ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                   & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))
                                   ? vlSelf->npc__DOT__ls_rd_data
                                   : ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                       ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                       & (0U != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))
                                       ? vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r
                                       : vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                      [(0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                 >> 0xfU))])))) 
                          | ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                    >> 1U))))) 
                             & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r)));
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_data_bus_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0U : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type));
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_data_bus_dfflr__DOT__qout_r = 0U;
    }
    npc__DOT__u_ysyx_22050598_lsu__DOT__rlen = ((((1U 
                                                   & (- (IData)(
                                                                (0U 
                                                                 == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                                  | (2U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)))))) 
                                                 | (4U 
                                                    & (- (IData)(
                                                                 (2U 
                                                                  == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)))))) 
                                                | (8U 
                                                   & (- (IData)(
                                                                (3U 
                                                                 == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))));
    vlSelf->test_wb_pc = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_pc_dfflr__DOT__qout_r;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_pc_dfflr__DOT__qout_r 
            = vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r;
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_is_ebreak_dfflr__DOT__qout_r 
            = (1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                     >> 8U));
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_pc_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_is_ebreak_dfflr__DOT__qout_r = 0U;
    }
    npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_and 
        = (IData)((0U != (9U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))));
    npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or 
        = (IData)((0U != (0x12U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mstatus_ena 
        = ((0x300U == (0xfffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mtvec_ena 
        = ((0x305U == (0xfffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena 
        = ((0x341U == (0xfffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena 
        = ((0x342U == (0xfffU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))) 
           & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)));
    vlSelf->test_wb_inst = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_inst_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_dfflr__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_dfflr__DOT__qout_r
            : 0U);
    if (vlSelf->rst) {
        if ((1U & (((0U != (IData)(vlSelf->npc__DOT__id_ex_branch_bus)) 
                    | (~ (IData)((0U != (0x7fU & (0x23U 
                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r 
                = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                    ? 0ULL : ((((- (QData)((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm) 
                               | ((- (QData)((IData)(
                                                     (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fU 
                                                                     & (0x23U 
                                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))) 
                                  & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data)) 
                              | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))) 
                                 & (QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                       >> 0xfU)))))));
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r = 0ULL;
    }
    vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                    ? 0U : ((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu)) 
                                             << 1U) 
                                            | (1U & 
                                               ((((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (3U 
                                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (7U 
                                                                 & (4U 
                                                                    ^ 
                                                                    (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                     >> 0xcU))))))) 
                                                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu)))))
            : 0U);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op 
        = (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
           & (- (QData)((IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)))))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
           & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub 
        = (IData)((0U != (0x300U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift 
        = (IData)((0U != (0x18U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))));
    if (vlSelf->rst) {
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r 
            = vlSelf->npc__DOT__ls_rd_data;
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r 
            = vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r;
    } else {
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r = 0U;
    }
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op 
        = (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
           & (- (QData)((IData)((1U & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)))))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op 
        = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
           & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))));
    vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)
            : 0U);
    if (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_en_dfflr__DOT__qout_r) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r, 
                                                                                (((((- (QData)((IData)(
                                                                                (0U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                                                                & (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 0x38U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 0x20U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 0x18U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 0x10U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))))))))))) 
                                                                                | ((- (QData)((IData)(
                                                                                (1U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                                                                & (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 0x20U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                                                << 0x10U) 
                                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r))))))))) 
                                                                                | ((- (QData)((IData)(
                                                                                (2U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                                                                & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r))))) 
                                                                                | ((- (QData)((IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)), (IData)(npc__DOT__u_ysyx_22050598_lsu__DOT__rlen));
    }
    if (vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r, vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__7__rdata, (IData)(npc__DOT__u_ysyx_22050598_lsu__DOT__rlen));
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__7__rdata;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP(0x80000000ULL, vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__8__rdata, (IData)(npc__DOT__u_ysyx_22050598_lsu__DOT__rlen));
        vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__8__rdata;
    }
    npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data 
        = (((((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mstatus_ena))) 
              & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mstatus_dfflr__DOT__qout_r) 
             | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mtvec_ena))) 
                & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_dfflr__DOT__qout_r)) 
            | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mepc_dfflr__DOT__qout_r)) 
           | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena))) 
              & vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mcause_dfflr__DOT__qout_r));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                     >> 6U))))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                     >> 5U))))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                     >> 7U))))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b 
        = ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                             >> 6U)))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b 
        = ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                             >> 5U)))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a 
        = (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
           & (- (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                     >> 6U))))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                     >> 5U))))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a 
        = ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                     >> 7U))))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
        = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
                                              ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                              >> 7U)))) 
                                               & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op)), 
                      VL_EXTENDS_QI(64,32, ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                           >> 7U)))) 
                                            & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op)));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a 
        = ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                             >> 6U)))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a 
        = ((- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                             >> 5U)))) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op);
    vlSelf->npc__DOT__ls_rd_data = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r)
                                     ? (((((- (QData)((IData)(
                                                              (0U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(
                                                                              (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                               >> 7U)) 
                                                                      & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                             & (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0xfU)) 
                                                                        & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r))))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))))) 
                                         | ((- (QData)((IData)(
                                                               (2U 
                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                            & (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0x1fU)) 
                                                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r)))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))) 
                                        | ((- (QData)((IData)(
                                                              (3U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))
                                     : vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r);
    vlSelf->test_ls_pc = vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_pc_dfflr__DOT__qout_r;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0ULL : vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r);
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0U : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus));
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r = 0ULL;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r = 0U;
    }
    npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1 
        = (npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data 
           & (- (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or))));
    vlSelf->test_ls_inst = vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_dfflr__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                    ? 0U : vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)
            : 0U);
    npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                      >> 4U))))) & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                        >> 1U))))) 
              & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U] 
        = ((- (IData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U] 
        = ((- (IData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
           & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                      >> 0x20U)));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U] 
        = (1U & ((- (IData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                 & ((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                        >> 1U)) & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                           >> 0x3fU)))));
    __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
        = npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a;
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffffffffff8ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | (IData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x3fU))))))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffffffffc7ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffffffffe3fULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffffffff1ffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffffff8fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffffffc7fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffffe3ffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffff1fffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffff8ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffffffc7ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffffe3fffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffff1ffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffff8fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfffffc7fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffffe3ffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffff1fffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfff8ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xffc7ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xfe3fffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0xf1ffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0x8fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout) 
           | ((QData)((IData)((1U & (IData)(__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__in)))) 
              << 0x3fU));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
        = ((0x10U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))
            ? vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__3__Vfuncout
            : npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a);
    __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
        = (IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a);
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffffff8U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((4U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                     >> 0x1bU)) | ((2U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                          >> 0x1dU)) 
                                   | (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                      >> 0x1fU))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xffffffc7U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x20U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                        >> 0x15U)) | ((0x10U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                >> 0x17U)) 
                                      | (8U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               >> 0x19U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffffe3fU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x100U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                         >> 0xfU)) | ((0x80U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                >> 0x11U)) 
                                      | (0x40U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                  >> 0x13U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffff1ffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x800U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                         >> 9U)) | ((0x400U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               >> 0xbU)) 
                                    | (0x200U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                 >> 0xdU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xffff8fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x4000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                          >> 3U)) | ((0x2000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                 >> 5U)) 
                                     | (0x1000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                   >> 7U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xfffc7fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x20000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                           << 3U)) | ((0x10000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                          >> 1U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xffe3ffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x100000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                            << 9U)) | ((0x80000U & 
                                        (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                         << 5U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xff1fffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x800000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                            << 0xfU)) | ((0x400000U 
                                          & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               << 0xbU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xf8ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x4000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                             << 0x15U)) | ((0x2000000U 
                                            & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                 << 0x11U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0xc7ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((0x20000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                              << 0x1bU)) | ((0x10000000U 
                                             & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                                  << 0x17U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout 
        = ((0x3fffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout) 
           | ((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
               << 0x1fU) | (0x40000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__in 
                                           << 0x1dU))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
        = ((0x10U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))
            ? vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout
            : (IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a));
    vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r)
            : 0U);
    VL_EXTENDS_WQ(128,64, __Vtemp4, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
    VL_EXTENDS_WQ(128,64, __Vtemp5, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
    VL_MULS_WWW(128,128,128, __Vtemp6, __Vtemp4, __Vtemp5);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[0U] 
        = __Vtemp6[0U];
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[1U] 
        = __Vtemp6[1U];
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[2U] 
        = __Vtemp6[2U];
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[3U] 
        = __Vtemp6[3U];
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
        = VL_DIV_III(32, npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a, npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
        = VL_DIVS_III(32, npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a, npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
        = VL_MODDIV_III(32, npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a, npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
        = VL_MODDIVS_III(32, npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a, npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfffffff9U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (2U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 2U) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                          & (1U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                         << 1U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffffffe7U & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (4U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 4U) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                          & (3U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                         << 3U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffffff9fU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (6U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 6U) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                          & (5U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                         << 5U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfffffe7fU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (8U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 8U) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                          & (7U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                         << 7U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfffff9ffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0xaU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0xaU) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                            & (9U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                           << 9U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffffe7ffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0xcU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0xcU) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                            & (0xbU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                           << 0xbU)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffff9fffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0xeU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0xeU) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                            & (0xdU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                           << 0xdU)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfffe7fffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0x10U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0x10U) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                             & (0xfU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                            << 0xfU)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfff9ffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0x12U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0x12U) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                             & (0x11U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                            << 0x11U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xffe7ffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0x14U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0x14U) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                             & (0x13U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                            << 0x13U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xff9fffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0x16U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0x16U) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                             & (0x15U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                            << 0x15U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xfe7fffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0x18U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0x18U) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                             & (0x17U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                            << 0x17U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xf9ffffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0x1aU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0x1aU) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                             & (0x19U == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                            << 0x19U)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0xe7ffffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0x1cU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0x1cU) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                             & (0x1bU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                            << 0x1bU)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0x9fffffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                & (0x1eU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
               << 0x1eU) | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                             & (0x1dU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
                            << 0x1dU)));
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = ((0x7fffffffU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen) 
           | (((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
               & (0x1fU == (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))) 
              << 0x1fU));
    vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)
            : 0U);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
        = ((((- (QData)((IData)((0U != (0x24U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)))))) 
             & (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                           >> 5U))))) 
                 & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                             >> 2U))))) 
                   & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r))) 
            | ((- (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or))) 
               & (npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1 
                  | npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2))) 
           | ((- (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_and))) 
              & (npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1 
                 & (~ npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2))));
    __Vtemp10[0U] = ((- (IData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r));
    __Vtemp10[1U] = ((- (IData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                     & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                >> 0x20U)));
    __Vtemp10[2U] = (1U & ((- (IData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                           & ((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                  >> 1U)) & (IData)(
                                                    (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                                     >> 0x3fU)))));
    if ((0x100U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))) {
        __Vtemp13[0U] = (~ npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U]);
        __Vtemp13[1U] = (~ npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U]);
        __Vtemp13[2U] = (~ npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]);
    } else {
        __Vtemp13[0U] = npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U];
        __Vtemp13[1U] = npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U];
        __Vtemp13[2U] = npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U];
    }
    VL_ADD_W(3, __Vtemp14, __Vtemp10, __Vtemp13);
    VL_EXTEND_WI(65,1, __Vtemp15, (1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                         >> 8U)));
    VL_ADD_W(3, __Vtemp16, __Vtemp14, __Vtemp15);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
        = __Vtemp16[0U];
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U] 
        = __Vtemp16[1U];
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U] 
        = (1U & __Vtemp16[2U]);
    vlSelf->test_ex_pc = vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r;
    if (vlSelf->rst) {
        if ((1U & (~ (1U & ((- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall))) 
                            >> 1U))))) {
            vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r 
                = ((2U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                    ? 0ULL : vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r);
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r = 0ULL;
    }
    vlSelf->npc__DOT__ex_ls_load_en = ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_req_dfflr__DOT__qout_r) 
                                       & (~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                             >> 4U)));
    npc__DOT__ex_csr_rd_pc_data = (((npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data 
                                     & (- (QData)((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r)))))) 
                                    | (vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_dfflr__DOT__qout_r 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                >> 7U))))))) 
                                   | (vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mepc_dfflr__DOT__qout_r 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r)))))));
    npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en 
        = (IData)((0U != (0x81U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en 
        = (IData)((0U != (0x60U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))));
    if (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r) {
        __Vtemp21[0U] = npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
        __Vtemp21[1U] = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                          >> 2U) 
                                                                         & (npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                            >> 0x1fU))))))));
        __Vtemp21[2U] = (IData)(((0x1ffffffffULL & 
                                  (- (QData)((IData)(
                                                     (1U 
                                                      & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                          >> 2U) 
                                                         & (npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                            >> 0x1fU))))))) 
                                 >> 0x20U));
    } else {
        __Vtemp21[0U] = (IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
        __Vtemp21[1U] = (IData)((npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                 >> 0x20U));
        __Vtemp21[2U] = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                >> 2U) & (IData)((npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                                  >> 0x3fU))));
    }
    VL_SHIFTRS_WWI(65,65,6, __Vtemp22, __Vtemp21, (0x3fU 
                                                   & ((2U 
                                                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))
                                                       ? 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                                          & (- (IData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))
                                                       : 
                                                      ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                                       & (- (IData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U] 
        = __Vtemp22[0U];
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U] 
        = __Vtemp22[1U];
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[2U] 
        = (1U & __Vtemp22[2U]);
    vlSelf->test_ex_inst = vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_dfflr__DOT__qout_r;
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result 
        = (((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub) 
            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))
            ? (((- (QData)((IData)((npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
                                    >> 0x1fU)))) << 0x1fU) 
               | (QData)((IData)((0x7fffffffU & npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))
            : (((QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                << 0x20U) | (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en 
        = (1U & ((((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                       >> 5U) & (~ (IData)((0U != (
                                                   ((QData)((IData)(
                                                                    npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                     | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                         >> 4U) & (0U != (((QData)((IData)(
                                                           npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                    | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                        >> 3U) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                   | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                       >> 2U) & ((~ npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                 | (~ (IData)((0U != 
                                               (((QData)((IData)(
                                                                 npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                  | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                      >> 1U) & npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                    & ((~ npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                       | (~ (IData)((0U != (((QData)((IData)(
                                                             npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))));
    if (vlSelf->rst) {
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r 
            = (1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                         >> 2U)) & (IData)((0U != (0x33U 
                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type))))));
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r 
            = ((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                ? 0U : (0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                 >> 7U)));
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r = 0U;
        vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r = 0U;
    }
    npc__DOT__ex_pc_data_ena = (1U & (((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                       | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                          >> 6U)) | (IData)(npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en)));
    __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
        = npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U];
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xfffffff8U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((4U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                     >> 0x1bU)) | ((2U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                          >> 0x1dU)) 
                                   | (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                      >> 0x1fU))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xffffffc7U & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x20U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                        >> 0x15U)) | ((0x10U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                >> 0x17U)) 
                                      | (8U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                               >> 0x19U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xfffffe3fU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x100U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                         >> 0xfU)) | ((0x80U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                >> 0x11U)) 
                                      | (0x40U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                  >> 0x13U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xfffff1ffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x800U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                         >> 9U)) | ((0x400U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                               >> 0xbU)) 
                                    | (0x200U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                 >> 0xdU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xffff8fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x4000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                          >> 3U)) | ((0x2000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                 >> 5U)) 
                                     | (0x1000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                   >> 7U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xfffc7fffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x20000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                           << 3U)) | ((0x10000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                          >> 1U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xffe3ffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x100000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                            << 9U)) | ((0x80000U & 
                                        (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                         << 5U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xff1fffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x800000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                            << 0xfU)) | ((0x400000U 
                                          & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                               << 0xbU)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xf8ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x4000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                             << 0x15U)) | ((0x2000000U 
                                            & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                 << 0x11U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0xc7ffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((0x20000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                              << 0x1bU)) | ((0x10000000U 
                                             & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                                  << 0x17U)))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout 
        = ((0x3fffffffU & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout) 
           | ((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
               << 0x1fU) | (0x40000000U & (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__in 
                                           << 0x1dU))));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
        = vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__5__Vfuncout;
    __Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
        = (((QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
            << 0x20U) | (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U])));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffffffffff8ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | (IData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x3fU))))))));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffffffffc7ULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffffffffe3fULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffffffff1ffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffffff8fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffffffc7fffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffffe3ffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffff1fffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffff8ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffffffc7ffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffffe3fffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffff1ffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffff8fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfffffc7fffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffffe3ffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffff1fffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfff8ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xffc7ffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xfe3fffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0xf1ffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0x8fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)(((4U & ((IData)((__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout 
        = ((0x7fffffffffffffffULL & vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout) 
           | ((QData)((IData)((1U & (IData)(__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__in)))) 
              << 0x3fU));
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev 
        = vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__6__Vfuncout;
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc 
        = ((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r 
            & (- (QData)((IData)(((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                  | (IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))))) 
           + (((- (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en))) 
               & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r) 
              | (4ULL & (- (QData)((IData)(((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en) 
                                            | ((0U 
                                                != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                               & (~ (IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en))))))))));
    vlSelf->test_id_pc = vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r;
    if (vlSelf->rst) {
        if ((1U & (~ (IData)(vlSelf->npc__DOT__forward_load_stall)))) {
            vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_in;
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r = 0x80000000ULL;
    }
    vlSelf->npc__DOT__ex_pc_data = ((IData)(npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en)
                                     ? npc__DOT__ex_csr_rd_pc_data
                                     : (((- (QData)((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r))))) 
                                         & npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                        | ((- (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                      >> 5U))))) 
                                               & npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                              | (0xfffffffffffffffeULL 
                                                 & ((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                           >> 6U))))) 
                                                    & npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result))))));
    VL_EXTEND_WQ(128,64, __Vtemp24, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
    VL_EXTEND_WQ(128,64, __Vtemp25, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
    VL_MUL_W(4, __Vtemp26, __Vtemp24, __Vtemp25);
    VL_EXTEND_WQ(128,64, __Vtemp27, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
    VL_EXTEND_WQ(128,64, __Vtemp28, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
    VL_MUL_W(4, __Vtemp29, __Vtemp27, __Vtemp28);
    npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data 
        = (((((((((((- (QData)((IData)((((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub) 
                                         & (~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                               >> 3U))) 
                                        & (~ (IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))))) 
                    & npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                   | ((- (QData)((IData)((((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub) 
                                           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                              >> 3U)) 
                                          & (~ (IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))))) 
                      & (QData)((IData)((1U & npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))))) 
                  | ((- (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                     & npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc)) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                              >> 7U))))) 
                    & ((((((- (QData)((IData)((1U & 
                                               ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                >> 4U))))) 
                           & (((QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[0U])))) 
                          | ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                    >> 3U))))) 
                             & (((QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[2U]))))) 
                         | ((- (QData)((IData)((1U 
                                                & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                   >> 2U))))) 
                            & (((QData)((IData)(__Vtemp26[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp26[2U]))))) 
                        | ((- (QData)((IData)((1U & 
                                               ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                >> 1U))))) 
                           & (((QData)((IData)(__Vtemp29[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           __Vtemp29[2U]))))) 
                       | ((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r))))) 
                          & (((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                             >> 0x1fU)))))) 
                              << 0x1fU) | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & (IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res))))))))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                             >> 6U))))) 
                   & (((((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                             & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)))))) 
                         & VL_DIVS_QQQ(64, npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)) 
                        | ((- (QData)((IData)((1U & 
                                               ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))) 
                           & VL_DIV_QQQ(64, npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b))) 
                       | ((- (QData)((IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                          & (((- (QData)((IData)((npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                  >> 0x1fU)))) 
                              << 0x1fU) | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res)))))) 
                      | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                         & (((- (QData)((IData)((npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                 >> 0x1fU)))) 
                             << 0x1fU) | (QData)((IData)(
                                                         (0x7fffffffU 
                                                          & npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res)))))))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                            >> 5U))))) 
                  & (((((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)))))) 
                        & VL_MODDIVS_QQQ(64, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)) 
                       | ((- (QData)((IData)((1U & 
                                              ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))) 
                          & VL_MODDIV_QQQ(64, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b))) 
                      | ((- (QData)((IData)(((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                         & (((- (QData)((IData)((npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                 >> 0x1fU)))) 
                             << 0x1fU) | (QData)((IData)(
                                                         (0x7fffffffU 
                                                          & npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod)))))) 
                     | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                        & (((- (QData)((IData)((npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                >> 0x1fU)))) 
                            << 0x1fU) | (QData)((IData)(
                                                        (0x7fffffffU 
                                                         & npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod)))))))) 
              | ((- (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))) 
                 & ((((- (QData)((IData)((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                           >> 4U) & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                      & (((QData)((IData)((- (IData)(
                                                     (npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
                                                      >> 0x1fU))))) 
                          << 0x20U) | (QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev)))) 
                     | ((- (QData)((IData)((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                   >> 4U) 
                                                  & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))) 
                        & npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev)) 
                    | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                 >> 3U))))) 
                       & (((QData)((IData)(npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U]))))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                          >> 2U))))) 
                & (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                              >> 2U))))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                   | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                >> 2U))))) 
                      & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                         >> 1U))))) 
               & (((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                             >> 1U))))) 
                   & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                  & ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                               >> 1U))))) 
                     & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))) 
           | ((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
              & (((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                  & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                 ^ ((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                    & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))));
    if (vlSelf->rst) {
        if ((1U & (~ (1U & ((- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall))) 
                            >> 1U))))) {
            vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                = ((2U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                    ? 0x13U : vlSelf->npc__DOT__if_id_inst);
        }
    } else {
        vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r = 0U;
    }
    vlSelf->npc__DOT__ex_rd_data = ((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))
                                     ? npc__DOT__ex_csr_rd_pc_data
                                     : (npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                                                 | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                    >> 4U))))))));
    vlSelf->test_if_pc = vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r;
    vlSelf->test_id_inst = vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x63U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (6U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x63U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                               >> 0xcU))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu 
        = (1U & ((~ (IData)((0U != (0x7fU & (3U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (5U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu 
        = (1U & ((~ (IData)((0U != (0x7fU & (3U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (6U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU))))))));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x1bU 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (1U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                      >> 0x1aU))))));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x1bU 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (5U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                      >> 0x1aU))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x33U 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (4U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (0x7fU & (1U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x33U 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                             >> 0xcU)))))) 
                 & (~ (IData)((0U != (0x7fU & (1U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x33U 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (1U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (0x7fU & (1U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x33U 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (2U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (0x7fU & (1U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x33U 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (3U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (0x7fU & (1U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x33U 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (6U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (0x7fU & (1U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x3bU 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                             >> 0xcU)))))) 
                 & (~ (IData)((0U != (0x7fU & (1U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x3bU 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (4U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (0x7fU & (1U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x3bU 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (6U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (0x7fU & (1U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))))));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x33U 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (5U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (0x7fU & (0x20U 
                                               ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0x19U))))))));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x3bU 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (1U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                      >> 0x19U))))));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x3bU 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (5U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                      >> 0x19U))))));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x3bU 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (5U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (0x7fU & (0x20U 
                                               ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0x19U))))))));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x67U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                            >> 0xcU)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x13U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (3U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu 
        = (1U & (((~ (IData)((0U != (0x7fU & (0x33U 
                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                  & (~ (IData)((0U != (7U & (3U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                 & (~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                      >> 0x19U))))));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000 
        = (IData)((0x40000000U == (0xfc000000U & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x73U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (1U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x73U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (2U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x73U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (3U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x73U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (5U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x73U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (6U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci 
        = (1U & ((~ (IData)((0U != (0x7fU & (0x73U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                 & (~ (IData)((0U != (7U & (~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                               >> 0xcU))))))));
    vlSelf->npc__DOT__id_ex_branch_bus = ((0x20U & 
                                           (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x63U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU)))))) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (0x63U 
                                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (7U 
                                                                 & (1U 
                                                                    ^ 
                                                                    (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                     >> 0xcU))))))) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & (((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & (0x63U 
                                                                     ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (7U 
                                                                    & (4U 
                                                                       ^ 
                                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                        >> 0xcU))))))) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & (((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fU 
                                                                     & (0x63U 
                                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (7U 
                                                                       & (5U 
                                                                          ^ 
                                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                           >> 0xcU))))))) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type 
        = (3U & (((1U & (- (IData)((1U & ((((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (3U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (1U 
                                                              ^ 
                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0xcU))))))) 
                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                          | ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x23U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & (1U 
                                                               ^ 
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xcU)))))))))))) 
                  | (2U & (- (IData)((1U & ((((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (3U 
                                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (7U 
                                                             & (2U 
                                                                ^ 
                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                 >> 0xcU))))))) 
                                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu)) 
                                            | ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fU 
                                                            & (0x23U 
                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (2U 
                                                                 ^ 
                                                                 (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                  >> 0xcU))))))))))))) 
                 | (- (IData)((1U & (((~ (IData)((0U 
                                                  != 
                                                  (0x7fU 
                                                   & (3U 
                                                      ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (3U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0xcU))))))) 
                                     | ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x23U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (3U 
                                                          ^ 
                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0xcU)))))))))))));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en 
        = (1U & ((((((~ (IData)((0U != (0x7fU & (0x33U 
                                                 ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                     & (~ (IData)((0U != (7U & (2U 
                                                ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU))))))) 
                    & (~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                         >> 0x19U))))) 
                   | ((~ (IData)((0U != (0x7fU & (0x13U 
                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                      & (~ (IData)((0U != (7U & (2U 
                                                 ^ 
                                                 (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xcU)))))))) 
                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu)));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai 
        = (((~ (IData)((0U != (0x7fU & (0x13U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
            & (~ (IData)((0U != (7U & (5U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                             >> 0xcU))))))) 
           & (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000));
    npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw 
        = (((~ (IData)((0U != (0x7fU & (0x1bU ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
            & (~ (IData)((0U != (7U & (5U ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                             >> 0xcU))))))) 
           & (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri 
        = (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi) 
            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi)) 
           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci));
    vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus 
        = ((0x100U & (((((((~ (IData)((0U != (0x7fU 
                                              & (0x73U 
                                                 ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                           & (~ (IData)((0U != (7U 
                                                & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0xcU)))))) 
                          & (~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                               >> 0x19U))))) 
                         & (~ (IData)((0U != (0x1fU 
                                              & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                 >> 0xfU)))))) 
                        & (~ (IData)((0U != (0x1fU 
                                             & (1U 
                                                ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                   >> 0x14U))))))) 
                       & (~ (IData)((0U != (0x1fU & 
                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                             >> 7U)))))) 
                      << 8U)) | ((0x80U & (((((((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fU 
                                                             & (0x73U 
                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                  >> 0xcU)))))) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0x19U))))) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                >> 0xfU)))))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                               >> 0x14U)))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 7U)))))) 
                                           << 7U)) 
                                 | (((IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr) 
                                     << 6U) | ((0x20U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (0x6fU 
                                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7fU 
                                                                   & (0x23U 
                                                                      ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                      << 4U)) 
                                                  | (((IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en) 
                                                      << 3U) 
                                                     | ((((((IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra) 
                                                            | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai)) 
                                                           | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                                          | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw)) 
                                                         << 2U) 
                                                        | (((((IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw) 
                                                              | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                                             | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw)) 
                                                            << 1U) 
                                                           | (1U 
                                                              & ((((((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x73U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                     & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0xcU)))))) 
                                                                    & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x18U 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0x19U))))))) 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0xfU)))))) 
                                                                  & (~ (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (2U 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0x14U))))))) 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x1fU 
                                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 7U)))))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode 
        = (((0x200U & (((((((((((((~ (IData)((0U != 
                                              (0x7fU 
                                               & (0x33U 
                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                    >> 0xcU)))))) 
                                 & (~ (IData)((0U != 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U))))) 
                                | ((~ (IData)((0U != 
                                               (0x7fU 
                                                & (0x13U 
                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                     >> 0xcU))))))) 
                               | ((~ (IData)((0U != 
                                              (0x7fU 
                                               & (0x1bU 
                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                    >> 0xcU))))))) 
                              | (((~ (IData)((0U != 
                                              (0x7fU 
                                               & (0x3bU 
                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                    >> 0xcU)))))) 
                                 & (~ (IData)((0U != 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0x19U)))))) 
                             | (~ (IData)((0U != (0x7fU 
                                                  & (0x17U 
                                                     ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                            | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr)) 
                           | (~ (IData)((0U != (0x7fU 
                                                & (0x6fU 
                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                          | (~ (IData)((0U != (0x7fU 
                                               & (0x23U 
                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                         | (~ (IData)((0U != (0x7fU 
                                              & (3U 
                                                 ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                        | (~ (IData)((0U != (0x7fU 
                                             & (0x37U 
                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                       << 9U)) | ((0x100U & (((((((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (0x33U 
                                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                    >> 0xcU)))))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x7fU 
                                                                & (0x20U 
                                                                   ^ 
                                                                   (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                    >> 0x19U))))))) 
                                                | (((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x7fU 
                                                                 & (0x3bU 
                                                                    ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                      >> 0xcU)))))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & (0x20U 
                                                                     ^ 
                                                                     (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                      >> 0x19U)))))))) 
                                               | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en)) 
                                              | (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fU 
                                                             & (0x63U 
                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                                             << 8U)) 
                                  | (((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul) 
                                          | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh)) 
                                         | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu)) 
                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu)) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw)) 
                                      << 7U) | ((0x40U 
                                                 & (((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div) 
                                                       | (((~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x7fU 
                                                                        & (0x33U 
                                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                           & (~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (5U 
                                                                             ^ 
                                                                             (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                              >> 0xcU))))))) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x7fU 
                                                                         & (1U 
                                                                            ^ 
                                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                             >> 0x19U)))))))) 
                                                      | (((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fU 
                                                                       & (0x3bU 
                                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (7U 
                                                                         & (5U 
                                                                            ^ 
                                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                             >> 0xcU))))))) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x7fU 
                                                                        & (1U 
                                                                           ^ 
                                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                            >> 0x19U)))))))) 
                                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw)) 
                                                    << 6U)) 
                                                | ((0x20U 
                                                    & (((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem) 
                                                          | (((~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x7fU 
                                                                           & (0x33U 
                                                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (7U 
                                                                             & (~ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0xcU))))))) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x7fU 
                                                                            & (1U 
                                                                               ^ 
                                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0x19U)))))))) 
                                                         | (((~ (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x7fU 
                                                                          & (0x3bU 
                                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (7U 
                                                                            & (~ 
                                                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0xcU))))))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x7fU 
                                                                           & (1U 
                                                                              ^ 
                                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                               >> 0x19U)))))))) 
                                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw)) 
                                                       << 5U)) 
                                                   | ((0x10U 
                                                       & (((((((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x7fU 
                                                                            & (0x33U 
                                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                               & (~ (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (7U 
                                                                              & (1U 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0xcU))))))) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                             >> 0x19U))))) 
                                                             | (((~ (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x7fU 
                                                                              & (0x13U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                 & (~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (7U 
                                                                                & (1U 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0xcU))))))) 
                                                                & (~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                               >> 0x1aU)))))) 
                                                            | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw)) 
                                                           | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw)) 
                                                          << 4U)) 
                                                      | (8U 
                                                         & (((((((((IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra) 
                                                                   | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai)) 
                                                                  | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                                                 | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw)) 
                                                                | (((~ (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x33U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                    & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (5U 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0xcU))))))) 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0x19U)))))) 
                                                               | (((~ (IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x7fU 
                                                                                & (0x13U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (5U 
                                                                                ^ 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0xcU))))))) 
                                                                  & (~ (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                                >> 0x1aU)))))) 
                                                              | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw)) 
                                                             | (IData)(npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                                            << 3U)))))))) 
           | ((4U & (((((~ (IData)((0U != (0x7fU & 
                                           (0x33U ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                        & (~ (IData)((0U != (7U & (6U 
                                                   ^ 
                                                   (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                    >> 0xcU))))))) 
                       & (~ (IData)((0U != (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                            >> 0x19U))))) 
                      | ((~ (IData)((0U != (0x7fU & 
                                            (0x13U 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                         & (~ (IData)((0U != (7U & 
                                              (6U ^ 
                                               (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                >> 0xcU)))))))) 
                     << 2U)) | ((2U & (((((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U))))) 
                                        | ((~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x13U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (~ 
                                                             (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU)))))))) 
                                       << 1U)) | (1U 
                                                  & ((((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & (0x33U 
                                                                       ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (7U 
                                                                      & (4U 
                                                                         ^ 
                                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                          >> 0xcU))))))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                     >> 0x19U))))) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fU 
                                                                     & (0x13U 
                                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (7U 
                                                                       & (4U 
                                                                          ^ 
                                                                          (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                           >> 0xcU))))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type 
        = (((0x20U & (((~ (IData)((0U != (0x7fU & (0x33U 
                                                   ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                       | (~ (IData)((0U != (0x7fU & 
                                            (0x3bU 
                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                      << 5U)) | (0x10U & ((((((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (0x13U 
                                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                              | (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fU 
                                                             & (0x1bU 
                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                                             | (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fU 
                                                            & (0x67U 
                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (3U 
                                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                                           | ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc)) 
                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))) 
                                          << 4U))) 
           | ((8U & ((~ (IData)((0U != (0x7fU & (0x23U 
                                                 ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                     << 3U)) | ((4U & ((~ (IData)((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (0x63U 
                                                       ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                       << 2U)) | ((2U 
                                                   & (((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & (0x37U 
                                                                       ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                       | (~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x7fU 
                                                                      & (0x17U 
                                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x7fU 
                                                                    & (0x6fU 
                                                                       ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm 
        = ((((((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type) 
                                         >> 4U))))) 
               & (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                       >> 0x1fU)))) 
                   << 0xbU) | (QData)((IData)((0x7ffU 
                                               & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0x14U)))))) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type) 
                                           >> 3U))))) 
                 & (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                         >> 0x1fU)))) 
                     << 0xbU) | (QData)((IData)(((0x7e0U 
                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                       >> 7U)))))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type) 
                                          >> 2U))))) 
                & (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0x800U 
                                                 & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 7U))))))))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type) 
                                         >> 1U))))) 
               & (((QData)((IData)((- (IData)((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                               >> 0x1fU))))) 
                   << 0x20U) | (QData)((IData)((0xfffff000U 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
           | ((- (QData)((IData)((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type))))) 
              & (((- (QData)((IData)((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                      >> 0x1fU)))) 
                  << 0x14U) | (QData)((IData)(((0xff000U 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r) 
                                               | ((0x800U 
                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x14U)))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a 
        = (((IData)((0U != (0x3cU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type)))) 
            << 2U) | ((2U & (((~ (IData)((0U != (0x7fU 
                                                 & (0x6fU 
                                                    ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                              | (~ (IData)((0U != (0x7fU 
                                                   & (0x17U 
                                                      ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                             << 1U)) | (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x37U 
                                                             ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b 
        = (((IData)((0U != (0x24U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type)))) 
            << 1U) | (IData)((0U != (0x1bU & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type)))));
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild 
        = (0x1fU & ((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                     >> 0xfU) & (- (IData)((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                  >> 2U))))));
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild 
        = (0x1fU & ((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                     >> 0x14U) & (- (IData)((1U & (
                                                   ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b) 
                                                    >> 1U) 
                                                   | (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x7fU 
                                                                  & (0x23U 
                                                                     ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))))))));
    vlSelf->npc__DOT__forward_load_stall = ((((IData)(vlSelf->npc__DOT__ex_ls_load_en) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                             ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                             & (0U 
                                                != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r))) 
                                            | (((IData)(vlSelf->npc__DOT__ex_ls_load_en) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                               ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                               & (0U 
                                                  != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r))));
    vlSelf->npc__DOT__pipeline_flush = (7U & ((4U & 
                                               (- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall)))) 
                                              | (- (IData)(
                                                           (0U 
                                                            != 
                                                            ((vlSelf->npc__DOT__ex_pc_data 
                                                              & (- (QData)((IData)(npc__DOT__ex_pc_data_ena)))) 
                                                             ^ 
                                                             (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r 
                                                              & (- (QData)((IData)(npc__DOT__ex_pc_data_ena))))))))));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__3(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__3\n"); );
    // Body
    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                                                                [0xaU]);
}

VL_INLINE_OPT void Vnpc___024root___combo__TOP__4(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___combo__TOP__4\n"); );
    // Variables
    QData/*63:0*/ npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm;
    // Body
    if (vlSelf->rst) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read_TOP(
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r), vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read__0__rdata);
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__rdata 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read__0__rdata;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read_TOP(0x80000000ULL, vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read__1__rdata);
        vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__rdata 
            = vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_ifu__DOT__pmem_read__1__rdata;
    }
    vlSelf->npc__DOT__if_id_inst = (((- (IData)((0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r))))) 
                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__rdata)) 
                                    | ((- (IData)((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r))))) 
                                       & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__rdata 
                                                  >> 0x20U))));
    vlSelf->test_if_inst = vlSelf->npc__DOT__if_id_inst;
    npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm = ((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->npc__DOT__if_id_inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->npc__DOT__if_id_inst 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->npc__DOT__if_id_inst 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->npc__DOT__if_id_inst 
                                                                              >> 7U)))))));
    vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_in 
        = ((1U & (IData)(vlSelf->npc__DOT__pipeline_flush))
            ? vlSelf->npc__DOT__ex_pc_data : (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                              + (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->npc__DOT__if_id_inst)) 
                                                  | ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__if_id_inst)) 
                                                     & (IData)(
                                                               (npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm 
                                                                >> 0x3fU))))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->npc__DOT__if_id_inst))))) 
                                                   & (((- (QData)((IData)(
                                                                          (vlSelf->npc__DOT__if_id_inst 
                                                                           >> 0x1fU)))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        ((0xff000U 
                                                                          & vlSelf->npc__DOT__if_id_inst) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->npc__DOT__if_id_inst 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->npc__DOT__if_id_inst 
                                                                                >> 0x14U)))))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0x63U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->npc__DOT__if_id_inst))))) 
                                                     & npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm))
                                                  : 4ULL)));
}

VL_INLINE_OPT void Vnpc___024root___sequent__TOP__6(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[1U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[2U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[3U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[4U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[5U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[6U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[7U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[8U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[9U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xaU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xbU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xcU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xdU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xeU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0xfU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x10U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x11U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x12U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x13U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x14U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x15U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x16U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x17U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x18U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x19U] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1aU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1bU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1cU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1dU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1eU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0x1fU] 
        = vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r;
    vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data 
        = (((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
              & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
             & (~ (IData)((0U != ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                  ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
            & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))
            ? vlSelf->npc__DOT__ex_rd_data : ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                               ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                               & (0U 
                                                  != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))
                                               ? vlSelf->npc__DOT__ls_rd_data
                                               : ((
                                                   ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                                   & (0U 
                                                      != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))
                                                   ? vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r
                                                   : 
                                                  vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                      >> 0x14U))])));
}

void Vnpc___024root___eval(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vnpc___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->__VinpClk__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r)))) {
        Vnpc___024root___sequent__TOP__3(vlSelf);
    }
    Vnpc___024root___combo__TOP__4(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vnpc___024root___sequent__TOP__6(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r 
        = vlSelf->__VinpClk__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r;
    vlSelf->__VinpClk__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r 
        = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r;
}

QData Vnpc___024root___change_request_1(Vnpc___024root* vlSelf);

VL_INLINE_OPT QData Vnpc___024root___change_request(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___change_request\n"); );
    // Body
    return (Vnpc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vnpc___024root___change_request_1(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r ^ vlSelf->__Vchglast__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r));
    VL_DEBUG_IF( if(__req && ((vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r ^ vlSelf->__Vchglast__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22050598_sirv_gnrl_dfflr.v:13: npc.ysyx_22050598_LS_WB.ls_wb_ebreak_dfflr.qout_r\n"); );
    // Final
    vlSelf->__Vchglast__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r 
        = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r;
    return __req;
}

#ifdef VL_DEBUG
void Vnpc___024root___eval_debug_assertions(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
