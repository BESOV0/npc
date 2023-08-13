`include "ysyx_22050598_defines.v"
module ysyx_22050598_muldiv(
    input           clk             ,
    input           rst             ,
    input           mul_valid       ,
    input           div_valid       ,
    input           muldiv_flush    ,
    input           muldivw         ,
    input  [1:0]    mul_signed      ,
    input           div_signed      ,
    input  [63:0]   muldiv_rs1      ,
    input  [63:0]   muldiv_rs2      ,
    output          muldiv_ready    ,
    output          out_valid       ,
    output [63:0]   result_hi       ,
    output [63:0]   result_lo       ,
    output [63:0]   quotient        ,
    output [63:0]   remainder	            
    );
    //when muldivw is valid ,mul resut is in result_lo, [31:0] is low part, [63:32] is high part
    //div result is in quotient[31:0] and remainder[31:0]
    /**********************************************FSM**********************************************/
    wire mul_is_valid = mul_valid & ~muldiv_flush ;
    wire div_is_valid = div_valid & ~muldiv_flush ;
    
    localparam IDLE  = 2'b00;
    localparam MUL   = 2'b01;
    localparam DIV   = 2'b10;
    localparam DONE  = 2'b11;

    wire [5:0] muldiv_cnt_r;
    wire [1:0] muldiv_state_r;
    wire sta_is_idle = (~muldiv_state_r[1] & ~muldiv_state_r[0]);
    wire sta_is_mul  = (~muldiv_state_r[1] &  muldiv_state_r[0]);
    wire sta_is_div  = ( muldiv_state_r[1] & ~muldiv_state_r[0]);
    wire sta_is_done = ( muldiv_state_r[1] &  muldiv_state_r[0]);
    
    wire sta_is_idle_exit_ena = sta_is_idle & (mul_is_valid | div_is_valid);
    //muldivw type only need half cycles of muldiv type
    wire [5:0] mul_cnt = muldiv_cnt_r & {6{sta_is_mul}} ;
    wire [5:0] div_cnt = muldiv_cnt_r & {6{sta_is_div}} ;
    wire sta_is_mul_exit_ena  = muldivw      ? 
                                (~mul_cnt[5] & mul_cnt[4] & (~(|mul_cnt[3:0]))) : //mul_cnt == 6'd16
                                ( mul_cnt[5] & (~(|mul_cnt[4:0]))) ;//mul_cnt == 6'd32

    wire sta_is_div_exit_ena  = muldivw     ?
                                (~div_cnt[5] & (&div_cnt[4:0])): //div_cnt == 6'd31
                                &div_cnt ;//div_cnt == 6'd63
                                
    wire sta_is_done_exit_ena = sta_is_done ;

    wire [1:0] sta_is_idle_nxt = ({2{mul_is_valid}} & MUL) | 
                                 ({2{div_is_valid}} & DIV) ;

    wire [1:0] sta_is_mul_nxt  = DONE ;
    wire [1:0] sta_is_div_nxt  = DONE ;
    wire [1:0] sta_is_done_nxt = IDLE ;

    wire [1:0] temp_muldiv_state_next = ({2{sta_is_idle_exit_ena}} & sta_is_idle_nxt) |
                                        ({2{sta_is_mul_exit_ena }} & sta_is_mul_nxt ) |
                                        ({2{sta_is_div_exit_ena }} & sta_is_div_nxt ) |
                                        ({2{sta_is_done_exit_ena}} & sta_is_done_nxt) ;
    //when flush came just reset FSM
    wire muldiv_ena = sta_is_idle_exit_ena  |
                      sta_is_mul_exit_ena   |
                      sta_is_div_exit_ena   |
                      sta_is_done_exit_ena  |
                      muldiv_flush          ; 

    wire [1:0] muldiv_state_next = muldiv_flush ? IDLE : temp_muldiv_state_next;
    ysyx_22050598_sirv_gnrl_dfflr #(2) ysyx_22050598_muldiv_ctrl(muldiv_ena, muldiv_state_next, muldiv_state_r, clk, rst);
    /************************************booth encode***********************************************/
    wire mul_rs1_sign  = ~(|mul_signed)                                             ?
                         1'b0                                                       : 
                         (muldiv_rs1[63] & ~muldivw) | (muldiv_rs1[31] & muldivw)   ;

    wire mul_rs2_sign  = (~(|mul_signed) | (mul_signed[1] & ~mul_signed[0]))        ? 
                         1'b0                                                       : 
                         (muldiv_rs2[63] & ~muldivw) | (muldiv_rs2[31] & muldivw)   ;

    wire mul_start_ena = sta_is_idle & mul_is_valid ;
    wire [2:0]  booth_bits [32:0];
    wire [64:0] temp_multiplicand      = muldivw ? 
                                        {{33{mul_rs1_sign}}, muldiv_rs1[31:0]}  : 
                                        {mul_rs1_sign, muldiv_rs1}              ;

    wire [66:0] temp_booth_multiplier  = muldivw ? 
                                        {{34{mul_rs2_sign}}, muldiv_rs2[31:0],  1'b0}  & {67{mul_start_ena}} : 
                                        {mul_rs2_sign, mul_rs2_sign, muldiv_rs2, 1'b0} & {67{mul_start_ena}} ;
    
    wire [32:0] booth_set;//1:set 0 2:do nothing
    wire [32:0] booth_inv;//1:inv 2:do nothing
    wire [32:0] booth_mul;//1:*2 0:*1

    wire [32:0] booth_set_r;//1:set 0 2:do nothing
    wire [32:0] booth_inv_r;//1:inv 2:do nothing
    wire [32:0] booth_mul_r;//1:*2 0:*1
    
    genvar i;
        generate
            for(i = 0 ; i < 33; i = i+1) begin:booth_bits_gen
                assign booth_bits[i] = temp_booth_multiplier[(i*2)+:3];
            end
        endgenerate

    genvar j;
        generate
            for(j = 0 ; j < 33; j = j+1) begin:booth_encode
                assign booth_set[j] = ~(|booth_bits[j]) | (&booth_bits[j]);
                assign booth_inv[j] = booth_bits[j][2] & (~booth_set[j]);
                assign booth_mul[j] = (~(booth_bits[j][0] ^ booth_bits[j][1])) & (~booth_set[j]);
            end
        endgenerate
    
    wire booth_ena = mul_start_ena;
    ysyx_22050598_sirv_gnrl_dfflr #(33) ysyx_22050598_booth_set_reg(booth_ena, booth_set, booth_set_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(33) ysyx_22050598_booth_inv_reg(booth_ena, booth_inv, booth_inv_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(33) ysyx_22050598_booth_mul_reg(booth_ena, booth_mul, booth_mul_r, clk, rst);
    /**************************************************mul calculate***********************************************/
    wire       mul_cnt_ena   = sta_is_mul | sta_is_idle | sta_is_div;
    wire       mul_ena       = sta_is_mul | mul_start_ena ;
    wire [5:0] mul_cnt_next  = {6{sta_is_mul | sta_is_div}} & (muldiv_cnt_r + 1'b1);

    wire [129:0] muldiv_res_r ;
    wire [129:0] muldiv_op2_r ;

    wire [129:0] mul_op1 = muldiv_res_r;
    wire [129:0] mul_op2 = (booth_set_r[muldiv_cnt_r]) ? 130'd0 : 
                           (booth_mul_r[muldiv_cnt_r]) ? {muldiv_op2_r[128:0],1'b0} : 
                           muldiv_op2_r;
    ysyx_22050598_sirv_gnrl_dfflr #(6) ysyx_22050598_muldiv_cnt (mul_cnt_ena, mul_cnt_next, muldiv_cnt_r, clk, rst);
    /**************************************************div calculate***********************************************/
    wire div_start_ena = sta_is_idle & div_is_valid ;
    wire div_rs1_sign = (~muldivw & div_signed & muldiv_rs1[63]) |
                        (muldivw  & div_signed & muldiv_rs1[31]) ;

    wire div_rs2_sign = (~muldivw & div_signed & muldiv_rs2[63]) |
                        (muldivw  & div_signed & muldiv_rs2[31]) ;
    wire div_rs1_sign_r;
    wire div_rs2_sign_r;

    wire [63:0]  div_op1_sign  = muldivw ? 
                                 {{32{div_rs1_sign}},muldiv_rs1[31:0]} & ({64{div_start_ena}}) :
                                 muldiv_rs1 & ({64{div_start_ena}}) ;

    wire [63:0]  div_op2_sign  = muldivw ? 
                                 {{32{div_rs2_sign}},muldiv_rs2[31:0]} & ({64{div_start_ena}}) :
                                 muldiv_rs2 & ({64{div_start_ena}}) ;

    wire [63:0]  temp_div_op1  = div_rs1_sign ? (~div_op1_sign + 1'b1) : div_op1_sign;
    wire [63:0]  temp_div_op2  = div_rs2_sign ? (~div_op2_sign + 1'b1) : div_op2_sign;
    wire div_cin_r;
    wire div_fix_ena = div_cin_r & sta_is_done ;

    wire [129:0] divw_op1 = ({97'b0, muldiv_res_r[63:31]} & {130{sta_is_div}})  |
                            ({98'b0, muldiv_res_r[63:32]} & {130{div_fix_ena}}) ;

    wire [129:0] div_op1 = muldivw ? 
                           divw_op1 :
                          (({65'd0, muldiv_res_r[127:63]} & {130{sta_is_div}}) | ({66'd0, muldiv_res_r[127:64]} & {130{div_fix_ena}}));
    wire [129:0] div_op2 = muldiv_op2_r;

    ysyx_22050598_sirv_gnrl_dfflr #(1)  ysyx_22050598_div_rs1_sign_reg(div_start_ena, div_rs1_sign, div_rs1_sign_r, clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  ysyx_22050598_div_rs2_sign_reg(div_start_ena, div_rs2_sign, div_rs2_sign_r, clk, rst);
    /*****************************************************adder******************************************************/ 
    wire add_sub_cin = (booth_inv_r[muldiv_cnt_r] & sta_is_mul) | (~div_cin_r & sta_is_div);
    
    wire [129:0] adder_op1 = (mul_op1 & {130{sta_is_mul}}) | (div_op1 & {130{sta_is_div | div_fix_ena}}) ;
    wire [129:0] adder_op2 = (mul_op2 & {130{sta_is_mul}}) | (div_op2 & {130{sta_is_div | div_fix_ena}}) ;

    wire [129:0] add_sub_in_a = adder_op1;
    wire [129:0] add_sub_in_b = add_sub_cin ? (~adder_op2) : adder_op2;
    
    wire [129:0] sum_sub_data =  add_sub_in_a + add_sub_in_b + add_sub_cin;  

    wire div_cin_ena = sta_is_div | sta_is_idle ;
    wire div_cin = (sta_is_div & sum_sub_data[64] & ~muldivw) | (sta_is_div & sum_sub_data[32] & muldivw);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  ysyx_22050598_div_cin_reg(div_cin_ena, div_cin, div_cin_r, clk, rst);
    /*************************************************muldiv reg******************************************************/
    //muldiv op1 part 
    wire [126:0] temp_divw_res = {64'd0,sum_sub_data[31:0], muldiv_res_r[30:0]};
    wire [126:0] temp_div_res  = muldivw ? temp_divw_res : {sum_sub_data[63:0], muldiv_res_r[62:0]};
   
    wire [129:0] muldiv_res   = ({130{sta_is_mul}}    & sum_sub_data)             |
                                ({130{div_start_ena}} & {66'd0,temp_div_op1})     |
                                ({130{sta_is_div}}    & {2'b0,temp_div_res,1'b0}) ;

    wire muldiv_res_reg_ena = div_start_ena | mul_ena | sta_is_div;                        
    ysyx_22050598_sirv_gnrl_dfflr #(130) ysyx_22050598_muldiv_res_reg (muldiv_res_reg_ena, muldiv_res, muldiv_res_r, clk, rst);
    //muldiv op2 part
    wire [129:0] temp_mul_op2  = ({130{mul_start_ena}} & {{65{temp_multiplicand[64]}},temp_multiplicand}) |
                                 ({130{sta_is_mul}} & {muldiv_op2_r[127:0],2'b00})                        ;

    wire muldiv_op2_reg_ena = div_start_ena | mul_ena ;
    wire [129:0] temp_muldiv_op2 = ({130{div_start_ena}} & {66'd0,temp_div_op2}) | 
                                   ({130{mul_ena}} & temp_mul_op2)               ;

    ysyx_22050598_sirv_gnrl_dfflr #(130) ysyx_22050598_muldiv_op2_reg (muldiv_op2_reg_ena, temp_muldiv_op2, muldiv_op2_r, clk, rst);
    //Q Part
    wire [63:0] div_q_r ; 
    wire [63:0] divw_q  = {64{sta_is_div}} & {32'd0,div_q_r[30:0],(~sum_sub_data[32])} ;
    wire [63:0] div_q   = muldivw ? divw_q : {64{sta_is_div}} & {div_q_r[62:0],(~sum_sub_data[64])} ;
    wire div_q_ena = div_start_ena | sta_is_div ;
    ysyx_22050598_sirv_gnrl_dfflr #(64) ysyx_22050598_div_q_reg (div_q_ena, div_q, div_q_r, clk, rst);
    /**************************************************assign********************************************************/  
    wire   div_op_00 = (~div_rs1_sign_r) & (~div_rs2_sign_r);
    wire   div_op_01 = (~div_rs1_sign_r) & ( div_rs2_sign_r);
    wire   div_op_10 = (div_rs1_sign_r ) & (~div_rs2_sign_r);
    wire   div_op_11 = (div_rs1_sign_r ) & (div_rs2_sign_r );
    wire [63:0] div_is_valid_q   = div_q_r & {64{sta_is_done}};

    wire [63:0] temp_div_rem  = (muldiv_res_r[127:64] & {64{sta_is_done & ~muldivw}})        |
                                ({32'd0,muldiv_res_r[63:32]}  & {64{sta_is_done & muldivw}}) ;
    wire [63:0] div_is_valid_rem = div_fix_ena ? sum_sub_data[63:0] : temp_div_rem;
    
    assign result_hi = muldiv_res_r[127:64];
    assign result_lo = muldiv_res_r[63:0];
    assign muldiv_ready = sta_is_idle;
    assign out_valid = sta_is_done; 
    assign quotient  = (div_op_01 | div_op_10) ? (~div_is_valid_q + 1'b1) : div_is_valid_q;
    assign remainder = (div_op_10 | div_op_11) ? (~div_is_valid_rem + 1'b1) : div_is_valid_rem;

endmodule