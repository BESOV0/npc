module add(clk,en,out_q);
  input  clk;
  input  en;
  output reg [2:0] out_q;

  reg clkr;
  reg [31:0] count;
  always @ (posedge clk)
  begin
   if (count == 32'b0) 
      clkr=~clkr;
      
      count <= (count >= 5000000 ? 32'b0 : count + 1'b1);
  end
  always @ (posedge clkr)
    if (en)   
    out_q <= out_q + 1;
    else   out_q <= 0;
endmodule
