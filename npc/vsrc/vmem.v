module vmem(
    input clk,
    input rst,
    input [9:0] h_addr,
    input [9:0] v_addr,
    output reg [23:0] vga_data
);

parameter H_Disp = 10'd640;//行分辨率
parameter V_Disp = 10'd480;//列分辨率
parameter W_Side = 10'd40;//边框宽度
parameter W_Block = 10'd40;//方块宽度

reg [9:0] X_Block;//方块左上角横坐标
reg [9:0] Y_Block;//方块左上角纵坐标

reg move_h;// 1:right 0:left
reg move_v;// 1:down 0:up
//使能信号产生
reg [31:0] count;
wire move_en;
   always @ (posedge clk or negedge rst)
     begin
       if(!rst)
          count <=32'b0;
       else if (count == 32'd500000)
          count <= 32'b0;
       else
          count <= count + 1'b1;   
     end
   assign move_en = (count == 32'd500000-1'b1) ? 1'b1 : 1'b0;
//方向移动判断   
   always @ (posedge clk or negedge rst)
     begin
       if(!rst) begin
         move_h <= 1'b1;
         move_v <= 1'b1;
         end
       else if (X_Block == W_Side - 1'b1)
              move_h <= 1'b1;
       else if (X_Block == H_Disp-W_Side-W_Block-1'b1)
              move_h <= 1'b0;
       else if (Y_Block == W_Side-1'b1)
              move_v <= 1'b1;
       else if (Y_Block == V_Disp-W_Side-W_Block-1'b1)
              move_v <= 1'b0;
       else begin
              move_v <= move_v;
              move_h <= move_h;       
        end
            
     end
   
   
  always @ (posedge clk or negedge rst)
     begin
       if(!rst) begin
        X_Block <= 10'd100;
        Y_Block <= 10'd100;
         end 
       else if (move_en) 
         begin
            if(move_h)
             X_Block <= X_Block + 1'b1;
            else
             X_Block <= X_Block - 1'b1;
            if(move_v)
             Y_Block <= Y_Block + 1'b1;
            else
             Y_Block <= Y_Block - 1'b1;
         end 
       else  begin
           X_Block <= X_Block;
           Y_Block <= Y_Block;  
       end
     end
//绘制颜色
   always @ (posedge clk or negedge rst)
      begin
        if (!rst)
          vga_data <= 24'b0;
        else if ((h_addr < W_Side) || (h_addr >= H_Disp - W_Side) || (v_addr < W_Side) || (v_addr >= V_Disp - W_Side))
          vga_data <= 24'h0000FF;
        else if ((h_addr >= X_Block) && (h_addr < X_Block + W_Block) && (v_addr >= Y_Block) && (v_addr < Y_Block + W_Block))
          vga_data <= 24'b0;      
        else 
          vga_data <= 24'hFFFFFF;
      end
 
endmodule
     
     
