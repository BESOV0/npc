// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "Vnpc___024root.h"
#include "Vnpc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vnpc___024root___ctor_var_reset(Vnpc___024root* vlSelf);

Vnpc___024root::Vnpc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vnpc___024root___ctor_var_reset(this);
}

void Vnpc___024root::__Vconfigure(Vnpc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vnpc___024root::~Vnpc___024root() {
}

void Vnpc___024root___settle__TOP__224__PROF__ysyx_22050598_regfile__l26(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__224__PROF__ysyx_22050598_regfile__l26\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
        = (0xfffffffeU & vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen);
}

void Vnpc___024root___settle__TOP__227__PROF__ysyx_22050598_regfile__l27(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___settle__TOP__227__PROF__ysyx_22050598_regfile__l27\n"); );
    // Body
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0U] = 0ULL;
}

void Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vnpc___024root___initial__TOP__384__PROF__ysyx_22050598_regfile__l20(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___initial__TOP__384__PROF__ysyx_22050598_regfile__l20\n"); );
    // Body
    Vnpc___024root____Vdpiimwrap_npc__DOT__u_ysyx_22050598_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r);
}

void Vnpc___024root___eval_initial(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP__npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak 
        = vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak;
    Vnpc___024root___initial__TOP__384__PROF__ysyx_22050598_regfile__l20(vlSelf);
}

