// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


void Vnpc___024root__traceInitSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vnpc___024root__traceInitTop(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vnpc___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vnpc___024root__traceInitSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+74,"clk", false,-1);
        tracep->declBit(c+75,"rst", false,-1);
        tracep->declBus(c+76,"inst", false,-1, 31,0);
        tracep->declQuad(c+77,"pc", false,-1, 63,0);
        tracep->declQuad(c+79,"fdata", false,-1, 63,0);
        tracep->declBit(c+74,"npc clk", false,-1);
        tracep->declBit(c+75,"npc rst", false,-1);
        tracep->declBus(c+76,"npc inst", false,-1, 31,0);
        tracep->declQuad(c+77,"npc pc", false,-1, 63,0);
        tracep->declQuad(c+79,"npc fdata", false,-1, 63,0);
        tracep->declQuad(c+81,"npc imm", false,-1, 63,0);
        tracep->declQuad(c+83,"npc immU", false,-1, 63,0);
        tracep->declBus(c+85,"npc rs1", false,-1, 4,0);
        tracep->declBus(c+86,"npc rs2", false,-1, 4,0);
        tracep->declBus(c+87,"npc rd", false,-1, 4,0);
        tracep->declBus(c+85,"npc raddr1", false,-1, 4,0);
        tracep->declBus(c+86,"npc raddr2", false,-1, 4,0);
        tracep->declBus(c+87,"npc waddr", false,-1, 4,0);
        tracep->declBus(c+88,"npc funct7", false,-1, 6,0);
        tracep->declBus(c+89,"npc funct3", false,-1, 2,0);
        tracep->declBus(c+90,"npc opcode", false,-1, 6,0);
        tracep->declQuad(c+91,"npc rdata1", false,-1, 63,0);
        tracep->declQuad(c+93,"npc rdata2", false,-1, 63,0);
        tracep->declQuad(c+1,"npc wdata", false,-1, 63,0);
        tracep->declBus(c+3,"npc inst_type", false,-1, 5,0);
        tracep->declBit(c+4,"npc ren", false,-1);
        tracep->declBit(c+5,"npc wen", false,-1);
        tracep->declBit(c+95,"npc ebreak_flag", false,-1);
        tracep->declBit(c+74,"npc u_ysyx_22050598_IFU clk", false,-1);
        tracep->declBit(c+75,"npc u_ysyx_22050598_IFU rst", false,-1);
        tracep->declQuad(c+77,"npc u_ysyx_22050598_IFU pc_now", false,-1, 63,0);
        tracep->declQuad(c+6,"npc u_ysyx_22050598_IFU pc", false,-1, 63,0);
        tracep->declQuad(c+8,"npc u_ysyx_22050598_IFU pc_next", false,-1, 63,0);
        tracep->declBit(c+126,"npc u_ysyx_22050598_IFU wen", false,-1);
        tracep->declBus(c+127,"npc u_ysyx_22050598_IFU u_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+128,"npc u_ysyx_22050598_IFU u_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+74,"npc u_ysyx_22050598_IFU u_reg clk", false,-1);
        tracep->declBit(c+75,"npc u_ysyx_22050598_IFU u_reg rst", false,-1);
        tracep->declQuad(c+6,"npc u_ysyx_22050598_IFU u_reg din", false,-1, 63,0);
        tracep->declQuad(c+8,"npc u_ysyx_22050598_IFU u_reg dout", false,-1, 63,0);
        tracep->declBit(c+126,"npc u_ysyx_22050598_IFU u_reg wen", false,-1);
        tracep->declBus(c+76,"npc u_ysyx_22050598_IDU inst", false,-1, 31,0);
        tracep->declQuad(c+81,"npc u_ysyx_22050598_IDU imm", false,-1, 63,0);
        tracep->declQuad(c+83,"npc u_ysyx_22050598_IDU immU", false,-1, 63,0);
        tracep->declBus(c+85,"npc u_ysyx_22050598_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+86,"npc u_ysyx_22050598_IDU rs2", false,-1, 4,0);
        tracep->declBus(c+87,"npc u_ysyx_22050598_IDU rd", false,-1, 4,0);
        tracep->declBus(c+88,"npc u_ysyx_22050598_IDU funct7", false,-1, 6,0);
        tracep->declBus(c+89,"npc u_ysyx_22050598_IDU funct3", false,-1, 2,0);
        tracep->declBus(c+3,"npc u_ysyx_22050598_IDU inst_type", false,-1, 5,0);
        tracep->declBus(c+90,"npc u_ysyx_22050598_IDU opcode", false,-1, 6,0);
        tracep->declBit(c+96,"npc u_ysyx_22050598_IDU inst_is_LUI", false,-1);
        tracep->declBit(c+97,"npc u_ysyx_22050598_IDU inst_is_AUIPC", false,-1);
        tracep->declBit(c+98,"npc u_ysyx_22050598_IDU inst_is_JAL", false,-1);
        tracep->declBit(c+99,"npc u_ysyx_22050598_IDU inst_is_JALR", false,-1);
        tracep->declBit(c+100,"npc u_ysyx_22050598_IDU inst_is_BRANCH", false,-1);
        tracep->declBit(c+101,"npc u_ysyx_22050598_IDU inst_is_LOAD", false,-1);
        tracep->declBit(c+102,"npc u_ysyx_22050598_IDU inst_is_STORE", false,-1);
        tracep->declBit(c+103,"npc u_ysyx_22050598_IDU inst_is_ALU_IMM", false,-1);
        tracep->declBit(c+104,"npc u_ysyx_22050598_IDU inst_is_ALU_REG", false,-1);
        tracep->declBit(c+105,"npc u_ysyx_22050598_IDU inst_is_BREAK", false,-1);
        tracep->declQuad(c+106,"npc u_ysyx_22050598_IDU Iimm", false,-1, 63,0);
        tracep->declQuad(c+108,"npc u_ysyx_22050598_IDU Simm", false,-1, 63,0);
        tracep->declQuad(c+110,"npc u_ysyx_22050598_IDU Bimm", false,-1, 63,0);
        tracep->declQuad(c+112,"npc u_ysyx_22050598_IDU Uimm", false,-1, 63,0);
        tracep->declQuad(c+114,"npc u_ysyx_22050598_IDU Jimm", false,-1, 63,0);
        tracep->declQuad(c+116,"npc u_ysyx_22050598_IDU IimmU", false,-1, 63,0);
        tracep->declQuad(c+118,"npc u_ysyx_22050598_IDU SimmU", false,-1, 63,0);
        tracep->declQuad(c+120,"npc u_ysyx_22050598_IDU BimmU", false,-1, 63,0);
        tracep->declQuad(c+122,"npc u_ysyx_22050598_IDU UimmU", false,-1, 63,0);
        tracep->declQuad(c+124,"npc u_ysyx_22050598_IDU JimmU", false,-1, 63,0);
        tracep->declBit(c+74,"npc u_ysyx_22050598_RegisterFile clk", false,-1);
        tracep->declQuad(c+1,"npc u_ysyx_22050598_RegisterFile wdata", false,-1, 63,0);
        tracep->declBus(c+87,"npc u_ysyx_22050598_RegisterFile waddr", false,-1, 4,0);
        tracep->declBit(c+5,"npc u_ysyx_22050598_RegisterFile wen", false,-1);
        tracep->declBus(c+85,"npc u_ysyx_22050598_RegisterFile raddr1", false,-1, 4,0);
        tracep->declBit(c+4,"npc u_ysyx_22050598_RegisterFile ren", false,-1);
        tracep->declQuad(c+91,"npc u_ysyx_22050598_RegisterFile rdata1", false,-1, 63,0);
        tracep->declBus(c+86,"npc u_ysyx_22050598_RegisterFile raddr2", false,-1, 4,0);
        tracep->declQuad(c+93,"npc u_ysyx_22050598_RegisterFile rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+10+i*2,"npc u_ysyx_22050598_RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+85,"npc u_ysyx_22050598_Reg_READ rs1", false,-1, 4,0);
        tracep->declBus(c+86,"npc u_ysyx_22050598_Reg_READ rs2", false,-1, 4,0);
        tracep->declBus(c+3,"npc u_ysyx_22050598_Reg_READ inst_type", false,-1, 5,0);
        tracep->declBit(c+4,"npc u_ysyx_22050598_Reg_READ ren", false,-1);
        tracep->declBus(c+85,"npc u_ysyx_22050598_Reg_READ raddr1", false,-1, 4,0);
        tracep->declBus(c+86,"npc u_ysyx_22050598_Reg_READ raddr2", false,-1, 4,0);
        tracep->declQuad(c+81,"npc u_ysyx_22050598_EXU imm", false,-1, 63,0);
        tracep->declQuad(c+83,"npc u_ysyx_22050598_EXU immU", false,-1, 63,0);
        tracep->declBus(c+87,"npc u_ysyx_22050598_EXU rd", false,-1, 4,0);
        tracep->declBus(c+3,"npc u_ysyx_22050598_EXU inst_type", false,-1, 5,0);
        tracep->declBus(c+90,"npc u_ysyx_22050598_EXU opcode", false,-1, 6,0);
        tracep->declBus(c+89,"npc u_ysyx_22050598_EXU funct3", false,-1, 2,0);
        tracep->declBus(c+88,"npc u_ysyx_22050598_EXU funct7", false,-1, 6,0);
        tracep->declQuad(c+91,"npc u_ysyx_22050598_EXU rdata1", false,-1, 63,0);
        tracep->declQuad(c+93,"npc u_ysyx_22050598_EXU rdata2", false,-1, 63,0);
        tracep->declBit(c+5,"npc u_ysyx_22050598_EXU wen", false,-1);
        tracep->declBit(c+95,"npc u_ysyx_22050598_EXU ebreak_flag", false,-1);
        tracep->declBus(c+87,"npc u_ysyx_22050598_EXU waddr", false,-1, 4,0);
        tracep->declQuad(c+1,"npc u_ysyx_22050598_EXU wdata", false,-1, 63,0);
        tracep->declBit(c+5,"npc u_ysyx_22050598_EXU inst_addi", false,-1);
        tracep->declBit(c+95,"npc u_ysyx_22050598_EXU inst_ebreak", false,-1);
        tracep->declQuad(c+1,"npc u_ysyx_22050598_EXU sum", false,-1, 63,0);
        tracep->declBit(c+95,"npc u_ysyx_22050598_EBREAK ebreak_flag", false,-1);
    }
}

