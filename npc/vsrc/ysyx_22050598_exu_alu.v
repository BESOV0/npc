`include "defines.v"
module ysyx_22050598_exu_alu (
    //input         clk                 ,
    //input         rst                 ,
    //input         ex_muldiv_flush     ,
    input [9:0]   ex_alu_op_type      ,//What operations do ALU need to perform, + - * / % << >> | & ^
    input [63:0]  ex_alu_op_a         ,//ALU'S Operand
    input [63:0]  ex_alu_op_b         ,//ALU'S Operand
    input [63:0]  ex_pc               ,//branch instructions pc
    input [63:0]  ex_bs_data          ,//for branch instructions imm or store instructions  rs2
    input [4:0]   ex_write_rd_idx     ,
    input         ex_write_reg_en     ,//instruction has rd 
    input         ex_inst_is_jalr     ,//instruction is jalr
    input         ex_inst_is_jal      ,//instruction is jal
    input         ex_inst_is_store    ,//instruction is s type
    input         ex_inst_is_set      ,//instruction is set if less than type
    input         ex_inst_is_srax     ,//instruction is Shift Right Arithmetic
    input         ex_inst_5_shamt     ,//for srlw sraw sllw
    input         ex_inst_divrem_bus  ,//Indicate which rem it is, inst_rem div and inst_remw divw  all signed
    input [4:0]   ex_inst_mul_bus     ,//inst_mul , inst_mulh , inst_mulhsu , inst_mulhu , inst_mulw
    input [5:0]   ex_branch_bus       ,//branch instruction type , beq bne blt bge bltu bgeu
    input [1:0]   ex_unsigned_bus     ,//compare is unsigned type
    input         ex_ls_req           ,// L/S instruction req to bus
    input         ex_inst_is_rv64     ,//instruction is rv64 type
    output [63:0] ex_alu_rd_ls_data   ,//for rd or store loc or load loc
    output        ex_alu_rd_data_en   ,
    output [63:0] ex_alu_pc_o         ,
    output        ex_alu_pc_en_o      ,
    output        ex_load_en_o        ,
    output        ex_store_en_o       ,
    output [63:0] ex_store_data_o     ,
    output [4:0]  ex_write_rd_idx_o   
    //output        muldiv_ready        ,
    //output        muldivout_valid
); 
    //*************************Add Sub Part*************************
    wire add_or_sub = (ex_alu_op_type[8] | ex_alu_op_type[9]);
    wire add_sub_cin = ex_alu_op_type[8];
    wire [`ysyx_22050598_ALU_ADDER_WIDTH-1:0] adder_op1 = {{`ysyx_22050598_ALU_ADDER_WIDTH-`ysyx_22050598_ALU_XLEN{(~ex_unsigned_bus[1]) & ex_alu_op_a[`ysyx_22050598_ALU_XLEN-1]}},ex_alu_op_a};
    wire [`ysyx_22050598_ALU_ADDER_WIDTH-1:0] adder_op2 = {{`ysyx_22050598_ALU_ADDER_WIDTH-`ysyx_22050598_ALU_XLEN{(~ex_unsigned_bus[1]) & ex_alu_op_b[`ysyx_22050598_ALU_XLEN-1]}},ex_alu_op_b};

    wire [`ysyx_22050598_ALU_ADDER_WIDTH-1:0] add_sub_op_a = {`ysyx_22050598_ALU_ADDER_WIDTH{add_or_sub}} & adder_op1;
    wire [`ysyx_22050598_ALU_ADDER_WIDTH-1:0] add_sub_op_b = {`ysyx_22050598_ALU_ADDER_WIDTH{add_or_sub}} & adder_op2;
    wire [`ysyx_22050598_ALU_ADDER_WIDTH-1:0] add_sub_in_a = add_sub_op_a;
    wire [`ysyx_22050598_ALU_ADDER_WIDTH-1:0] add_sub_in_b = ex_alu_op_type[8] ? (~add_sub_op_b) : add_sub_op_b;
    wire [`ysyx_22050598_ALU_ADDER_WIDTH-1:0] sum_sub_data =  add_sub_in_a + add_sub_in_b +  add_sub_cin;
   
    wire [63:0] sum_sub_w_result = {{33{sum_sub_data[31]}},sum_sub_data[30:0]};
    wire [63:0] sum_sub_result = (add_or_sub & ex_inst_is_rv64) ? sum_sub_w_result : sum_sub_data[`ysyx_22050598_ALU_XLEN - 1 : 0] ;          
    /**************************************************Multdiv Part************************************************/
    /*
    wire mul_valid = ex_alu_op_type[7];
    wire div_valid = ex_alu_op_type[6] | ex_alu_op_type[5];
    wire muldivw = ex_inst_is_rv64;
    wire [1:0] mul_signed = ({2{ex_inst_mul_bus[4] | ex_inst_mul_bus[3] | ex_inst_mul_bus[0]}} & 2'b11) |
                            ({2{ex_inst_mul_bus[2]}} & 2'b10)                                           ;
    wire div_signed = ex_inst_divrem_bus;
    wire [63:0] result_hi ;
    wire [63:0] result_lo ;
    wire [63:0] quotient  ;
    wire [63:0] remainder ;
    
    ysyx_22050598_muldiv u_ysyx_22050598__muldiv(
    .clk             (clk)              ,
    .rst             (rst)              ,
    .mul_valid       (mul_valid)        ,
    .div_valid       (div_valid)        ,
    .muldiv_flush    (ex_muldiv_flush)  ,
    .muldivw         (muldivw)          ,
    .mul_signed      (mul_signed)       ,
    .div_signed      (div_signed)       ,
    .muldiv_rs1      (ex_alu_op_a)      ,
    .muldiv_rs2      (ex_alu_op_b)      ,
    .muldiv_ready    (muldiv_ready)     ,
    .out_valid       (muldivout_valid)  ,
    .result_hi       (result_hi)        ,
    .result_lo       (result_lo)        ,
    .quotient        (quotient)         ,
    .remainder	     (remainder)        
    );
    
    wire [63:0] mul_result = ({64{ex_inst_mul_bus[4]}} & result_lo) |
                             ({64{ex_inst_mul_bus[3] | ex_inst_mul_bus[2] | ex_inst_mul_bus[1]}} & result_hi) |
                             ({64{ex_inst_mul_bus[0]}} & {{32{result_lo[31]}},result_lo[31:0]}) ;
    wire [63:0] div_result = ex_inst_is_rv64 ? {{32{quotient[31]}},quotient[31:0]} : quotient ;
    wire [63:0] mod_result = ex_inst_is_rv64 ? {{32{remainder[31]}},remainder[31:0]} : remainder ;
    */

    wire [31:0] inst_rv64_a_op = ex_alu_op_a[31:0] & {32{ex_inst_is_rv64}};//for rv64 instruction
    wire [31:0] inst_rv64_b_op = ex_alu_op_b[31:0] & {32{ex_inst_is_rv64}};//for rv64 instruction
    wire [63:0] inst_rv32_a_op = ex_alu_op_a & {64{~ex_inst_is_rv64}};//for rv32 instruction
    wire [63:0] inst_rv32_b_op = ex_alu_op_b & {64{~ex_inst_is_rv64}};//for rv32 instruction

    wire [63:0] mul_op_a = {64{ex_alu_op_type[7]}} & inst_rv32_a_op;//for inst mul mulh mulhu mulhsu divu div
    wire [63:0] mul_op_b = {64{ex_alu_op_type[7]}} & inst_rv32_b_op;//for inst mul mulh mulhu mulhsu divu div
    wire [127:0] mulu_res = mul_op_a * mul_op_b;//for inst mulhu
    wire [127:0] muls_res = ($signed(mul_op_a)) * ($signed(mul_op_b));//for inst mul mulh
    wire [127:0] mulsu_res = ($signed(mul_op_a)) * ($unsigned(mul_op_b));//for inst mulhsu

    wire [31:0] mulw_op_a = {32{ex_alu_op_type[7]}} & inst_rv64_a_op;//for inst mulw 
    wire [31:0] mulw_op_b = {32{ex_alu_op_type[7]}} & inst_rv64_b_op;//for inst mulw
    wire [63:0] temp_mulw_res = ($signed(mulw_op_a)) * ($signed(mulw_op_b));
    wire [63:0] mulw_res = {{33{temp_mulw_res[31]}},temp_mulw_res[30:0]};

    wire [63:0] mul_result = {64{ex_inst_mul_bus [4]}} & muls_res[63:0] 
                           | {64{ex_inst_mul_bus [3]}} & muls_res[127:64]
                           | {64{ex_inst_mul_bus [2]}} & mulsu_res[127:64]
                           | {64{ex_inst_mul_bus [1]}} & mulu_res[127:64]
                           | {64{ex_inst_mul_bus [0]}} & mulw_res;
    //*************************Div Part************************
    wire [63:0] div_op_a = {64{ex_alu_op_type[6]}} & inst_rv32_a_op;//for inst divu div
    wire [63:0] div_op_b = {64{ex_alu_op_type[6]}} & inst_rv32_b_op;//for inst divu div
    wire [63:0] divu_res = div_op_a / div_op_b;
    wire [63:0] div_res = ($signed(div_op_a)) / ($signed(div_op_b));

    wire [31:0] divw_op_a = {32{ex_alu_op_type[6]}} & inst_rv64_a_op;//for inst divwu divw
    wire [31:0] divw_op_b = {32{ex_alu_op_type[6]}} & inst_rv64_b_op;//for inst divwu divw
    wire [31:0] temp_divwu_res = divw_op_a / divw_op_b;
    wire [31:0] temp_divw_res = ($signed(divw_op_a)) / ($signed(divw_op_b));
    wire [63:0] divwu_res = {{33{temp_divwu_res[31]}},temp_divwu_res[30:0]};
    wire [63:0] divw_res = {{33{temp_divw_res[31]}},temp_divw_res[30:0]};

    wire [63:0] div_result = ({64{ex_inst_divrem_bus  & ~ex_inst_is_rv64}} & div_res)
                           | ({64{~ex_inst_divrem_bus & ~ex_inst_is_rv64}} & divu_res)
                           | ({64{~ex_inst_divrem_bus & ex_inst_is_rv64 }} & divwu_res)
                           | ({64{ex_inst_divrem_bus  & ex_inst_is_rv64 }} & divw_res);
    //************************Mod Part*************************
    wire [63:0] mod_op_a = {64{ex_alu_op_type[5]}} & inst_rv32_a_op;//for inst remu rem
    wire [63:0] mod_op_b = {64{ex_alu_op_type[5]}} & inst_rv32_b_op;//for inst remu rem
    wire [63:0] remu_mod = mod_op_a % mod_op_b;
    wire [63:0] rem_mod = ($signed(mod_op_a)) % ($signed(mod_op_b));

    wire [31:0] modw_op_a = {32{ex_alu_op_type[5]}} & inst_rv64_a_op;//for inst remwu remw
    wire [31:0] modw_op_b = {32{ex_alu_op_type[5]}} & inst_rv64_b_op;//for inst remwu remw
    wire [31:0] temp_remwu_mod = modw_op_a % modw_op_b;
    wire [31:0] temp_remw_mod = ($signed(modw_op_a)) % ($signed(modw_op_b));
    wire [63:0] remwu_mod = {{33{temp_remwu_mod[31]}},temp_remwu_mod[30:0]};
    wire [63:0] remw_mod = {{33{temp_remw_mod[31]}},temp_remw_mod[30:0]};

    wire [63:0] mod_result = ({64{ex_inst_divrem_bus  & ~ex_inst_is_rv64}} & rem_mod)
                           | ({64{~ex_inst_divrem_bus & ~ex_inst_is_rv64}} & remu_mod)
                           | ({64{~ex_inst_divrem_bus & ex_inst_is_rv64 }} & remwu_mod)
                           | ({64{ex_inst_divrem_bus  & ex_inst_is_rv64 }} & remw_mod);
    /*******************************************Shift Part**********************************************************/
    wire        alu_op_is_shift   = ex_alu_op_type[4]   | ex_alu_op_type[3]                 ;
    wire [63:0] temp_shift_op_a   = ex_alu_op_a         & {64{alu_op_is_shift}}             ;
    wire [5:0]  temp_shift_op_b_6 = ex_alu_op_b[5:0]    & {6{alu_op_is_shift}}              ;
    wire [4:0]  temp_shift_op_b_5 = ex_alu_op_b[4:0]    & {5{alu_op_is_shift}}              ;
    //shift left or shift right?
    wire [63:0] temp_shift_op_a_64  = ex_alu_op_type[4] ? reverse64(temp_shift_op_a)        : temp_shift_op_a       ;  
    wire [31:0] temp_shift_op_a_32  = ex_alu_op_type[4] ? reverse32(temp_shift_op_a[31:0])  : temp_shift_op_a[31:0] ; 
    //inst is rv64 which means inst oprand is 32-bits
    wire [64:0] shift_op_a_32       = {{33{(ex_inst_is_srax & temp_shift_op_a_32[31])}}, temp_shift_op_a_32[31:0]}  ; 
    wire [64:0] shift_op_a_64       = {{(ex_inst_is_srax & temp_shift_op_a_64[63])} , temp_shift_op_a_64} ;
    wire [64:0] shift_op_a          = ex_inst_is_rv64 ? shift_op_a_32 : shift_op_a_64 ;
    wire [5:0]  shift_op_b          = ex_inst_5_shamt ? {1'b0,temp_shift_op_b_5}  : temp_shift_op_b_6 ;
    wire [64:0] temp_shift_result   = ($signed(shift_op_a)) >>> shift_op_b ;

    wire [31:0] shift_result_32_rev = reverse32(temp_shift_result[31:0]);
    wire [63:0] shift_result_64_rev = reverse64(temp_shift_result[63:0]);       

    wire [63:0] shift_result        = ({64{(ex_alu_op_type[4] & ex_inst_is_rv64 )}} & {{32{shift_result_32_rev[31]}},shift_result_32_rev}) //inst sllw slliw
                                    | ({64{(ex_alu_op_type[4] & ~ex_inst_is_rv64)}} &  shift_result_64_rev) //inst sll slli
                                    | ({64{ex_alu_op_type[3]}} & temp_shift_result[63:0]);//inst shift right 

    function [63:0] reverse64(input [63:0] in); 
     integer i;  
       for(i=0; i< 64; i=i+1) begin     
        reverse64[i] = in[63-i];   
       end
    endfunction

    function [31:0] reverse32(input [31:0] in);   
     integer i;  
       for(i=0; i< 32; i=i+1) begin     
        reverse32[i] = in[31-i];   
       end
    endfunction
    /****************************************************Or Part**************************************************/
    wire [63:0] or_op_a = {64{ex_alu_op_type[2]}} & ex_alu_op_a;
    wire [63:0] or_op_b = {64{ex_alu_op_type[2]}} & ex_alu_op_b;
    wire [63:0] or_result =  or_op_a | or_op_b ;
    /****************************************************And Part************************************************/
    wire [63:0] and_op_a = {64{ex_alu_op_type[1]}} & ex_alu_op_a;
    wire [63:0] and_op_b = {64{ex_alu_op_type[1]}} & ex_alu_op_b;
    wire [63:0] and_result =  and_op_a & and_op_b ;
    /****************************************************Xor Part************************************************/
    wire [63:0] xor_op_a = {64{ex_alu_op_type[0]}} & ex_alu_op_a;
    wire [63:0] xor_op_b = {64{ex_alu_op_type[0]}} & ex_alu_op_b;
    wire [63:0] xor_result =  xor_op_a ^ xor_op_b ;
    /**********************************************instruction implement part************************************/
    /*******************************Brach Type Part , 6 instructions , Jalr Jal , 2 instructions*****************/
    //branch part
    wire ex_inst_brach_en  = |ex_branch_bus ; 
    //0 is rs1 > rs2, 1 is rs1 < rs2
    wire branch_cmp = sum_sub_data[`ysyx_22050598_ALU_XLEN];
    wire branch_cmp_zero = ~(|sum_sub_data[63:0]);//every bit is 0 therefore after or operation still 0
    wire inst_beq_en  = ex_branch_bus[5] & (branch_cmp_zero);
    wire inst_bne_en  = ex_branch_bus[4] & (~branch_cmp_zero);
    wire inst_blt_en  = ex_branch_bus[3] & (branch_cmp);
    wire inst_bge_en  = ex_branch_bus[2] & ((~branch_cmp) | (branch_cmp_zero));
    wire inst_bltu_en = ex_branch_bus[1] & (branch_cmp);
    wire inst_bgeu_en = ex_branch_bus[0] & ((~branch_cmp) | (branch_cmp_zero));
    wire branch_en    = inst_beq_en | inst_bne_en | inst_blt_en | inst_bge_en | inst_bltu_en | inst_bgeu_en;
    //jump part
    wire ex_inst_jump_en        = (ex_inst_is_jal | ex_inst_is_jalr) ;
    wire [63:0] pc_op_a         = (ex_pc & {64{ex_inst_brach_en | ex_inst_jump_en}});
    wire [63:0] pc_op_b         = ({64{ex_inst_brach_en}} & ex_bs_data) | ({64{ex_inst_jump_en}} & 64'd4);
    wire [63:0] jump_brach_pc   = pc_op_a + pc_op_b ;//brach pc is to dnpc, jump pc is to rd
    wire [63:0] ex_jump_pc_res  = ({64{ex_inst_is_jal}} & sum_sub_result)  | ({64{ex_inst_is_jalr}} & (sum_sub_result & ~1));
    assign ex_alu_pc_o          = ({64{ex_inst_brach_en}} & jump_brach_pc) | ({64{ex_inst_jump_en}} & ex_jump_pc_res);
    assign ex_alu_pc_en_o       = branch_en | ex_inst_jump_en;
    //*********write rd data part*****************************
    wire [63:0] ex_temp_rd_ls_data = ({64{add_or_sub & (~ex_inst_is_set) & (~ex_inst_jump_en)}} & sum_sub_result)
                                   | ({64{add_or_sub & (ex_inst_is_set)  & (~ex_inst_jump_en)}} & {63'b0,sum_sub_data[64]})
                                   | ({64{ex_inst_jump_en  }} & jump_brach_pc)
                                   | ({64{ex_alu_op_type[7]}} & mul_result)
                                   | ({64{ex_alu_op_type[6]}} & div_result)
                                   | ({64{ex_alu_op_type[5]}} & mod_result)
                                   | ({64{alu_op_is_shift}} & shift_result)
                                   | ({64{ex_alu_op_type[2]}} & or_result)
                                   | ({64{ex_alu_op_type[1]}} & and_result)
                                   | ({64{ex_alu_op_type[0]}} & xor_result);
    //********store and load data part**********************************
    assign ex_load_en_o       = ex_ls_req & (~ex_inst_is_store);
    assign ex_store_en_o      = ex_inst_is_store;
    assign ex_write_rd_idx_o  = ex_write_rd_idx;
    assign ex_store_data_o    = ex_bs_data & {64{ex_inst_is_store}};
    assign ex_alu_rd_data_en  = ex_write_reg_en;
    assign ex_alu_rd_ls_data  = ex_temp_rd_ls_data & {64{ex_write_reg_en | ex_inst_is_store}};
                           
endmodule