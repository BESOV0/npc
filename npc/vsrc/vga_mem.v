module vga_vmem(
    input clk,
    input rst,
    input [9:0] h_addr,
    input [9:0] v_addr,
    input [7:0] ascaii,
    input sflag,
    output reg [23:0] vga_data
);

reg [11:0] vga_mem [4095:0];
  initial begin
    $readmemh("resource/data.hex", vga_mem);
  end
  
parameter H_Disp = 10'd640;//行分辨率
parameter V_Disp = 10'd480;//列分辨率
parameter H_Loc = 10'd1;//开始显示的横坐标
parameter V_Loc = 10'd0;//开始显示的纵坐标

//显存区域
   reg [11:0] count;
   wire [7:0] ram [2130:0]; 
   always @ (posedge clk or negedge rst) 
     begin
      if (!rst)
       count <= 12'b0;
      else if (sflag)
         count <= count +1'b1;
     /* else if ((ascii == 8'h0d) && (sflag))
       count <= count + 71 - (count % 71);//转行*/
      else if (count==12'd2130)
         count <= 12'b0;
      else
         count <= count;
     end
assign ram [count] = ascaii;
   
wire dis_flag;
assign dis_flag = ((h_addr > (H_Loc - 1'b1)));//显示区域限制

//字符块坐标生成
reg [9:0] v_addrr;
reg [9:0] h_addrr;
reg [9:0] x_cnt;//字符块横坐标
reg [9:0] y_cnt;//字符块纵坐标
  always @ (posedge clk or negedge rst)
     begin
       if(!rst) begin
        x_cnt <= 10'd0;
        y_cnt <= 10'd0;
         end 
       else if (dis_flag) //显示区域限制
         begin
           x_cnt <= ((h_addr - H_Loc ) / 9);
           y_cnt <= ((v_addr - V_Loc ) >> 4);
           v_addrr <= ((v_addr - V_Loc ) % 16);
           h_addrr <= ((h_addr - H_Loc ) % 9);
         end
       else begin
           x_cnt <= x_cnt;
           y_cnt <= y_cnt;
       end
     end
     
//根据坐标将点阵映射
wire [11:0] Word_Loc;//点阵位置坐标 
wire [11:0] v_addrr0;
wire [3:0] h_addrr0;
wire [11:0] x_cnt0;
wire [11:0] y_cnt0;
wire [11:0] cnt;
reg [11:0] ascaii0;
assign  x_cnt0 = {2'b0,x_cnt};
assign  y_cnt0 = {2'b0,y_cnt};
assign cnt = x_cnt0+ 1'b1 + y_cnt0*71;
 always @ (posedge clk or negedge rst)
   begin
    if (!rst) begin
   ascaii0 <= 12'b0;
   end
   else 
     ascaii0 <= {4'b0,ram[cnt]};
   end

assign  v_addrr0 = {2'b0,v_addrr};
assign  h_addrr0 = h_addrr[3:0];
assign  Word_Loc = ( (ascaii0 << 4) + 1'b1 + v_addrr0) ; //相应字符块的点阵横坐标
//绘制颜色
   always @ (posedge clk or negedge rst)
      begin
        if (!rst)
          vga_data <= 24'b0;
        else if ((dis_flag) && (vga_mem [Word_Loc][h_addrr0]) && (ascaii0 != 12'b0))
          vga_data <= 24'hFFFFFF;      
        else 
          vga_data <= 24'h0;
      end
 
endmodule
