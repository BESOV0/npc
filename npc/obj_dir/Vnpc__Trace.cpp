// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


void Vnpc___024root__traceChgSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep);

void Vnpc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vnpc___024root* const __restrict vlSelf = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vnpc___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vnpc___024root__traceChgSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp67;
    VlWide<4>/*127:0*/ __Vtemp68;
    VlWide<4>/*127:0*/ __Vtemp69;
    VlWide<4>/*127:0*/ __Vtemp70;
    VlWide<4>/*127:0*/ __Vtemp71;
    VlWide<4>/*127:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp73;
    VlWide<3>/*95:0*/ __Vtemp74;
    VlWide<3>/*95:0*/ __Vtemp77;
    VlWide<4>/*127:0*/ __Vtemp78;
    VlWide<4>/*127:0*/ __Vtemp79;
    VlWide<4>/*127:0*/ __Vtemp80;
    VlWide<4>/*127:0*/ __Vtemp81;
    VlWide<4>/*127:0*/ __Vtemp82;
    VlWide<4>/*127:0*/ __Vtemp83;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode),10);
            tracep->chgCData(oldp+1,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a),3);
            tracep->chgCData(oldp+2,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b),2);
            tracep->chgQData(oldp+3,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm),64);
            tracep->chgBit(oldp+5,(vlSelf->npc__DOT__id_ex_w_reg_en));
            tracep->chgBit(oldp+6,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak));
            tracep->chgBit(oldp+7,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall));
            tracep->chgBit(oldp+8,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr));
            tracep->chgBit(oldp+9,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en));
            tracep->chgBit(oldp+10,(vlSelf->npc__DOT__id_ex_inst_is_srax));
            tracep->chgBit(oldp+11,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw))));
            tracep->chgBit(oldp+12,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret));
            tracep->chgBit(oldp+13,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri));
            tracep->chgCData(oldp+14,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type),2);
            tracep->chgBit(oldp+15,(vlSelf->npc__DOT__id_ex_inst_divrem_bus));
            tracep->chgCData(oldp+16,(vlSelf->npc__DOT__id_ex_inst_mul_bus),5);
            tracep->chgCData(oldp+17,(vlSelf->npc__DOT__id_ex_csr_bus),6);
            tracep->chgCData(oldp+18,(vlSelf->npc__DOT__id_ex_branch_bus),6);
            tracep->chgCData(oldp+19,(vlSelf->npc__DOT__id_ex_unsigned_bus),2);
            tracep->chgBit(oldp+20,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst));
            tracep->chgBit(oldp+21,(vlSelf->npc__DOT__ex_load_en_o));
            tracep->chgQData(oldp+22,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r),64);
            tracep->chgQData(oldp+24,((0xfffffffffffffff8ULL 
                                       & vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r)),64);
            tracep->chgQData(oldp+26,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__rdata),64);
            tracep->chgBit(oldp+28,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__sign_reg__DOT__qout_r));
            tracep->chgBit(oldp+29,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu));
            tracep->chgBit(oldp+30,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai));
            tracep->chgBit(oldp+31,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw));
            tracep->chgBit(oldp+32,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw));
            tracep->chgBit(oldp+33,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw));
            tracep->chgBit(oldp+34,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu));
            tracep->chgBit(oldp+35,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra));
            tracep->chgBit(oldp+36,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div));
            tracep->chgBit(oldp+37,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul));
            tracep->chgBit(oldp+38,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh));
            tracep->chgBit(oldp+39,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu));
            tracep->chgBit(oldp+40,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu));
            tracep->chgBit(oldp+41,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem));
            tracep->chgBit(oldp+42,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw));
            tracep->chgBit(oldp+43,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw));
            tracep->chgBit(oldp+44,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw));
            tracep->chgBit(oldp+45,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw));
            tracep->chgBit(oldp+46,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw));
            tracep->chgBit(oldp+47,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw));
            tracep->chgBit(oldp+48,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu));
            tracep->chgBit(oldp+49,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu));
            tracep->chgBit(oldp+50,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu));
            tracep->chgBit(oldp+51,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu));
            tracep->chgBit(oldp+52,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw));
            tracep->chgBit(oldp+53,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs));
            tracep->chgBit(oldp+54,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc));
            tracep->chgBit(oldp+55,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi));
            tracep->chgBit(oldp+56,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi));
            tracep->chgBit(oldp+57,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci));
            tracep->chgBit(oldp+58,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc))));
            tracep->chgBit(oldp+59,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc)) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))));
            tracep->chgBit(oldp+60,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu))));
            tracep->chgCData(oldp+61,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type),6);
            tracep->chgIData(oldp+62,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen),32);
            tracep->chgBit(oldp+63,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 1U))));
            tracep->chgQData(oldp+64,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+66,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 2U))));
            tracep->chgQData(oldp+67,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+69,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 3U))));
            tracep->chgQData(oldp+70,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+72,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 4U))));
            tracep->chgQData(oldp+73,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+75,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 5U))));
            tracep->chgQData(oldp+76,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+78,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 6U))));
            tracep->chgQData(oldp+79,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+81,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 7U))));
            tracep->chgQData(oldp+82,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+84,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 8U))));
            tracep->chgQData(oldp+85,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+87,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 9U))));
            tracep->chgQData(oldp+88,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+90,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 0xaU))));
            tracep->chgQData(oldp+91,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+93,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 0xbU))));
            tracep->chgQData(oldp+94,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+96,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 0xcU))));
            tracep->chgQData(oldp+97,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+99,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                           >> 0xdU))));
            tracep->chgQData(oldp+100,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+102,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0xeU))));
            tracep->chgQData(oldp+103,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+105,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0xfU))));
            tracep->chgQData(oldp+106,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+108,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x10U))));
            tracep->chgQData(oldp+109,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+111,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x11U))));
            tracep->chgQData(oldp+112,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+114,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x12U))));
            tracep->chgQData(oldp+115,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+117,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x13U))));
            tracep->chgQData(oldp+118,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+120,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x14U))));
            tracep->chgQData(oldp+121,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+123,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x15U))));
            tracep->chgQData(oldp+124,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+126,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x16U))));
            tracep->chgQData(oldp+127,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+129,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x17U))));
            tracep->chgQData(oldp+130,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+132,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x18U))));
            tracep->chgQData(oldp+133,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+135,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x19U))));
            tracep->chgQData(oldp+136,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+138,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1aU))));
            tracep->chgQData(oldp+139,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+141,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1bU))));
            tracep->chgQData(oldp+142,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+144,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1cU))));
            tracep->chgQData(oldp+145,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+147,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1dU))));
            tracep->chgQData(oldp+148,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+150,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                            >> 0x1eU))));
            tracep->chgQData(oldp+151,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+153,((vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                      >> 0x1fU)));
            tracep->chgQData(oldp+154,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+156,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub));
            tracep->chgBit(oldp+157,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                            >> 8U))));
            tracep->chgBit(oldp+158,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift));
            tracep->chgBit(oldp+159,((0U != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))));
            tracep->chgBit(oldp+160,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en));
            tracep->chgQData(oldp+161,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mstatus_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+163,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mtvec_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+165,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mepc_dfflr__DOT__qout_r),64);
            tracep->chgQData(oldp+167,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mcause_dfflr__DOT__qout_r),64);
            tracep->chgBit(oldp+169,((0U != (IData)(vlSelf->npc__DOT__id_ex_csr_bus))));
            tracep->chgBit(oldp+170,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or));
            tracep->chgBit(oldp+171,((IData)((0U != 
                                              (0x24U 
                                               & (IData)(vlSelf->npc__DOT__id_ex_csr_bus))))));
            tracep->chgBit(oldp+172,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_and));
            tracep->chgBit(oldp+173,((1U & (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus))));
            tracep->chgCData(oldp+174,(((((1U & (- (IData)(
                                                           (0U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                          | (2U & (- (IData)(
                                                             (1U 
                                                              == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))) 
                                         | (4U & (- (IData)(
                                                            (2U 
                                                             == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))) 
                                        | (8U & (- (IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))))),8);
            tracep->chgBit(oldp+175,((0U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))));
            tracep->chgBit(oldp+176,((1U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))));
            tracep->chgBit(oldp+177,((2U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))));
            tracep->chgBit(oldp+178,((3U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+179,((1U & ((((((((
                                                   (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                     >> 5U) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                                                   | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                       >> 4U) 
                                                      & (0U 
                                                         != 
                                                         (((QData)((IData)(
                                                                           vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                                                  | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                      >> 3U) 
                                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                                 | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                     >> 2U) 
                                                    & ((~ 
                                                        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                       | (~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                                | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                    >> 1U) 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                               | ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                  & ((~ 
                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                     | (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)) 
                                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret)) 
                                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))));
            tracep->chgBit(oldp+180,((1U & (((((((((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                   >> 5U) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                                                 | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                     >> 4U) 
                                                    & (0U 
                                                       != 
                                                       (((QData)((IData)(
                                                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                                                | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                    >> 3U) 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                               | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                   >> 2U) 
                                                  & ((~ 
                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                     | (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                              | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                  >> 1U) 
                                                 & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                             | ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                & ((~ 
                                                    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                   | (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))));
            tracep->chgQData(oldp+181,((((((- (QData)((IData)(
                                                              (0U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(
                                                                              (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                               >> 7U)) 
                                                                      & (~ (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus))))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                             & (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0xfU)) 
                                                                        & (~ (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus))))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))))) 
                                         | ((- (QData)((IData)(
                                                               (2U 
                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                            & (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0x1fU)) 
                                                                               & (~ (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus)))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))) 
                                        | ((- (QData)((IData)(
                                                              (3U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))),64);
            __Vtemp57[0U] = (IData)(vlSelf->npc__DOT__alu_op_a);
            __Vtemp57[1U] = (IData)((vlSelf->npc__DOT__alu_op_a 
                                     >> 0x20U));
            __Vtemp57[2U] = (1U & ((~ ((IData)(vlSelf->npc__DOT__id_ex_unsigned_bus) 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->npc__DOT__alu_op_a 
                                                          >> 0x3fU))));
            tracep->chgWData(oldp+183,(__Vtemp57),65);
            __Vtemp58[0U] = (IData)(vlSelf->npc__DOT__alu_op_b);
            __Vtemp58[1U] = (IData)((vlSelf->npc__DOT__alu_op_b 
                                     >> 0x20U));
            __Vtemp58[2U] = (1U & ((~ ((IData)(vlSelf->npc__DOT__id_ex_unsigned_bus) 
                                       >> 1U)) & (IData)(
                                                         (vlSelf->npc__DOT__alu_op_b 
                                                          >> 0x3fU))));
            tracep->chgWData(oldp+186,(__Vtemp58),65);
            __Vtemp61[0U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                             & (IData)(vlSelf->npc__DOT__alu_op_a));
            __Vtemp61[1U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                             & (IData)((vlSelf->npc__DOT__alu_op_a 
                                        >> 0x20U)));
            __Vtemp61[2U] = (1U & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                                   & ((~ ((IData)(vlSelf->npc__DOT__id_ex_unsigned_bus) 
                                          >> 1U)) & (IData)(
                                                            (vlSelf->npc__DOT__alu_op_a 
                                                             >> 0x3fU)))));
            tracep->chgWData(oldp+189,(__Vtemp61),65);
            if ((0x100U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))) {
                __Vtemp66[0U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U]);
                __Vtemp66[1U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U]);
                __Vtemp66[2U] = (1U & (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]));
            } else {
                __Vtemp66[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U];
                __Vtemp66[1U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U];
                __Vtemp66[2U] = (1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]);
            }
            tracep->chgWData(oldp+192,(__Vtemp66),65);
            tracep->chgIData(oldp+195,(((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                       >> 7U)))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op)),32);
            tracep->chgIData(oldp+196,(((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                       >> 7U)))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op)),32);
            VL_EXTEND_WQ(128,64, __Vtemp67, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
            VL_EXTEND_WQ(128,64, __Vtemp68, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
            VL_MUL_W(4, __Vtemp69, __Vtemp67, __Vtemp68);
            VL_EXTEND_WQ(128,64, __Vtemp70, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
            VL_EXTEND_WQ(128,64, __Vtemp71, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
            VL_MUL_W(4, __Vtemp72, __Vtemp70, __Vtemp71);
            tracep->chgQData(oldp+197,(((((((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                                   >> 4U))))) 
                                            & (((QData)((IData)(
                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[0U])))) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                                     >> 3U))))) 
                                              & (((QData)((IData)(
                                                                  vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[2U]))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                                    >> 2U))))) 
                                             & (((QData)((IData)(
                                                                 __Vtemp69[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp69[2U]))))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                                   >> 1U))))) 
                                            & (((QData)((IData)(
                                                                __Vtemp72[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp72[2U]))))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                                              >> 0x1fU)))))) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res)))))))),64);
            tracep->chgQData(oldp+199,((((((- (QData)((IData)(
                                                              ((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst)))))) 
                                           & VL_DIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                                                    & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))))) 
                                             & VL_DIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b))) 
                                         | ((- (QData)((IData)(
                                                               ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                            & (((- (QData)((IData)(
                                                                   (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                                    >> 0x1fU)))) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res)))))) 
                                        | ((- (QData)((IData)(
                                                              ((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                           & (((- (QData)((IData)(
                                                                  (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                                   >> 0x1fU)))) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res))))))),64);
            tracep->chgQData(oldp+201,((((((- (QData)((IData)(
                                                              ((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                                               & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst)))))) 
                                           & VL_MODDIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 & ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                                                    & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))))) 
                                             & VL_MODDIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b))) 
                                         | ((- (QData)((IData)(
                                                               ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                            & (((- (QData)((IData)(
                                                                   (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                                    >> 0x1fU)))) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (0x7fffffffU 
                                                                  & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod)))))) 
                                        | ((- (QData)((IData)(
                                                              ((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                           & (((- (QData)((IData)(
                                                                  (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                                   >> 0x1fU)))) 
                                               << 0x1fU) 
                                              | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod))))))),64);
            tracep->chgCData(oldp+203,((0x3fU & ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))),6);
            tracep->chgCData(oldp+204,((0x1fU & ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                                 & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))),5);
            __Vtemp73[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
            __Vtemp73[1U] = (IData)((0x1ffffffffULL 
                                     & (- (QData)((IData)(
                                                          ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                              >> 0x1fU)))))));
            __Vtemp73[2U] = (IData)(((0x1ffffffffULL 
                                      & (- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                               >> 0x1fU)))))) 
                                     >> 0x20U));
            tracep->chgWData(oldp+205,(__Vtemp73),65);
            __Vtemp74[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
            __Vtemp74[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                     >> 0x20U));
            __Vtemp74[2U] = ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                             & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                        >> 0x3fU)));
            tracep->chgWData(oldp+208,(__Vtemp74),65);
            if (vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst) {
                __Vtemp77[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
                __Vtemp77[1U] = (IData)((0x1ffffffffULL 
                                         & (- (QData)((IData)(
                                                              ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                               & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                  >> 0x1fU)))))));
                __Vtemp77[2U] = (IData)(((0x1ffffffffULL 
                                          & (- (QData)((IData)(
                                                               ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                                & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                   >> 0x1fU)))))) 
                                         >> 0x20U));
            } else {
                __Vtemp77[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
                __Vtemp77[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                         >> 0x20U));
                __Vtemp77[2U] = ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                 & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                            >> 0x3fU)));
            }
            tracep->chgWData(oldp+211,(__Vtemp77),65);
            tracep->chgCData(oldp+214,((0x3fU & ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw) 
                                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw))
                                                  ? 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                                     & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))
                                                  : 
                                                 ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                                  & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))))))),6);
            tracep->chgQData(oldp+215,(((((- (QData)((IData)(
                                                             (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                               >> 4U) 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev)))) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                                    >> 4U) 
                                                                   & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))))) 
                                            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev)) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                                  >> 3U))))) 
                                           & (((QData)((IData)(
                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U])))))),64);
            tracep->chgQData(oldp+217,(((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                               >> 2U))))) 
                                        & vlSelf->npc__DOT__alu_op_a)),64);
            tracep->chgQData(oldp+219,(((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                               >> 2U))))) 
                                        & vlSelf->npc__DOT__alu_op_b)),64);
            tracep->chgQData(oldp+221,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                                >> 2U))))) 
                                         & vlSelf->npc__DOT__alu_op_a) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                                  >> 2U))))) 
                                           & vlSelf->npc__DOT__alu_op_b))),64);
            tracep->chgQData(oldp+223,(((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                               >> 1U))))) 
                                        & vlSelf->npc__DOT__alu_op_a)),64);
            tracep->chgQData(oldp+225,(((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                               >> 1U))))) 
                                        & vlSelf->npc__DOT__alu_op_b)),64);
            tracep->chgQData(oldp+227,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                                >> 1U))))) 
                                         & vlSelf->npc__DOT__alu_op_a) 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                                  >> 1U))))) 
                                           & vlSelf->npc__DOT__alu_op_b))),64);
            tracep->chgQData(oldp+229,(((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                                        & vlSelf->npc__DOT__alu_op_a)),64);
            tracep->chgQData(oldp+231,(((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                                        & vlSelf->npc__DOT__alu_op_b)),64);
            tracep->chgQData(oldp+233,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                                         & vlSelf->npc__DOT__alu_op_a) 
                                        ^ ((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                                           & vlSelf->npc__DOT__alu_op_b))),64);
            tracep->chgBit(oldp+235,((1U & (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                             >> 5U) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (((QData)((IData)(
                                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))));
            tracep->chgBit(oldp+236,((((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                       >> 4U) & (0U 
                                                 != 
                                                 (((QData)((IData)(
                                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))));
            tracep->chgBit(oldp+237,((1U & (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                             >> 3U) 
                                            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))));
            tracep->chgBit(oldp+238,((1U & (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                             >> 2U) 
                                            & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (((QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))))));
            tracep->chgBit(oldp+239,((1U & (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                             >> 1U) 
                                            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))));
            tracep->chgBit(oldp+240,((1U & ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                            & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (((QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))))));
            tracep->chgBit(oldp+241,((1U & ((((((((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                  >> 5U) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                                                | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                    >> 4U) 
                                                   & (0U 
                                                      != 
                                                      (((QData)((IData)(
                                                                        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                                               | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                   >> 3U) 
                                                  & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                              | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                  >> 2U) 
                                                 & ((~ 
                                                     vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                    | (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                             | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                 >> 1U) 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                            | ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                               & ((~ 
                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                  | (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))))));
            tracep->chgQData(oldp+242,((((- (QData)((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                         & vlSelf->npc__DOT__ex_bs_data) 
                                        | (4ULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))))),64);
            tracep->chgQData(oldp+244,(((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                                         & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena)))) 
                                        | (0xbULL & 
                                           (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))))),64);
            tracep->chgBit(oldp+246,(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))));
            tracep->chgBit(oldp+247,(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))));
            tracep->chgQData(oldp+248,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                                                >> 5U))))) 
                                         & vlSelf->npc__DOT__alu_op_a) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                                                  >> 2U))))) 
                                           & vlSelf->npc__DOT__ex_bs_data))),64);
            tracep->chgQData(oldp+250,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__read_csr_data 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_and))))),64);
            tracep->chgQData(oldp+252,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                                                >> 3U))))) 
                                         & vlSelf->npc__DOT__alu_op_a) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->npc__DOT__id_ex_csr_bus))))) 
                                           & vlSelf->npc__DOT__ex_bs_data))),64);
            tracep->chgQData(oldp+254,((((((- (QData)((IData)(
                                                              (0U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                           & (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                        << 0x20U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                           << 0x18U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                              << 0x10U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                                 << 8U) 
                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))))))))))) 
                                          | ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                             & (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                    << 0x20U) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->npc__DOT__ex_store_data_o))))))))) 
                                         | ((- (QData)((IData)(
                                                               (2U 
                                                                == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                            & (((QData)((IData)(vlSelf->npc__DOT__ex_store_data_o)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->npc__DOT__ex_store_data_o))))) 
                                        | ((- (QData)((IData)(
                                                              (3U 
                                                               == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                           & vlSelf->npc__DOT__ex_store_data_o))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+256,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                       [0xaU]),64);
            tracep->chgQData(oldp+258,(vlSelf->npc__DOT__read_rs2_data),64);
            tracep->chgQData(oldp+260,(vlSelf->npc__DOT__rd_data),64);
            tracep->chgQData(oldp+262,(vlSelf->npc__DOT__alu_op_a),64);
            tracep->chgQData(oldp+264,(vlSelf->npc__DOT__alu_op_b),64);
            tracep->chgQData(oldp+266,(vlSelf->npc__DOT__ex_bs_data),64);
            tracep->chgQData(oldp+268,(vlSelf->npc__DOT__ex_store_data_o),64);
            tracep->chgQData(oldp+270,(vlSelf->npc__DOT__csr_rd_data),64);
            tracep->chgQData(oldp+272,(vlSelf->npc__DOT__alu_rd_data_o),64);
            tracep->chgQData(oldp+274,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0]),64);
            tracep->chgQData(oldp+276,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[1]),64);
            tracep->chgQData(oldp+278,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[2]),64);
            tracep->chgQData(oldp+280,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[3]),64);
            tracep->chgQData(oldp+282,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[4]),64);
            tracep->chgQData(oldp+284,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[5]),64);
            tracep->chgQData(oldp+286,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[6]),64);
            tracep->chgQData(oldp+288,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[7]),64);
            tracep->chgQData(oldp+290,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[8]),64);
            tracep->chgQData(oldp+292,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[9]),64);
            tracep->chgQData(oldp+294,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[10]),64);
            tracep->chgQData(oldp+296,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[11]),64);
            tracep->chgQData(oldp+298,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[12]),64);
            tracep->chgQData(oldp+300,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[13]),64);
            tracep->chgQData(oldp+302,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[14]),64);
            tracep->chgQData(oldp+304,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[15]),64);
            tracep->chgQData(oldp+306,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[16]),64);
            tracep->chgQData(oldp+308,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[17]),64);
            tracep->chgQData(oldp+310,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[18]),64);
            tracep->chgQData(oldp+312,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[19]),64);
            tracep->chgQData(oldp+314,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[20]),64);
            tracep->chgQData(oldp+316,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[21]),64);
            tracep->chgQData(oldp+318,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[22]),64);
            tracep->chgQData(oldp+320,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[23]),64);
            tracep->chgQData(oldp+322,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[24]),64);
            tracep->chgQData(oldp+324,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[25]),64);
            tracep->chgQData(oldp+326,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[26]),64);
            tracep->chgQData(oldp+328,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[27]),64);
            tracep->chgQData(oldp+330,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[28]),64);
            tracep->chgQData(oldp+332,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[29]),64);
            tracep->chgQData(oldp+334,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[30]),64);
            tracep->chgQData(oldp+336,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[31]),64);
            tracep->chgWData(oldp+338,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b),65);
            tracep->chgWData(oldp+341,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data),65);
            tracep->chgQData(oldp+344,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))),64);
            tracep->chgQData(oldp+346,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result),64);
            tracep->chgIData(oldp+348,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op),32);
            tracep->chgIData(oldp+349,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op),32);
            tracep->chgQData(oldp+350,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op),64);
            tracep->chgQData(oldp+352,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op),64);
            tracep->chgQData(oldp+354,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a),64);
            tracep->chgQData(oldp+356,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b),64);
            VL_EXTEND_WQ(128,64, __Vtemp78, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
            VL_EXTEND_WQ(128,64, __Vtemp79, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
            VL_MUL_W(4, __Vtemp80, __Vtemp78, __Vtemp79);
            tracep->chgWData(oldp+358,(__Vtemp80),128);
            tracep->chgWData(oldp+362,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res),128);
            VL_EXTEND_WQ(128,64, __Vtemp81, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
            VL_EXTEND_WQ(128,64, __Vtemp82, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
            VL_MUL_W(4, __Vtemp83, __Vtemp81, __Vtemp82);
            tracep->chgWData(oldp+366,(__Vtemp83),128);
            tracep->chgQData(oldp+370,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res),64);
            tracep->chgQData(oldp+372,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                                        >> 0x1fU)))))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res)))))),64);
            tracep->chgQData(oldp+374,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a),64);
            tracep->chgQData(oldp+376,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b),64);
            tracep->chgQData(oldp+378,(VL_DIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)),64);
            tracep->chgQData(oldp+380,(VL_DIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)),64);
            tracep->chgIData(oldp+382,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a),32);
            tracep->chgIData(oldp+383,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b),32);
            tracep->chgIData(oldp+384,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res),32);
            tracep->chgIData(oldp+385,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res),32);
            tracep->chgQData(oldp+386,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res))))),64);
            tracep->chgQData(oldp+388,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res))))),64);
            tracep->chgQData(oldp+390,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a),64);
            tracep->chgQData(oldp+392,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b),64);
            tracep->chgQData(oldp+394,(VL_MODDIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)),64);
            tracep->chgQData(oldp+396,(VL_MODDIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)),64);
            tracep->chgIData(oldp+398,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a),32);
            tracep->chgIData(oldp+399,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b),32);
            tracep->chgIData(oldp+400,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod),32);
            tracep->chgIData(oldp+401,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod),32);
            tracep->chgQData(oldp+402,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod))))),64);
            tracep->chgQData(oldp+404,((((- (QData)((IData)(
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                             >> 0x1fU)))) 
                                         << 0x1fU) 
                                        | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod))))),64);
            tracep->chgQData(oldp+406,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a),64);
            tracep->chgQData(oldp+408,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64),64);
            tracep->chgIData(oldp+410,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32),32);
            tracep->chgWData(oldp+411,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result),65);
            tracep->chgIData(oldp+414,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev),32);
            tracep->chgQData(oldp+415,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev),64);
            tracep->chgBit(oldp+417,((1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])));
            tracep->chgBit(oldp+418,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (((QData)((IData)(
                                                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))));
            tracep->chgQData(oldp+419,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc),64);
            tracep->chgQData(oldp+421,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data),64);
            tracep->chgQData(oldp+423,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena))))),64);
            tracep->chgQData(oldp+425,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena))))),64);
            tracep->chgBit(oldp+427,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena));
            tracep->chgBit(oldp+428,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena));
            tracep->chgQData(oldp+429,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__read_csr_data),64);
            tracep->chgQData(oldp+431,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data),64);
            tracep->chgBit(oldp+433,((0x300U == (0xfffU 
                                                 & (IData)(vlSelf->npc__DOT__alu_op_b)))));
            tracep->chgBit(oldp+434,((0x305U == (0xfffU 
                                                 & (IData)(vlSelf->npc__DOT__alu_op_b)))));
            tracep->chgBit(oldp+435,((0x341U == (0xfffU 
                                                 & (IData)(vlSelf->npc__DOT__alu_op_b)))));
            tracep->chgBit(oldp+436,((0x342U == (0xfffU 
                                                 & (IData)(vlSelf->npc__DOT__alu_op_b)))));
            tracep->chgBit(oldp+437,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena));
            tracep->chgBit(oldp+438,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena));
            tracep->chgQData(oldp+439,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1),64);
            tracep->chgQData(oldp+441,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2),64);
            tracep->chgQData(oldp+443,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1 
                                        | vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2)),64);
            tracep->chgQData(oldp+445,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1 
                                        & (~ vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2))),64);
            tracep->chgQData(oldp+447,(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata),64);
        }
        tracep->chgBit(oldp+449,(vlSelf->clk));
        tracep->chgBit(oldp+450,(vlSelf->rst));
        tracep->chgIData(oldp+451,(vlSelf->inst),32);
        tracep->chgQData(oldp+452,(vlSelf->pc_now),64);
        tracep->chgQData(oldp+454,(vlSelf->fdata),64);
        tracep->chgQData(oldp+456,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))
                                     ? vlSelf->npc__DOT__csr_rd_data
                                     : (((- (QData)((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                        | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                           & (((- (QData)((IData)(
                                                                  (0x6fU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->inst))))) 
                                               & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                              | (0xfffffffffffffffeULL 
                                                 & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr))) 
                                                    & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result))))))),64);
        tracep->chgCData(oldp+458,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+459,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+460,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgBit(oldp+461,((0x6fU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+462,((0x23U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+463,(((3U == (0x7fU & vlSelf->inst)) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->inst)))));
        tracep->chgBit(oldp+464,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                  & (vlSelf->inst >> 0x19U))));
        tracep->chgQData(oldp+465,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0xfU))]),64);
        tracep->chgQData(oldp+467,((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data 
                                    & (- (QData)((IData)(
                                                         ((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                                                          | (0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->inst)))))))),64);
        tracep->chgQData(oldp+469,((((- (QData)((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                    | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                       & (((- (QData)((IData)(
                                                              (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                          | (0xfffffffffffffffeULL 
                                             & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr))) 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result)))))),64);
        tracep->chgQData(oldp+471,(((1U & (((((((((
                                                   ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                    >> 5U) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                                                  | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                      >> 4U) 
                                                     & (0U 
                                                        != 
                                                        (((QData)((IData)(
                                                                          vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                                                 | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                     >> 3U) 
                                                    & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                                | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                    >> 2U) 
                                                   & ((~ 
                                                       vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                      | (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                               | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                   >> 1U) 
                                                  & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                              | ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                 & ((~ 
                                                     vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                    | (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)) 
                                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret)) 
                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))
                                     ? (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret) 
                                         | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))
                                         ? vlSelf->npc__DOT__csr_rd_data
                                         : (((- (QData)((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                             & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                            | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                               & (((- (QData)((IData)(
                                                                      (0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->inst))))) 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                                  | (0xfffffffffffffffeULL 
                                                     & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr))) 
                                                        & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result))))))
                                     : (4ULL + vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r))),64);
        tracep->chgCData(oldp+473,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgBit(oldp+474,((0U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+475,((1U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+476,((2U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+477,((3U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+478,((4U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+479,((5U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+480,((6U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+481,((7U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgCData(oldp+482,((vlSelf->inst >> 0x19U)),7);
        tracep->chgBit(oldp+483,((0U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+484,((0x20U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+485,((1U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+486,((4U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+487,((8U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+488,((0x10U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+489,((0x18U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+490,((0U == (0x1fU & (vlSelf->inst 
                                                  >> 0xfU)))));
        tracep->chgBit(oldp+491,((0U == (0x1fU & (vlSelf->inst 
                                                  >> 0x14U)))));
        tracep->chgBit(oldp+492,((1U == (0x1fU & (vlSelf->inst 
                                                  >> 0x14U)))));
        tracep->chgBit(oldp+493,((2U == (0x1fU & (vlSelf->inst 
                                                  >> 0x14U)))));
        tracep->chgBit(oldp+494,((0U == (0x1fU & (vlSelf->inst 
                                                  >> 7U)))));
        tracep->chgCData(oldp+495,((0x7fU & vlSelf->inst)),7);
        tracep->chgBit(oldp+496,((0x13U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+497,((0x33U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+498,((0x1bU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+499,((0x3bU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+500,((0x17U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+501,((0x63U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+502,((0x67U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+503,((3U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+504,((0x37U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+505,((0x73U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+506,((0x10U == (vlSelf->inst 
                                            >> 0x1aU))));
        tracep->chgBit(oldp+507,((0U == (vlSelf->inst 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+508,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+509,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+510,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+511,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+512,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+513,(((IData)((0x1013U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x1aU)))));
        tracep->chgBit(oldp+514,(((IData)((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x1aU)))));
        tracep->chgBit(oldp+515,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+516,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+517,(((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->inst))) 
                                  & (0x20U == (vlSelf->inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+518,(((IData)((0x1033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+519,(((IData)((0x2033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+520,(((IData)((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+521,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+522,(((IData)((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+523,(((IData)((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+524,(((IData)((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (1U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+525,(((IData)((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (1U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+526,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->inst))) 
                                  & (0U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+527,(((IData)((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->inst))) 
                                  & (0x20U == (vlSelf->inst 
                                               >> 0x19U)))));
        tracep->chgBit(oldp+528,(((IData)((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (1U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+529,(((IData)((0x703bU 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                  & (1U == (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->chgBit(oldp+530,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+531,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+532,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+533,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+534,((IData)((3U == (0x707fU 
                                                 & vlSelf->inst)))));
        tracep->chgBit(oldp+535,((IData)((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+536,((IData)((0x3003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+537,((IData)((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+538,((IData)((0x2003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+539,((IData)((0x23U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+540,((IData)((0x1023U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+541,((IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+542,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+543,((((IData)((0x4003U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu))));
        tracep->chgQData(oldp+544,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7ffU 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)))))),64);
        tracep->chgQData(oldp+546,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xbU) | (QData)((IData)(
                                                                ((0x7e0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+548,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->inst 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->inst 
                                                                          >> 7U)))))))),64);
        tracep->chgQData(oldp+550,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->inst))))),64);
        tracep->chgQData(oldp+552,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->inst) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->inst 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)))))))),64);
        tracep->chgBit(oldp+554,((1U & (~ (vlSelf->inst 
                                           >> 0x19U)))));
        tracep->chgCData(oldp+555,((0x1fU & ((vlSelf->inst 
                                              >> 0xfU) 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                              >> 2U))))))),5);
        tracep->chgCData(oldp+556,((0x1fU & ((vlSelf->inst 
                                              >> 0x14U) 
                                             & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b) 
                                                              >> 1U))))))),5);
        tracep->chgQData(oldp+557,((vlSelf->pc_now 
                                    & (- (QData)((IData)(
                                                         ((0U 
                                                           != (IData)(vlSelf->npc__DOT__id_ex_branch_bus)) 
                                                          | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))))))),64);
        tracep->chgQData(oldp+559,((((- (QData)((IData)(
                                                        (0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                    | (0xfffffffffffffffeULL 
                                       & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr))) 
                                          & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result)))),64);
        tracep->chgQData(oldp+561,(((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                                     & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena)))) 
                                    | (vlSelf->pc_now 
                                       & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))))),64);
    }
}

void Vnpc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vnpc___024root* const __restrict vlSelf = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
