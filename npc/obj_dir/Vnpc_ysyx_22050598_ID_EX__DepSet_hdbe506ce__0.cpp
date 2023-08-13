// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_ID_EX.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_ID_EX___nba_sequent__TOP__npc__u_ysyx_22050598_ID_EX__18(Vnpc_ysyx_22050598_ID_EX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ID_EX___nba_sequent__TOP__npc__u_ysyx_22050598_ID_EX__18\n"); );
    // Body
    vlSelf->__PVT__id_ex_inst_btype = VL_REDOR_I((IData)(vlSelf->__PVT__id_ex_branch_bus));
    vlSelf->__PVT__id_ex_inst_bus = VL_CONCAT_III(9,1,8, (IData)(vlSelf->__PVT__id_ex_inst_is_ebreak), 
                                                  VL_CONCAT_III(8,1,7, (IData)(vlSelf->__PVT__id_ex_inst_is_ecall), 
                                                                VL_CONCAT_III(7,1,6, (IData)(vlSelf->__PVT__id_ex_inst_is_jalr), 
                                                                              VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT__id_ex_inst_is_jal), 
                                                                                VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__id_ex_inst_is_store), 
                                                                                VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__id_ex_inst_is_set), 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__id_ex_inst_is_srax), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__id_ex_inst_5_shamt), (IData)(vlSelf->__PVT__id_ex_inst_is_mret)))))))));
}
