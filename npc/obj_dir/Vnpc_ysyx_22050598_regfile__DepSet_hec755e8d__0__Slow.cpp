// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_regfile.h"

void Vnpc_ysyx_22050598_regfile____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__npc__u_ysyx_22050598_regfile(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void Vnpc_ysyx_22050598_regfile___eval_initial__TOP__npc__u_ysyx_22050598_regfile(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___eval_initial__TOP__npc__u_ysyx_22050598_regfile\n"); );
    // Body
    Vnpc_ysyx_22050598_regfile____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__npc__u_ysyx_22050598_regfile(vlSelf->__PVT__rf_r);
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__rf_wen, 0U);
    vlSelf->__PVT__rf_r[0U] = 0ULL;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_regfile___stl_sequent__TOP__npc__u_ysyx_22050598_regfile__2(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___stl_sequent__TOP__npc__u_ysyx_22050598_regfile__2\n"); );
    // Body
    vlSelf->__PVT__read_rs1_data = vlSelf->__PVT__rf_r
        [vlSelf->__PVT__read_rs1_idx];
    vlSelf->__PVT__read_rs2_data = vlSelf->__PVT__rf_r
        [vlSelf->__PVT__read_rs2_idx];
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_regfile___ctor_var_reset(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_rs1_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__read_rs2_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__read_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__read_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__write_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ebreak_a0 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__rf_r[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__rf_wen = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vcellinp__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 = VL_RAND_RESET_I(1);
}
