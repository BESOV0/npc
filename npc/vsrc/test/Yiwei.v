module Yiwei(
  input clkr,
  input clk, 
  input rst,
  input con,
  output [7:0] o_seg0,
  output [7:0] o_seg1
);
reg [7:0] Data;
//分频更容易观察，实际没有用到
reg [31:0] count;
reg clkrr;
always @ (posedge clk or negedge rst)
  begin
    if (!rst)
      count <=32'b0;
    else
      begin
       if(count == 32'b0)
          clkrr=~clkrr;
       else
          count <= (count >= 5000000 ? 32'b0 : count + 1'b1);  
      end
  end
  
//数码管显示段码
wire [7:0] segs [15:0];
assign segs[0] = 8'b11111100;
assign segs[1] = 8'b01100000;
assign segs[2] = 8'b11011010;
assign segs[3] = 8'b11110010;
assign segs[4] = 8'b01100110;
assign segs[5] = 8'b10110110;
assign segs[6] = 8'b10111110;
assign segs[7] = 8'b11100000;
assign segs[8] = 8'b11111110;
assign segs[9] = 8'b11110110;
assign segs[10] = 8'b11101110;//A
assign segs[11] = 8'b00111110;//B
assign segs[12] = 8'b10011100;//C
assign segs[13] = 8'b01111010;//D
assign segs[14] = 8'b10011110;//E
assign segs[15] = 8'b11001110;//F
//移位操作，生成随机数
reg data;
always @ (posedge clkr or negedge rst)
  begin
     if (!rst)
        Data<=8'b0;
     else if (con)
        Data <= 8'b1;
     else
     begin
     data = Data[4]^Data[3]^Data[2]^Data[0];
     Data [7] <= data;
     Data [6] <= Data [7];
     Data [5] <= Data [6];
     Data [4] <= Data [5];
     Data [3] <= Data [4];
     Data [2] <= Data [3];
     Data [1] <= Data [2];
     Data [0] <= Data [1];
     end
  end

assign o_seg0 = ~segs[Data[3:0]];
assign o_seg1 = ~segs[Data[7:4]];
  
endmodule
  
