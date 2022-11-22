module vga_keyboard(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output sflag,//成功接受数据标志
    output reg [7:0] ascaii
);
    reg [9:0] buffer; // 存储ps2_data
    reg [3:0] count;  // 计数ps2_data bits
    
    reg [2:0] ps2_clk_sync;    
//计时器延缓显示时间模块
  reg counttt_full;
  reg [31:0] counttt;
  reg en_counttt;
 always @ (posedge clk or negedge rst)
    begin
    if(!rst)
     counttt <= 32'b0;
    else if (en_counttt)
     counttt <= counttt +1'b1;
    else
     counttt <=32'b0;
    end
  always @(posedge clk or negedge rst)
     begin
       if (!rst)
         counttt_full <= 1'b0;
       else if (counttt == 32'd5000000)
         counttt_full <=1'b1;
       else
         counttt_full <= 1'b0;
     end  
     
//记录ps2时钟数据，判断下降沿
    always @(posedge clk)
     begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
     end
    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];//检测到下降沿sampling置1
   //assign flag = (sampling ==1) && (count == 4'd10) && (buffer[0] == 0) && (ps2_data) && (^buffer[9:1]) && (buffer[8:1] == 8'hF0);//松开按键标志
//ASCII码转换
  always @(posedge clk or negedge rst) 
    begin
        if (!rst) begin
          en_counttt <=1'b0;
          ascaii <= 8'b0;
        end
        
        else if (sflag == 1)
          begin
            case (buffer[8:1])
               8'h1c:begin
               ascaii <= 8'h61;
               en_counttt <=1'b1;
               end
               8'h1b:begin
               ascaii <= 8'h73;
               en_counttt <=1'b1;
               end
               8'h23:begin
               ascaii <= 8'h64;
               en_counttt <=1'b1;
               end
               8'h2b:begin
               ascaii <= 8'h66;
               en_counttt <=1'b1;
               end
               8'h34:begin
               ascaii <= 8'h67;
               en_counttt <=1'b1;
               end
               8'h33:begin
               ascaii <= 8'h68;
               en_counttt <=1'b1;
               end
               8'h3b:begin
               ascaii <= 8'h6a;
               en_counttt <=1'b1;
               end
               8'h42:begin
               ascaii <= 8'h6b;
               en_counttt <=1'b1;
               end
               8'h4b:begin
               ascaii <= 8'h6c;
               en_counttt <=1'b1;
               end
               8'h15:begin
               ascaii <= 8'h71;
               en_counttt <=1'b1;
               end
               8'h1d:begin
               ascaii <= 8'h77;
               en_counttt <=1'b1;
               end
               8'h24:begin
               ascaii <= 8'h65;
               en_counttt <=1'b1;
               end
               8'h2d:begin
               ascaii <= 8'h72;
               en_counttt <=1'b1;
               end
               8'h2c:begin
               ascaii <= 8'h74;
               en_counttt <=1'b1;
               end
               8'h35:begin
               ascaii <= 8'h79;
               en_counttt <=1'b1;
               end
               8'h3c:begin
               ascaii <= 8'h75;
               en_counttt <=1'b1;
               end
               8'h43:begin
               ascaii <= 8'h69;
               en_counttt <=1'b1;
               end
               8'h44:begin
               ascaii <= 8'h6f;
               en_counttt <=1'b1;
               end
               8'h4d:begin
               ascaii <= 8'h70;
               en_counttt <=1'b1;
               end
               8'h1a:begin
               ascaii <= 8'h7a;
               en_counttt <=1'b1;
               end
               8'h22:begin
               ascaii <= 8'h78;
               en_counttt <=1'b1;
               end
               8'h21:begin
               ascaii <= 8'h63;
               en_counttt <=1'b1;
               end
               8'h2a:begin
               ascaii <= 8'h76;
               en_counttt <=1'b1;
               end
               8'h32:begin
               ascaii <= 8'h62;
               en_counttt <=1'b1;
               end
               8'h31:begin
               ascaii <= 8'h6e;
               en_counttt <=1'b1;
               end
               8'h3a:begin
               ascaii <= 8'h6d;
               en_counttt <=1'b1;
               end
               8'h16:begin
               ascaii <= 8'h31;
               en_counttt <=1'b1;
               end
               8'h1e:begin
               ascaii <= 8'h32;
               en_counttt <=1'b1;
               end
               8'h26:begin
               ascaii <= 8'h33;
               en_counttt <=1'b1;
               end
               8'h25:begin
               ascaii <= 8'h34;
               en_counttt <=1'b1;
               end
               8'h2e:begin
               ascaii <= 8'h35;
               en_counttt <=1'b1;
               end
               8'h36:begin
               ascaii <= 8'h36;
               en_counttt <=1'b1;
               end
               8'h3d:begin
               ascaii <= 8'h37;
               en_counttt <=1'b1;
               end
               8'h3e:begin
               ascaii <= 8'h38;
               en_counttt <=1'b1;
               end
               8'h46:begin
               ascaii <= 8'h39;
               en_counttt <=1'b1;
               end
               8'h45:begin
               ascaii <= 8'h30;
               en_counttt <=1'b1;
               end
               8'h5a:begin
               ascaii <= 8'h0d;
               en_counttt <=1'b1;
               end
            default:begin
               ascaii <= 8'b0;
               en_counttt <=1'b0;
               end
            endcase
          end
      else if (counttt_full==1'b1)
         begin 
            ascaii <= 8'b0;
            en_counttt <=1'b0;
         end   
     end       
   assign sflag = (sampling == 1) && (count == 4'd10) && (buffer[0] == 0) && (ps2_data) && (^buffer[9:1]);  
   
//数据处理
    always @(posedge clk or negedge rst) 
    begin
        if (!rst)
            count <= 4'b0;
        else 
         begin
            if (sampling)
           begin
              if (count == 4'd10)             
                  count <= 0;     //清0准备下一次 
              else
                begin
                  buffer[count] <= ps2_data;  //存储ps2_data
                  count <= count + 3'b1;
                end        
           end
        end
    end
endmodule
