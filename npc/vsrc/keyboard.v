module keyboard(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output reg [7:0] seg0,
    output reg [7:0] seg1,
    output reg [7:0] seg2,
    output reg [7:0] seg3,
    output  [7:0] seg6,
    output  [7:0] seg7

);
    reg [9:0] buffer; // 存储ps2_data
    reg [3:0] count;  // 计数ps2_data bits
    reg [2:0] ps2_clk_sync;
    reg [7:0] presscount;
    wire flag;//成功按压一次标志
    wire sflag;//成功接受数据标志
//数码管显示段码
    wire [7:0] segs [15:0];
    assign segs[0] = ~8'b11111100;
    assign segs[1] = ~8'b01100000;
    assign segs[2] = ~8'b11011010;
    assign segs[3] = ~8'b11110010;
    assign segs[4] = ~8'b01100110;
    assign segs[5] = ~8'b10110110;
    assign segs[6] = ~8'b10111110;
    assign segs[7] = ~8'b11100000;
    assign segs[8] = ~8'b11111110;
    assign segs[9] = ~8'b11110110;
    assign segs[10] = ~8'b11101110;//A
    assign segs[11] = ~8'b00111110;//B
    assign segs[12] = ~8'b10011100;//C
    assign segs[13] = ~8'b01111010;//D
    assign segs[14] = ~8'b10011110;//E
    assign segs[15] = ~8'b11001110;//F
//计时器延缓显示时间模块
  reg countt_full;
  reg counttt_full;
  reg [31:0] countt;
  reg [31:0] counttt;
  reg en_countt;//计数器使能信号
  reg en_counttt;
  always @ (posedge clk or negedge rst)
    begin
    if(!rst)
     countt <=32'b0;
    else if (en_countt)
     countt <= countt +1'b1;
    else
     countt <=32'b0;
    end
  always @(posedge clk or negedge rst)
     begin
       if (!rst)
         countt_full <= 1'b0;
       else if (countt == 32'd5000000)
         countt_full <=1'b1;
       else
         countt_full <= 1'b0;
     end  
     
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
//按下次数计算
    always @(posedge clk or negedge rst)
     begin
       if (!rst)
         begin 
            presscount <= 8'b0;
         end
       else
          begin
            if (flag == 1)
               presscount <= presscount +1'b1;      
          end
     end   
     assign seg6 = segs[presscount [3:0]];
     assign seg7 = segs[presscount [7:4]];   
     assign flag = (sampling ==1) && (count == 4'd10) && (buffer[0] == 0) && (ps2_data) && (^buffer[9:1]) && (buffer[8:1] == 8'hF0);
//ASCII码转换
  always @(posedge clk or negedge rst) 
    begin
        if (!rst)
         begin 
            seg2 <=8'hFF;
            seg3 <=8'hFF;
            en_counttt <=1'b0;
         end
        else if (sflag == 1)
          begin
            case (buffer[8:1])
               8'h1c:begin
               seg2 <= segs[1];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h1b:begin
               seg2 <= segs[1];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h23:begin
               seg2 <= segs[4];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h2b:begin
               seg2 <= segs[6];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h34:begin
               seg2 <= segs[7];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h33:begin
               seg2 <= segs[8];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h3b:begin
               seg2 <= segs[10];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h42:begin
               seg2 <= segs[11];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h4b:begin
               seg2 <= segs[12];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h15:begin
               seg2 <= segs[1];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h1d:begin
               seg2 <= segs[7];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h24:begin
               seg2 <= segs[5];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h2d:begin
               seg2 <= segs[2];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h2c:begin
               seg2 <= segs[4];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h35:begin
               seg2 <= segs[9];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h3c:begin
               seg2 <= segs[5];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h43:begin
               seg2 <= segs[9];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h44:begin
               seg2 <= segs[15];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h4d:begin
               seg2 <= segs[0];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h1a:begin
               seg2 <= segs[10];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h22:begin
               seg2 <= segs[8];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h21:begin
               seg2 <= segs[3];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h2a:begin
               seg2 <= segs[6];
               seg3 <= segs[7];
               en_counttt <=1'b1;
               end
               8'h32:begin
               seg2 <= segs[2];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h31:begin
               seg2 <= segs[14];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h3a:begin
               seg2 <= segs[13];
               seg3 <= segs[6];
               en_counttt <=1'b1;
               end
               8'h16:begin
               seg2 <= segs[1];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
               8'h1e:begin
               seg2 <= segs[2];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
               8'h26:begin
               seg2 <= segs[3];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
               8'h25:begin
               seg2 <= segs[4];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
               8'h2e:begin
               seg2 <= segs[5];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
               8'h36:begin
               seg2 <= segs[6];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
               8'h3d:begin
               seg2 <= segs[7];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
               8'h3e:begin
               seg2 <= segs[8];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
               8'h46:begin
               seg2 <= segs[9];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
               8'h45:begin
               seg2 <= segs[0];
               seg3 <= segs[3];
               en_counttt <=1'b1;
               end
            default:begin
               seg2 <=8'hFF;
               seg3 <=8'hFF;
               en_counttt <=1'b0;
               end
            endcase
          end
      else if (counttt_full==1'b1)
         begin 
            seg2 <=8'hFF;
            seg3 <=8'hFF;
            en_counttt <=1'b0;
         end   
     end       
   assign sflag = (sampling == 1) && (count == 4'd10) && (buffer[0] == 0) && (ps2_data) && (^buffer[9:1]);  
//数据处理
    always @(posedge clk or negedge rst) 
    begin
        if (!rst)
         begin 
            count <= 4'b0;
            seg0 <=8'hFF;
            seg1 <=8'hFF;
            en_countt <= 1'b0;
         end
        else 
         begin
            if (sampling)
             begin
              if (count == 4'd10) 
                begin
                  if ((buffer[0] == 0) && (ps2_data) &&  (^buffer[9:1])) 
                     begin  
                       seg0 <= segs[buffer[4:1]];
                       seg1 <= segs[buffer[8:5]]; 
                       en_countt<=1'b1;                                                    
                     end               
                        count <= 0;//清0准备下一次
                end 
              else
                begin
                  buffer[count] <= ps2_data;  //存储ps2_data
                  count <= count + 3'b1;
                end
                       
              end
               else if (countt_full == 1'b1)
              begin
                  seg0 <= 8'hFF;
                  seg1 <= 8'hFF;  
                  en_countt <=1'b0;
              end
        end
    end
endmodule
