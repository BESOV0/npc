module ysyx_22050598_sirv_gnrl_dfflr_with_resetval #(
  parameter DW = 64, 
  parameter RESET_VAL = 0
  ) (
  input               lden, 
  input      [DW-1:0] dnxt,
  output     [DW-1:0] qout,

  input               clk,
  input               rst_n
);
  reg [DW-1:0] qout_r;
  always @(posedge clk or negedge rst_n) begin:DFFLR_WITH_RESETVAL
    if (rst_n == 1'b0) 
    qout_r <= RESET_VAL;
    else if (lden == 1'b1) 
    qout_r <= #1 dnxt;
  end
  assign qout = qout_r;
endmodule
  