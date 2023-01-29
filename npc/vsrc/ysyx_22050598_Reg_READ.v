`include "defines.v"
module ysyx_22050598_Reg_READ(
input [4:0] rs1,
input [4:0] rs2,
input [5:0] inst_type,
output ren,
output [4:0] raddr1,
output [4:0] raddr2
);

assign ren = ((inst_type == `ysyx_22050598_I_TYPE) || (inst_type == `ysyx_22050598_R_TYPE) || (inst_type == `ysyx_22050598_B_TYPE) || (inst_type == `ysyx_22050598_S_TYPE)) ? 1'b1 : 1'b0;
assign raddr1 = rs1;
assign raddr2 = rs2;

endmodule
