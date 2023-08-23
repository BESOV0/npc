// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc___024root.h"

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

extern "C" void pmem_read_test(long long raddr, long long* rdata, char rlen, long long addr, int inst);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ rlen, QData/*63:0*/ addr, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char rlen__Vcvt;
    for (size_t rlen__Vidx = 0; rlen__Vidx < 1; ++rlen__Vidx) rlen__Vcvt = rlen;
    long long addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    pmem_read_test(raddr__Vcvt, &rdata__Vcvt, rlen__Vcvt, addr__Vcvt, inst__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write_test(long long waddr, long long wdata, char wlen, char wmask);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wlen, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_write_test_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wlen__Vcvt;
    for (size_t wlen__Vidx = 0; wlen__Vidx < 1; ++wlen__Vidx) wlen__Vcvt = wlen;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write_test(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt, wmask__Vcvt);
}

extern "C" void ebreak(long long ebreak_a0);

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP(QData/*63:0*/ ebreak_a0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__ebreak_TOP\n"); );
    // Body
    long long ebreak_a0__Vcvt;
    for (size_t ebreak_a0__Vidx = 0; ebreak_a0__Vidx < 1; ++ebreak_a0__Vidx) ebreak_a0__Vcvt = ebreak_a0;
    ebreak(ebreak_a0__Vcvt);
}

extern "C" void fencei();

VL_INLINE_OPT void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__fencei_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_EBREAK__DOT__fencei_TOP\n"); );
    // Body
    fencei();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__act(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG

void Vnpc___024root___eval_triggers__act(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r)));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->npc__DOT__ex_inst_is_fencei) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__npc__DOT__ex_inst_is_fencei)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r 
        = vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r;
    vlSelf->__Vtrigrprev__TOP__npc__DOT__ex_inst_is_fencei 
        = vlSelf->npc__DOT__ex_inst_is_fencei;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnpc___024root___dump_triggers__act(vlSelf);
    }
#endif
}
