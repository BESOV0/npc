module npc(
input clk,
input rst,
input [31:0] inst,
output  [63:0] pc,
output [63:0]  fdata
);
wire [63:0] ebreak_a0;
wire [63:0] imm;
wire [63:0] immU;
wire [63:0] j_pc;
wire [4:0]  rs1,rs2,rd,raddr1,raddr2,waddr;
wire [6:0]  funct7;
wire [2:0]  funct3;
wire [6:0]  opcode;
wire [63:0] rdata1,rdata2,wdata;
wire [5:0] inst_type;
wire ren,wen,ebreak_flag,j_flag;

ysyx_22050598_IFU u_ysyx_22050598_IFU(
.clk(clk),
.rst(rst),
.jump_flag(j_flag),
.j_pc(j_pc),
.pc_now(pc)
);

ysyx_22050598_IDU u_ysyx_22050598_IDU(
.inst(inst),
.imm(imm),
.immU(immU),
.rs1(rs1),
.rs2(rs2),
.rd(rd),
.funct7(funct7),
.funct3(funct3),
.inst_type(inst_type),
.opcode(opcode)
);

ysyx_22050598_RegisterFile  u_ysyx_22050598_RegisterFile(
  .clk(clk),
  .wdata(wdata),
  .waddr(waddr),
  .wen(wen),
  .raddr1(raddr1),
  .ren(ren),
  .ebreak_a0(ebreak_a0),
  .rdata1(rdata1),
  .raddr2(raddr2), 
  .rdata2(rdata2)
);

ysyx_22050598_Reg_READ u_ysyx_22050598_Reg_READ(
.rs1(rs1),
.rs2(rs2),
.inst_type(inst_type),
.ren(ren),
.raddr1(raddr1),
.raddr2(raddr2)
);

ysyx_22050598_EXU u_ysyx_22050598_EXU(
.imm(imm),
.immU(immU),
.rd(rd),
.pc(pc),
.inst_type(inst_type),
.opcode(opcode),
.funct7(funct7),
.funct3(funct3),
.rdata1(rdata1),
.rdata2(rdata2),
.j_flag(j_flag),
.j_pc(j_pc),
.wen(wen),
.waddr(waddr),
.wdata(wdata),
.ebreak_flag(ebreak_flag)
);

ysyx_22050598_EBREAK u_ysyx_22050598_EBREAK(
.ebreak_flag(ebreak_flag),
.ebreak_a0(ebreak_a0)
);

assign fdata = wdata;

endmodule
