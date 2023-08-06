module ysyx_22050598_IFU(
input clk,
input rst,
input jump_flag,
input [63:0] j_pc,
output [63:0] pc_now,
output [31:0] id_inst
);

wire [63:0] pc,pc_next;
assign pc = jump_flag ? j_pc : pc_next + 64'd4; 
ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(64,64'h0000000080000000) pc_dfflr_resetval (1'b1,pc,pc_next,clk,rst);

wire [63:0] raddr = {pc_next[63:3],3'b0};
wire [63:0] rdata;

import "DPI-C" function void pmem_read (input longint raddr, output longint rdata);
wire sign_r;
ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(1,1'b1) sign_reg (1'b1,1'b1,sign_r,clk,rst);
always @(*) begin
    if(sign_r == 1'b1)
    pmem_read(raddr, rdata);
end
assign pc_now = pc_next;
assign id_inst = ({32{pc_next[2:0] == 3'b000}} & rdata[31:0]) |
                 ({32{pc_next[2:0] == 3'b100}} & rdata[63:32]);
endmodule
