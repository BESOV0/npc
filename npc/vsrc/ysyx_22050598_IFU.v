module ysyx_22050598_IFU(
input clk,
input rst,
input jump_flag,
input [63:0] j_pc,
output [63:0] pc_now
);

 

wire [63:0] pc,pc_next;
wire wen;
assign wen  = 1'b1;
assign pc = jump_flag ? j_pc : pc_next + 64'd4; 
ysyx_22050598_Reg #(64,64'h0000000080000000) u_reg (clk,rst,pc,pc_next,wen);
assign pc_now = pc_next;

endmodule
