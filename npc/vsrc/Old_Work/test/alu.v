module alu(clk, rst, mode, A, B, Zero, Overflow, D, Y);

input clk;
input rst;
input [2:0] mode;
input [3:0] A;
input [3:0] B;
output reg  Zero;
output reg  Overflow;
//output reg  Carry;
output reg  D;//比较输出
output reg [3:0] Y;

reg cmd_flag;
//确定输入的数据最高位是否一致
 always @(posedge clk or negedge rst)
 begin  
	if(!rst)
	   cmd_flag <= 0;
	else
	   begin
		if(A[3] != B[3])         
	            cmd_flag <= 1;//最高位不一致情况下判断谁为0谁大
		else
		    cmd_flag <= 0;//最高位一致情况下判断除去符号为剩余位，补码剩余位大的该数就大
	   end
 end

always @ (posedge clk or negedge rst)

      if (!rst)
         begin
        // Carry<=1'b0;
         Overflow<=1'b0;
         Zero<=1'b0;
         D<=1'b0;
         Y<=4'b0;
         end
      else
         begin
           case (mode)
  3'b000:
         begin
           D <= 1'b0;
           Y <= A+B;
           Overflow <= (A[3]&B[3]& ~Y[3])|(~A[3]& ~B[3]& Y[3]);//两个相同符号数相加，且运算结果的符号与原数据符号相反时，产生溢出
           if (Y == 0)
           	Zero <= 1'b1;
           else
           	Zero <= 1'b0;
         end
  3'b001:
         begin
           D <= 1'b0;
           Y<=A-B;
           Overflow <= (~A[3]& B[3]& Y[3])|(A[3]& ~B[3]& ~Y[3]);
           if (Y == 0)
           	Zero <= 1'b1;
           else
           	Zero <= 1'b0;
         end
  3'b010:
  begin
           Zero <= 1'b0;
           Overflow<=1'b0;
            D <= 1'b0;
           Y<=~A;
  end         
  3'b011:
  begin
           Zero <= 1'b0;
           Overflow<=1'b0;
            D <= 1'b0;
           Y<=A&B;
   end        
  3'b100:
  begin
           Zero <= 1'b0;
           Overflow<=1'b0;
            D <= 1'b0;
           Y<=A|B;
  end      
  3'b101:
  begin
           Zero <= 1'b0;
           Overflow<=1'b0;
            D <= 1'b0;
           Y<=A^B;
  end        
  3'b110: 
           begin
               Y <= 4'b0;
               Zero <= 1'b0;
               Overflow<=1'b0;
               if(cmd_flag)
                begin
		   if(A[3] == 0)
		      D <= 1'b0;
	           else
	              D <= 1'b1;
		end
		else 
		begin
		   if(A[2:0] < B[2:0])
		      D <= 1'b1;
		   else
		      D <= 1'b0;
		end
           end
           
   3'b111:
           begin
             Zero <= 1'b0;
             Y <= 4'b0;
             Overflow<=1'b0;
             if(A == B)
              D <= 1'b1;
             else
              D <= 1'b0;
           end
   default:
            begin
        // Carry<=1'b0;
         Overflow<=1'b0;
         Zero<=1'b0;
         D<=1'b0;
         Y<=4'b0;
            end
           
           endcase
         end
 
endmodule
