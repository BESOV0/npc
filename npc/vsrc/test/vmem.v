module vmem(
    input clk,
    input rst,
    input [9:0] h_addr,
    input [9:0] v_addr,
    output reg [23:0] vga_data
);
reg [11:0] vga_mem [4095:0];
  initial begin
    $readmemh("resource/data.hex", vga_mem);
  end
parameter H_Disp = 10'd640;//行分辨率
parameter V_Disp = 10'd480;//列分辨率
parameter H_Loc = 10'd175;//开始显示的横坐标
parameter V_Loc = 10'd175;//开始显示的纵坐标

reg [9:0] x_cnt;//字符块横坐标
reg [9:0] y_cnt;//字符块纵坐标

wire flag;
assign flag = (h_addr > H_Loc) && (v_addr > V_Loc) && (h_addr <= H_Loc + 10'd288) && (v_addr <= V_Loc + 10'd128);//显示区域限制

//字符块坐标生成
reg [9:0] v_addrr;
reg [9:0] h_addrr;
  always @ (posedge clk or negedge rst)
     begin
       if(!rst) begin
        x_cnt <= 10'd0;
        y_cnt <= 10'd0;
         end 
       else if (flag) //显示区域限制
         begin
           x_cnt <= ((h_addr - H_Loc -1'b1) / 9);
           y_cnt <= ((v_addr - V_Loc -1'b1) >> 4);
           v_addrr <= ((v_addr - V_Loc -1'b1) % 16);
           h_addrr <= ((h_addr - H_Loc -1'b1) % 9);
         end
       else begin
           x_cnt <= x_cnt;
           y_cnt <= y_cnt;
       end
     end
     
//根据坐标将点阵映射
wire [11:0] Word_Loc;//点阵位置坐标 
wire [11:0] x_cnt0;
wire [11:0] y_cnt0;
wire [11:0] v_addrr0;
wire [3:0] h_addrr0;
assign  x_cnt0 = {2'b0,x_cnt};
assign  y_cnt0 = {2'b0,y_cnt};
assign  v_addrr0 = {2'b0,v_addrr};
assign  h_addrr0 = h_addrr[3:0];
assign  Word_Loc = ((x_cnt0 << 4) + (y_cnt0 << 9) + v_addrr0) ; //相应字符块的点阵横坐标
  
//绘制颜色
   always @ (posedge clk or negedge rst)
      begin
        if (!rst)
          vga_data <= 24'b0;
        else if ((flag) && (vga_mem [Word_Loc][h_addrr0]))
          vga_data <= 24'hFFFFFF;      
        else 
          vga_data <= 24'h0;
      end
 
endmodule