void Vnpc___024root___sequent__TOP__150__PROF__ysyx_22050598_IFU__l24(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__151__PROF__ysyx_22050598_IFU__l20(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__228__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__229__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__230__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__231__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__232__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__233__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__234__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__235__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__236__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__237__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__238__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__239__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__240__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__241__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__242__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__243__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__244__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__245__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__246__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__247__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__248__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__249__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__250__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__251__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__252__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__253__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__254__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__255__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__256__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__257__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__258__PROF__ysyx_22050598_regfile__l31(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__152__PROF__ysyx_22050598_IFU__l25(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__153__PROF__ysyx_22050598_exu_alu__l225(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__154__PROF__ysyx_22050598_idu_decode__l157(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__155__PROF__ysyx_22050598_idu_decode__l158(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__156__PROF__ysyx_22050598_idu_decode__l147(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__157__PROF__ysyx_22050598_idu_decode__l149(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__158__PROF__ysyx_22050598_idu_decode__l134(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__159__PROF__ysyx_22050598_idu_decode__l135(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__160__PROF__ysyx_22050598_idu_decode__l261(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__161__PROF__ysyx_22050598_idu_decode__l96(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__162__PROF__ysyx_22050598_idu_decode__l97(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__163__PROF__ysyx_22050598_idu_decode__l110(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__164__PROF__ysyx_22050598_idu_decode__l116(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__165__PROF__ysyx_22050598_idu_decode__l125(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__166__PROF__ysyx_22050598_idu_decode__l127(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__167__PROF__ysyx_22050598_idu_decode__l112(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__168__PROF__ysyx_22050598_idu_decode__l113(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__169__PROF__ysyx_22050598_idu_decode__l114(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__170__PROF__ysyx_22050598_idu_decode__l115(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__171__PROF__ysyx_22050598_idu_decode__l124(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__172__PROF__ysyx_22050598_idu_decode__l138(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__173__PROF__ysyx_22050598_idu_decode__l121(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__174__PROF__ysyx_22050598_idu_decode__l122(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__175__PROF__ysyx_22050598_idu_decode__l93(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__176__PROF__ysyx_22050598_idu_decode__l98(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__177__PROF__ysyx_22050598_idu_decode__l107(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__178__PROF__ysyx_22050598_idu_decode__l123(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__179__PROF__ysyx_22050598_idu_decode__l87(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__180__PROF__ysyx_22050598_idu_decode__l104(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__181__PROF__ysyx_22050598_idu_decode__l160(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__182__PROF__ysyx_22050598_idu_decode__l161(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__183__PROF__ysyx_22050598_idu_decode__l162(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__184__PROF__ysyx_22050598_idu_decode__l163(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__185__PROF__ysyx_22050598_idu_decode__l164(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__186__PROF__ysyx_22050598_idu_decode__l165(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__187__PROF__ysyx_22050598_idu_decode__l156(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__295__PROF__ysyx_22050598_regfile__l37(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__188__PROF__ysyx_22050598_idu_decode__l223(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__189__PROF__ysyx_22050598_idu_decode__l252(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__190__PROF__ysyx_22050598_idu_decode__l254(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__191__PROF__ysyx_22050598_idu_decode__l253(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__192__PROF__ysyx_22050598_exu_alu__l206(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__193__PROF__ysyx_22050598_idu_decode__l246(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__194__PROF__ysyx_22050598_idu_decode__l256(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__195__PROF__ysyx_22050598_idu_decode__l172(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__196__PROF__ysyx_22050598_idu_decode__l251(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__197__PROF__ysyx_22050598_idu_decode__l168(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__198__PROF__ysyx_22050598_idu_decode__l174(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__199__PROF__ysyx_22050598_csr__l57(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__200__PROF__ysyx_22050598_csr__l47(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__201__PROF__ysyx_22050598_idu_decode__l193(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__202__PROF__ysyx_22050598_exu_alu__l37(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__203__PROF__ysyx_22050598_exu_alu__l145(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__204__PROF__ysyx_22050598_idu_decode__l237(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__205__PROF__ysyx_22050598_idu_decode__l220(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__206__PROF__ysyx_22050598_idu_decode__l206(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__207__PROF__ysyx_22050598_idu_decode__l216(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__208__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__209__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__210__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__211__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__212__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__213__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__214__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__215__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__216__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__217__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__218__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__219__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__220__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__221__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__222__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___sequent__TOP__223__PROF__ysyx_22050598_regfile__l30(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__332__PROF__ysyx_22050598_idu_forward__l69(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__333__PROF__ysyx_22050598_idu_forward__l66(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__334__PROF__ysyx_22050598_idu_forward__l62(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__335__PROF__ysyx_22050598_exu_alu__l228(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__336__PROF__ysyx_22050598_exu_alu__l209(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__337__PROF__ysyx_22050598_csr__l41(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__338__PROF__ysyx_22050598_csr__l42(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__339__PROF__ysyx_22050598_csr__l43(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__340__PROF__ysyx_22050598_csr__l44(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__341__PROF__ysyx_22050598_exu_alu__l43(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__342__PROF__ysyx_22050598_exu_alu__l92(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__343__PROF__ysyx_22050598_exu_alu__l90(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__344__PROF__ysyx_22050598_exu_alu__l91(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__345__PROF__ysyx_22050598_exu_alu__l89(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__346__PROF__ysyx_22050598_exu_alu__l146(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__347__PROF__ysyx_22050598_csr__l49(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__348__PROF__ysyx_22050598_csr__l63(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__349__PROF__ysyx_22050598_exu_alu__l46(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__350__PROF__ysyx_22050598_exu_alu__l112(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__351__PROF__ysyx_22050598_exu_alu__l129(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__352__PROF__ysyx_22050598_exu_alu__l95(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__353__PROF__ysyx_22050598_exu_alu__l117(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__354__PROF__ysyx_22050598_exu_alu__l134(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__355__PROF__ysyx_22050598_exu_alu__l111(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__356__PROF__ysyx_22050598_exu_alu__l128(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__357__PROF__ysyx_22050598_exu_alu__l94(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__358__PROF__ysyx_22050598_exu_alu__l116(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__359__PROF__ysyx_22050598_exu_alu__l133(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__360__PROF__ysyx_22050598_exu_alu__l102(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__361__PROF__ysyx_22050598_exu_alu__l150(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__362__PROF__ysyx_22050598_exu_alu__l151(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__363__PROF__ysyx_22050598_csr__l48(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__364__PROF__ysyx_22050598_csr__l95(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__365__PROF__ysyx_22050598_exu_alu__l49(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__366__PROF__ysyx_22050598_exu_alu__l97(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__367__PROF__ysyx_22050598_exu_alu__l118(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__368__PROF__ysyx_22050598_exu_alu__l119(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__369__PROF__ysyx_22050598_exu_alu__l135(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__370__PROF__ysyx_22050598_exu_alu__l136(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__371__PROF__ysyx_22050598_exu_alu__l157(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__372__PROF__ysyx_22050598_csr__l68(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__373__PROF__ysyx_22050598_IFU__l11(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__374__PROF__ysyx_22050598_exu_alu__l159(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__375__PROF__ysyx_22050598_exu_alu__l160(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__376__PROF__ysyx_22050598_exu_alu__l214(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__377__PROF__ysyx_22050598_exu_rd_mux__l8(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__378__PROF__ysyx_22050598_lsu__l154(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__379__PROF__ysyx_22050598_lsu__l149(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__380__PROF__npc__l222(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__381__PROF__npc__l229(Vnpc___024root* vlSelf);

void Vnpc___024root___eval_settle(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_settle\n"); );
    // Body
    Vnpc___024root___settle__TOP__224__PROF__ysyx_22050598_regfile__l26(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vnpc___024root___sequent__TOP__150__PROF__ysyx_22050598_IFU__l24(vlSelf);
    Vnpc___024root___sequent__TOP__151__PROF__ysyx_22050598_IFU__l20(vlSelf);
    Vnpc___024root___settle__TOP__227__PROF__ysyx_22050598_regfile__l27(vlSelf);
    Vnpc___024root___settle__TOP__228__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__229__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__230__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__231__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__232__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__233__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__234__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__235__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__236__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__237__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__238__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__239__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__240__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__241__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__242__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__243__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__244__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__245__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__246__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__247__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__248__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__249__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__250__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__251__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__252__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__253__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__254__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__255__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__256__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__257__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___settle__TOP__258__PROF__ysyx_22050598_regfile__l31(vlSelf);
    Vnpc___024root___sequent__TOP__152__PROF__ysyx_22050598_IFU__l25(vlSelf);
    Vnpc___024root___sequent__TOP__153__PROF__ysyx_22050598_exu_alu__l225(vlSelf);
    Vnpc___024root___sequent__TOP__154__PROF__ysyx_22050598_idu_decode__l157(vlSelf);
    Vnpc___024root___sequent__TOP__155__PROF__ysyx_22050598_idu_decode__l158(vlSelf);
    Vnpc___024root___sequent__TOP__156__PROF__ysyx_22050598_idu_decode__l147(vlSelf);
    Vnpc___024root___sequent__TOP__157__PROF__ysyx_22050598_idu_decode__l149(vlSelf);
    Vnpc___024root___sequent__TOP__158__PROF__ysyx_22050598_idu_decode__l134(vlSelf);
    Vnpc___024root___sequent__TOP__159__PROF__ysyx_22050598_idu_decode__l135(vlSelf);
    Vnpc___024root___sequent__TOP__160__PROF__ysyx_22050598_idu_decode__l261(vlSelf);
    Vnpc___024root___sequent__TOP__161__PROF__ysyx_22050598_idu_decode__l96(vlSelf);
    Vnpc___024root___sequent__TOP__162__PROF__ysyx_22050598_idu_decode__l97(vlSelf);
    Vnpc___024root___sequent__TOP__163__PROF__ysyx_22050598_idu_decode__l110(vlSelf);
    Vnpc___024root___sequent__TOP__164__PROF__ysyx_22050598_idu_decode__l116(vlSelf);
    Vnpc___024root___sequent__TOP__165__PROF__ysyx_22050598_idu_decode__l125(vlSelf);
    Vnpc___024root___sequent__TOP__166__PROF__ysyx_22050598_idu_decode__l127(vlSelf);
    Vnpc___024root___sequent__TOP__167__PROF__ysyx_22050598_idu_decode__l112(vlSelf);
    Vnpc___024root___sequent__TOP__168__PROF__ysyx_22050598_idu_decode__l113(vlSelf);
    Vnpc___024root___sequent__TOP__169__PROF__ysyx_22050598_idu_decode__l114(vlSelf);
    Vnpc___024root___sequent__TOP__170__PROF__ysyx_22050598_idu_decode__l115(vlSelf);
    Vnpc___024root___sequent__TOP__171__PROF__ysyx_22050598_idu_decode__l124(vlSelf);
    Vnpc___024root___sequent__TOP__172__PROF__ysyx_22050598_idu_decode__l138(vlSelf);
    Vnpc___024root___sequent__TOP__173__PROF__ysyx_22050598_idu_decode__l121(vlSelf);
    Vnpc___024root___sequent__TOP__174__PROF__ysyx_22050598_idu_decode__l122(vlSelf);
    Vnpc___024root___sequent__TOP__175__PROF__ysyx_22050598_idu_decode__l93(vlSelf);
    Vnpc___024root___sequent__TOP__176__PROF__ysyx_22050598_idu_decode__l98(vlSelf);
    Vnpc___024root___sequent__TOP__177__PROF__ysyx_22050598_idu_decode__l107(vlSelf);
    Vnpc___024root___sequent__TOP__178__PROF__ysyx_22050598_idu_decode__l123(vlSelf);
    Vnpc___024root___sequent__TOP__179__PROF__ysyx_22050598_idu_decode__l87(vlSelf);
    Vnpc___024root___sequent__TOP__180__PROF__ysyx_22050598_idu_decode__l104(vlSelf);
    Vnpc___024root___sequent__TOP__181__PROF__ysyx_22050598_idu_decode__l160(vlSelf);
    Vnpc___024root___sequent__TOP__182__PROF__ysyx_22050598_idu_decode__l161(vlSelf);
    Vnpc___024root___sequent__TOP__183__PROF__ysyx_22050598_idu_decode__l162(vlSelf);
    Vnpc___024root___sequent__TOP__184__PROF__ysyx_22050598_idu_decode__l163(vlSelf);
    Vnpc___024root___sequent__TOP__185__PROF__ysyx_22050598_idu_decode__l164(vlSelf);
    Vnpc___024root___sequent__TOP__186__PROF__ysyx_22050598_idu_decode__l165(vlSelf);
    Vnpc___024root___sequent__TOP__187__PROF__ysyx_22050598_idu_decode__l156(vlSelf);
    Vnpc___024root___settle__TOP__295__PROF__ysyx_22050598_regfile__l37(vlSelf);
    Vnpc___024root___sequent__TOP__188__PROF__ysyx_22050598_idu_decode__l223(vlSelf);
    Vnpc___024root___sequent__TOP__189__PROF__ysyx_22050598_idu_decode__l252(vlSelf);
    Vnpc___024root___sequent__TOP__190__PROF__ysyx_22050598_idu_decode__l254(vlSelf);
    Vnpc___024root___sequent__TOP__191__PROF__ysyx_22050598_idu_decode__l253(vlSelf);
    Vnpc___024root___sequent__TOP__192__PROF__ysyx_22050598_exu_alu__l206(vlSelf);
    Vnpc___024root___sequent__TOP__193__PROF__ysyx_22050598_idu_decode__l246(vlSelf);
    Vnpc___024root___sequent__TOP__194__PROF__ysyx_22050598_idu_decode__l256(vlSelf);
    Vnpc___024root___sequent__TOP__195__PROF__ysyx_22050598_idu_decode__l172(vlSelf);
    Vnpc___024root___sequent__TOP__196__PROF__ysyx_22050598_idu_decode__l251(vlSelf);
    Vnpc___024root___sequent__TOP__197__PROF__ysyx_22050598_idu_decode__l168(vlSelf);
    Vnpc___024root___sequent__TOP__198__PROF__ysyx_22050598_idu_decode__l174(vlSelf);
    Vnpc___024root___sequent__TOP__199__PROF__ysyx_22050598_csr__l57(vlSelf);
    Vnpc___024root___sequent__TOP__200__PROF__ysyx_22050598_csr__l47(vlSelf);
    Vnpc___024root___sequent__TOP__201__PROF__ysyx_22050598_idu_decode__l193(vlSelf);
    Vnpc___024root___sequent__TOP__202__PROF__ysyx_22050598_exu_alu__l37(vlSelf);
    Vnpc___024root___sequent__TOP__203__PROF__ysyx_22050598_exu_alu__l145(vlSelf);
    Vnpc___024root___sequent__TOP__204__PROF__ysyx_22050598_idu_decode__l237(vlSelf);
    Vnpc___024root___sequent__TOP__205__PROF__ysyx_22050598_idu_decode__l220(vlSelf);
    Vnpc___024root___sequent__TOP__206__PROF__ysyx_22050598_idu_decode__l206(vlSelf);
    Vnpc___024root___sequent__TOP__207__PROF__ysyx_22050598_idu_decode__l216(vlSelf);
    Vnpc___024root___sequent__TOP__208__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__209__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__210__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__211__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__212__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__213__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__214__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__215__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__216__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__217__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__218__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__219__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__220__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__221__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__222__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___sequent__TOP__223__PROF__ysyx_22050598_regfile__l30(vlSelf);
    Vnpc___024root___settle__TOP__332__PROF__ysyx_22050598_idu_forward__l69(vlSelf);
    Vnpc___024root___settle__TOP__333__PROF__ysyx_22050598_idu_forward__l66(vlSelf);
    Vnpc___024root___settle__TOP__334__PROF__ysyx_22050598_idu_forward__l62(vlSelf);
    Vnpc___024root___settle__TOP__335__PROF__ysyx_22050598_exu_alu__l228(vlSelf);
    Vnpc___024root___settle__TOP__336__PROF__ysyx_22050598_exu_alu__l209(vlSelf);
    Vnpc___024root___settle__TOP__337__PROF__ysyx_22050598_csr__l41(vlSelf);
    Vnpc___024root___settle__TOP__338__PROF__ysyx_22050598_csr__l42(vlSelf);
    Vnpc___024root___settle__TOP__339__PROF__ysyx_22050598_csr__l43(vlSelf);
    Vnpc___024root___settle__TOP__340__PROF__ysyx_22050598_csr__l44(vlSelf);
    Vnpc___024root___settle__TOP__341__PROF__ysyx_22050598_exu_alu__l43(vlSelf);
    Vnpc___024root___settle__TOP__342__PROF__ysyx_22050598_exu_alu__l92(vlSelf);
    Vnpc___024root___settle__TOP__343__PROF__ysyx_22050598_exu_alu__l90(vlSelf);
    Vnpc___024root___settle__TOP__344__PROF__ysyx_22050598_exu_alu__l91(vlSelf);
    Vnpc___024root___settle__TOP__345__PROF__ysyx_22050598_exu_alu__l89(vlSelf);
    Vnpc___024root___settle__TOP__346__PROF__ysyx_22050598_exu_alu__l146(vlSelf);
    Vnpc___024root___settle__TOP__347__PROF__ysyx_22050598_csr__l49(vlSelf);
    Vnpc___024root___settle__TOP__348__PROF__ysyx_22050598_csr__l63(vlSelf);
    Vnpc___024root___settle__TOP__349__PROF__ysyx_22050598_exu_alu__l46(vlSelf);
    Vnpc___024root___settle__TOP__350__PROF__ysyx_22050598_exu_alu__l112(vlSelf);
    Vnpc___024root___settle__TOP__351__PROF__ysyx_22050598_exu_alu__l129(vlSelf);
    Vnpc___024root___settle__TOP__352__PROF__ysyx_22050598_exu_alu__l95(vlSelf);
    Vnpc___024root___settle__TOP__353__PROF__ysyx_22050598_exu_alu__l117(vlSelf);
    Vnpc___024root___settle__TOP__354__PROF__ysyx_22050598_exu_alu__l134(vlSelf);
    Vnpc___024root___settle__TOP__355__PROF__ysyx_22050598_exu_alu__l111(vlSelf);
    Vnpc___024root___settle__TOP__356__PROF__ysyx_22050598_exu_alu__l128(vlSelf);
    Vnpc___024root___settle__TOP__357__PROF__ysyx_22050598_exu_alu__l94(vlSelf);
    Vnpc___024root___settle__TOP__358__PROF__ysyx_22050598_exu_alu__l116(vlSelf);
    Vnpc___024root___settle__TOP__359__PROF__ysyx_22050598_exu_alu__l133(vlSelf);
    Vnpc___024root___settle__TOP__360__PROF__ysyx_22050598_exu_alu__l102(vlSelf);
    Vnpc___024root___settle__TOP__361__PROF__ysyx_22050598_exu_alu__l150(vlSelf);
    Vnpc___024root___settle__TOP__362__PROF__ysyx_22050598_exu_alu__l151(vlSelf);
    Vnpc___024root___settle__TOP__363__PROF__ysyx_22050598_csr__l48(vlSelf);
    Vnpc___024root___settle__TOP__364__PROF__ysyx_22050598_csr__l95(vlSelf);
    Vnpc___024root___settle__TOP__365__PROF__ysyx_22050598_exu_alu__l49(vlSelf);
    Vnpc___024root___settle__TOP__366__PROF__ysyx_22050598_exu_alu__l97(vlSelf);
    Vnpc___024root___settle__TOP__367__PROF__ysyx_22050598_exu_alu__l118(vlSelf);
    Vnpc___024root___settle__TOP__368__PROF__ysyx_22050598_exu_alu__l119(vlSelf);
    Vnpc___024root___settle__TOP__369__PROF__ysyx_22050598_exu_alu__l135(vlSelf);
    Vnpc___024root___settle__TOP__370__PROF__ysyx_22050598_exu_alu__l136(vlSelf);
    Vnpc___024root___settle__TOP__371__PROF__ysyx_22050598_exu_alu__l157(vlSelf);
    Vnpc___024root___settle__TOP__372__PROF__ysyx_22050598_csr__l68(vlSelf);
    Vnpc___024root___settle__TOP__373__PROF__ysyx_22050598_IFU__l11(vlSelf);
    Vnpc___024root___settle__TOP__374__PROF__ysyx_22050598_exu_alu__l159(vlSelf);
    Vnpc___024root___settle__TOP__375__PROF__ysyx_22050598_exu_alu__l160(vlSelf);
    Vnpc___024root___settle__TOP__376__PROF__ysyx_22050598_exu_alu__l214(vlSelf);
    Vnpc___024root___settle__TOP__377__PROF__ysyx_22050598_exu_rd_mux__l8(vlSelf);
    Vnpc___024root___settle__TOP__378__PROF__ysyx_22050598_lsu__l154(vlSelf);
    Vnpc___024root___settle__TOP__379__PROF__ysyx_22050598_lsu__l149(vlSelf);
    Vnpc___024root___settle__TOP__380__PROF__npc__l222(vlSelf);
    Vnpc___024root___settle__TOP__381__PROF__npc__l229(vlSelf);
}

void Vnpc___024root___final(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___final\n"); );
}

void Vnpc___024root___ctor_var_reset(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc_now = VL_RAND_RESET_Q(64);
    vlSelf->fdata = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__id_ex_w_reg_en = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__id_ex_inst_is_srax = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__id_ex_inst_divrem_bus = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__id_ex_inst_mul_bus = VL_RAND_RESET_I(5);
    vlSelf->npc__DOT__id_ex_csr_bus = VL_RAND_RESET_I(6);
    vlSelf->npc__DOT__id_ex_branch_bus = VL_RAND_RESET_I(6);
    vlSelf->npc__DOT__id_ex_unsigned_bus = VL_RAND_RESET_I(2);
    vlSelf->npc__DOT__read_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__wb_rd_en = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__wb_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->npc__DOT__wb_data = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__rd_data = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__alu_op_a = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__alu_op_b = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__ex_bs_data = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__ex_load_en_o = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__ex_store_data_o = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__csr_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__alu_rd_data_o = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__sign_reg__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode = VL_RAND_RESET_I(10);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type = VL_RAND_RESET_I(6);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a = VL_RAND_RESET_I(3);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b = VL_RAND_RESET_I(2);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type = VL_RAND_RESET_I(2);
    vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b);
    VL_RAND_RESET_W(65, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev = VL_RAND_RESET_I(32);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__read_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1 = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2 = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_and = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mstatus_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mtvec_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mepc_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mcause_dfflr__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_IFU__DOT__pmem_read__0__rdata = 0;
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__2__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__3__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse32__4__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_npc__DOT__u_ysyx_22050598_exu_alu__DOT__reverse64__5__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_npc__DOT__u_ysyx_22050598_lsu__DOT__pmem_read_test__6__rdata = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