void Vnpc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vnpc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vnpc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vnpc___024root__traceRegister(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vnpc___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vnpc___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vnpc___024root__traceCleanup, vlSelf);
    }
}

void Vnpc___024root__traceFullSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vnpc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vnpc___024root* const __restrict vlSelf = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vnpc___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vnpc___024root__traceFullSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__sum),64);
        tracep->fullCData(oldp+3,(vlSelf->npc__DOT__inst_type),6);
        tracep->fullBit(oldp+4,(vlSelf->npc__DOT__ren));
        tracep->fullBit(oldp+5,(vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi));
        tracep->fullQData(oldp+6,((4ULL + vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next)),64);
        tracep->fullQData(oldp+8,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next),64);
        tracep->fullQData(oldp+10,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+12,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+14,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+16,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+18,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+20,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+22,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+24,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+26,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+28,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+30,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+32,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+34,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+36,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+38,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+40,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+42,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+44,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+46,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+48,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+50,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+52,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+54,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+56,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+58,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+60,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+62,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+64,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+66,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+68,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+70,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+72,(vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[31]),64);
        tracep->fullBit(oldp+74,(vlSelf->clk));
        tracep->fullBit(oldp+75,(vlSelf->rst));
        tracep->fullIData(oldp+76,(vlSelf->inst),32);
        tracep->fullQData(oldp+77,(vlSelf->pc),64);
        tracep->fullQData(oldp+79,(vlSelf->fdata),64);
        tracep->fullQData(oldp+81,(((((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                               >> 4U))))) 
                                        & (((- (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU)))) 
                                            << 0xbU) 
                                           | (QData)((IData)(
                                                             (0x7ffU 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U)))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                                 >> 3U))))) 
                                          & (((- (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU)))) 
                                              << 0xbU) 
                                             | (QData)((IData)(
                                                               ((0x7e0U 
                                                                 & (vlSelf->inst 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 7U)))))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                                >> 2U))))) 
                                         & (((- (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0x800U 
                                                                & (vlSelf->inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                               >> 1U))))) 
                                        & (((- (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU)))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (0x7ffff000U 
                                                              & vlSelf->inst)))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->npc__DOT__inst_type))))) 
                                       & (((- (QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU)))) 
                                           << 0x14U) 
                                          | (QData)((IData)(
                                                            ((0xff000U 
                                                              & vlSelf->inst) 
                                                             | ((0x800U 
                                                                 & (vlSelf->inst 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)))))))))),64);
        tracep->fullQData(oldp+83,(((((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                               >> 4U))))) 
                                        & (QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U)))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                                 >> 3U))))) 
                                          & (((QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x19U))) 
                                              << 5U) 
                                             | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U))))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                                >> 2U))))) 
                                         & (((QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0x800U 
                                                                & (vlSelf->inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__inst_type) 
                                                               >> 1U))))) 
                                        & ((QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0xcU))) 
                                           << 0xcU))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->npc__DOT__inst_type))))) 
                                       & (((QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                           << 0x14U) 
                                          | (QData)((IData)(
                                                            ((0xff000U 
                                                              & vlSelf->inst) 
                                                             | ((0x800U 
                                                                 & (vlSelf->inst 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)))))))))),64);
        tracep->fullCData(oldp+85,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+86,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+87,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+88,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+89,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+90,((0x7fU & vlSelf->inst)),7);
        tracep->fullQData(oldp+91,((((0U != (0x1fU 
                                             & (vlSelf->inst 
                                                >> 0xfU))) 
                                     & (IData)(vlSelf->npc__DOT__ren))
                                     ? vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]
                                     : 0ULL)),64);
        tracep->fullQData(oldp+93,((((0U != (0x1fU 
                                             & (vlSelf->inst 
                                                >> 0x14U))) 
                                     & (IData)(vlSelf->npc__DOT__ren))
                                     ? vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]
                                     : 0ULL)),64);
        tracep->fullBit(oldp+95,((IData)((0x73U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->fullBit(oldp+96,((0x37U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+97,((0x17U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+98,((0x6fU == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+99,((0x67U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+100,((0x63U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+101,((3U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+102,((0x23U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+103,((0x13U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+104,((0x33U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+105,((0x73U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullQData(oldp+106,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)))))),64);
        tracep->fullQData(oldp+108,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 ((0x7e0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+110,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+112,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7ffff000U 
                                                                   & vlSelf->inst))))),64);
        tracep->fullQData(oldp+114,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+116,((QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0x14U)))),64);
        tracep->fullQData(oldp+118,((((QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x19U))) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))))),64);
        tracep->fullQData(oldp+120,((((QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x1fU))) 
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
        tracep->fullQData(oldp+122,(((QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0xcU))) 
                                     << 0xcU)),64);
        tracep->fullQData(oldp+124,((((QData)((IData)(
                                                      (vlSelf->inst 
                                                       >> 0x1fU))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->inst 
                                                                            >> 0x14U)))))))),64);
        tracep->fullBit(oldp+126,(1U));
        tracep->fullIData(oldp+127,(0x40U),32);
        tracep->fullQData(oldp+128,(0x80000000ULL),64);
    }
}
