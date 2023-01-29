`include "defines.v"
module ysyx_22050598_EXU(
input [63:0] imm,
input [63:0] immU,
input [4:0]  rd,
input [5:0]  inst_type,
input [6:0]  opcode,
input [2:0]  funct3,
input [6:0]  funct7,
input [63:0] rdata1,
input [63:0] rdata2,
output wen,
output ebreak_flag,
output [4:0] waddr,
output [63:0] wdata
);
//which inst
wire inst_addi = (opcode == `ysyx_22050598_OPCODE_ALU_IMM) && (funct3 == 3'b000);
wire inst_ebreak = (opcode == `ysyx_22050598_OPCODE_CSR_BREAK) && (funct3 == 3'b000);
//EX inst
wire [63:0] sum =  inst_addi ? (rdata1 + imm) : 64'b0;




assign ebreak_flag = inst_ebreak;
assign waddr = rd;
assign wen = inst_addi;//(inst_type != `ysyx_22050598_B_TYPE) && (inst_type != `ysyx_22050598_S_TYPE);
assign wdata = sum;

endmodule
