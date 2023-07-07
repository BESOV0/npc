module ysyx_22050598_RegisterFile (
  input clk,
  input [63:0] wdata,
  input [4:0] waddr,
  input wen,
  input [4:0] raddr1,
  input ren,
  //output reg flag,
  output [63:0] rdata1,
  output [63:0] ebreak_a0,
  input [4:0] raddr2, 
  output [63:0] rdata2
);
  reg [63:0] rf [31:0];
   import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
   initial set_gpr_ptr(rf);

  always @(posedge clk) begin
    if (wen && (|waddr)) begin
    rf[waddr] <= wdata;
   // flag <= 1'b1;
    end
  end
  
    assign ebreak_a0 = rf[10];
    assign rdata1 = ((raddr1 != 5'b0) && (ren == 1'b1)) ? rf[raddr1] : 64'b0;
    assign rdata2 = ((raddr2 != 5'b0) && (ren == 1'b1)) ? rf[raddr2] : 64'b0;
endmodule
