module encode(clk,x,en,y);
  input  clk;
  input  [7:0] x;
  input  en;
  output reg [7:0] y;
  integer i;
//数码管编码
wire [7:0] segs [7:0];
assign segs[0] = 8'b11111101;
assign segs[1] = 8'b01100000;
assign segs[2] = 8'b11011010;
assign segs[3] = 8'b11110010;
assign segs[4] = 8'b01100110;
assign segs[5] = 8'b10110110;
assign segs[6] = 8'b10111110;
assign segs[7] = 8'b11100000;


  always @(posedge clk)
   begin
    if (en) 
    begin
      y = 8'b0;
      for( i = 0; i <= 7; i = i+1)
          if(x[i] == 1)
          y = ~segs[i];
    end
    else  
    y = 8'b0;
  end
 
endmodule
