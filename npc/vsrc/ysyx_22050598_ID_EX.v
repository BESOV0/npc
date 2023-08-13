`include "ysyx_22050598_defines.v"
module ysyx_22050598_ID_EX (
    `ifdef ysyx_22050598_Test
    input   [31:0]   id_ex_inst               ,
    output  [31:0]   id_ex_inst_o             ,
    `endif
    input            clk                      ,   
    input            rst                      ,
    input            id_ex_flush              ,
    input            id_ex_stall              ,
    //ALU Part   
    input   [9:0]    id_ex_op_type            ,
    input   [63:0]   alu_op_a                 ,
    input   [63:0]   alu_op_b                 ,
    input   [63:0]   id_ex_pc                 ,
    input   [63:0]   id_ex_bs_zimm_data       ,
    //reg part    
    input   [4:0]    id_write_rd_idx          ,
    input            id_ex_w_reg_en           ,
    //inst type
    input            id_ex_inst_is_ebreak     ,
    input            id_ex_inst_is_ecall      ,
    input            id_ex_inst_is_jalr       ,
    input            id_ex_inst_is_jal        ,
    input            id_ex_inst_is_store      ,
    input            id_ex_inst_is_set        ,
    input            id_ex_inst_is_srax       ,
    input            id_ex_inst_5_shamt       ,
    input            id_ex_inst_is_mret       ,
    input            id_inst_is_csri          ,
    //inst bus
    input   [1:0]    id_ex_ls_data_bus        ,
    input            id_ex_inst_divrem_bus    ,
    input   [4:0]    id_ex_inst_mul_bus       ,
    input   [5:0]    id_ex_csr_bus            ,
    input   [5:0]    id_ex_branch_bus         ,
    input   [1:0]    id_ex_unsigned_bus       ,
    //inst ctrt
    input            id_ex_ls_req             ,
    input            id_ex_inst_is_rv64       ,
    input            id_ex_inst_is_illegal    ,
    //ALU Part   
    output  [9:0]    id_ex_op_type_o          ,
    output  [63:0]   alu_op_a_o               ,
    output  [63:0]   alu_op_b_o               ,
    output  [63:0]   id_ex_pc_o               ,
    output  [63:0]   id_ex_bs_zimm_data_o     ,
    //reg part    
    output  [4:0]    id_write_rd_idx_o        ,
    output           id_ex_w_reg_en_o         ,
    //inst type
    output           id_ex_inst_is_ebreak_o   ,
    output           id_ex_inst_is_ecall_o    ,
    output           id_ex_inst_is_jalr_o     ,
    output           id_ex_inst_is_jal_o      ,
    output           id_ex_inst_is_store_o    ,
    output           id_ex_inst_is_set_o      ,
    output           id_ex_inst_is_srax_o     ,
    output           id_ex_inst_5_shamt_o     ,
    output           id_ex_inst_is_mret_o     ,
    //inst bus 
    output  [1:0]    id_ex_ls_data_bus_o      ,
    output           id_ex_inst_divrem_bus_o  ,
    output  [4:0]    id_ex_inst_mul_bus_o     ,
    output  [5:0]    id_ex_csr_bus_o          ,
    output  [5:0]    id_ex_branch_bus_o       ,
    output  [1:0]    id_ex_unsigned_bus_o     ,
    //inst ctry 
    output           id_ex_ls_req_o           ,
    output           id_ex_inst_is_rv64_o     ,
    output           id_ex_inst_is_illegal_o 
);

    wire [8:0]  id_ex_inst_bus = {
                                  id_ex_inst_is_ebreak  , 
                                  id_ex_inst_is_ecall   , 
                                  id_ex_inst_is_jalr    , 
                                  id_ex_inst_is_jal     ,     
                                  id_ex_inst_is_store   , 
                                  id_ex_inst_is_set     , 
                                  id_ex_inst_is_srax    ,
                                  id_ex_inst_5_shamt    , 
                                  id_ex_inst_is_mret
                                 };
    wire [8:0]  temp_id_ex_inst_bus         = id_ex_flush ? 9'b0           : id_ex_inst_bus         ;
    wire [9:0]  temp_id_ex_op_type          = id_ex_flush ? 10'b1000000000 : id_ex_op_type          ;
    wire [63:0] temp_alu_op_a               = id_ex_flush ? 64'b0          : alu_op_a               ;
    wire [63:0] temp_alu_op_b               = id_ex_flush ? 64'b0          : alu_op_b               ;  
    wire [63:0] temp_id_ex_pc               = id_ex_flush ? 64'b0          : id_ex_pc               ;
    wire [63:0] temp_id_ex_bs_zimm_data     = id_ex_flush ? 64'b0          : id_ex_bs_zimm_data     ;
    wire [4:0]  temp_id_write_rd_idx        = id_ex_flush ? 5'b0           : id_write_rd_idx        ;
    wire        temp_id_ex_w_reg_en         = id_ex_flush ? 1'b0           : id_ex_w_reg_en         ;
    wire [1:0]  temp_id_ex_ls_data_bus      = id_ex_flush ? 2'b0           : id_ex_ls_data_bus      ;
    wire        temp_id_ex_inst_divrem_bus  = id_ex_flush ? 1'b0           : id_ex_inst_divrem_bus  ;
    wire [4:0]  temp_id_ex_inst_mul_bus     = id_ex_flush ? 5'b0           : id_ex_inst_mul_bus     ;
    wire [5:0]  temp_id_ex_csr_bus          = id_ex_flush ? 6'b0           : id_ex_csr_bus          ;
    wire [5:0]  temp_id_ex_branch_bus       = id_ex_flush ? 6'b0           : id_ex_branch_bus       ;
    wire [1:0]  temp_id_ex_unsigned_bus     = id_ex_flush ? 2'b0           : id_ex_unsigned_bus     ;
    wire        temp_id_ex_ls_req           = id_ex_flush ? 1'b0           : id_ex_ls_req           ;
    wire        temp_id_ex_inst_is_rv64     = id_ex_flush ? 1'b0           : id_ex_inst_is_rv64     ;
    wire        temp_id_ex_inst_is_illegal  = id_ex_flush ? 1'b0           : id_ex_inst_is_illegal  ;

    wire [8:0]  id_ex_inst_bus_r        ;
    wire [9:0]  id_ex_op_type_r         ;
    wire [63:0] alu_op_a_r              ;
    wire [63:0] alu_op_b_r              ;
    wire [63:0] id_ex_pc_r              ;
    wire [63:0] id_ex_bs_zimm_data_r    ;
    wire [4:0]  id_write_rd_idx_r       ;
    wire        id_ex_w_reg_en_r        ;
    wire [1:0]  id_ex_ls_data_bus_r     ;
    wire        id_ex_inst_divrem_bus_r ;
    wire [4:0]  id_ex_inst_mul_bus_r    ;
    wire [5:0]  id_ex_csr_bus_r         ;
    wire [5:0]  id_ex_branch_bus_r      ;
    wire [1:0]  id_ex_unsigned_bus_r    ;
    wire        id_ex_ls_req_r          ;
    wire        id_ex_inst_is_rv64_r    ;
    wire        id_ex_inst_is_illegal_r ;

    wire id_ex_en                   = ~id_ex_stall;
    wire id_ex_inst_btype           = |id_ex_branch_bus;

    `ifdef ysyx_22050598_Test
    wire id_ex_pc_en                = id_ex_en ;
    `else
    wire id_ex_pc_en                = id_ex_en & (id_ex_inst_btype | id_ex_inst_is_ecall);
    `endif

    wire id_ex_den                  = id_ex_en & (id_ex_inst_btype | id_ex_inst_is_store | id_inst_is_csri);

    ysyx_22050598_sirv_gnrl_dfflr #(9)  id_ex_inst_bus_dfflr          (id_ex_en     , temp_id_ex_inst_bus         , id_ex_inst_bus_r        , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(10) id_ex_op_type_dfflr           (id_ex_en     , temp_id_ex_op_type          , id_ex_op_type_r         , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(64) alu_op_a_dfflr                (id_ex_en     , temp_alu_op_a               , alu_op_a_r              , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(64) alu_op_b_dfflr                (id_ex_en     , temp_alu_op_b               , alu_op_b_r              , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(64) id_ex_pc_dfflr                (id_ex_pc_en  , temp_id_ex_pc               , id_ex_pc_r              , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(64) id_ex_bs_zimm_data_dfflr      (id_ex_den    , temp_id_ex_bs_zimm_data     , id_ex_bs_zimm_data_r    , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(5)  id_write_rd_idx_dfflr         (id_ex_en     , temp_id_write_rd_idx        , id_write_rd_idx_r       , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  id_ex_w_reg_en_dfflr          (id_ex_en     , temp_id_ex_w_reg_en         , id_ex_w_reg_en_r        , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(2)  id_ex_ls_data_bus_dfflr       (id_ex_en     , temp_id_ex_ls_data_bus      , id_ex_ls_data_bus_r     , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  id_ex_inst_divrem_bus_dfflr   (id_ex_en     , temp_id_ex_inst_divrem_bus  , id_ex_inst_divrem_bus_r , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(5)  id_ex_inst_mul_bus_dfflr      (id_ex_en     , temp_id_ex_inst_mul_bus     , id_ex_inst_mul_bus_r    , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(6)  id_ex_csr_bus_dfflr           (id_ex_en     , temp_id_ex_csr_bus          , id_ex_csr_bus_r         , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(6)  id_ex_branch_bus_dfflr        (id_ex_en     , temp_id_ex_branch_bus       , id_ex_branch_bus_r      , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(2)  id_ex_unsigned_bus_dfflr      (id_ex_en     , temp_id_ex_unsigned_bus     , id_ex_unsigned_bus_r    , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  id_ex_ls_req_dfflr            (id_ex_en     , temp_id_ex_ls_req           , id_ex_ls_req_r          , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  id_ex_inst_is_rv64_dfflr      (id_ex_en     , temp_id_ex_inst_is_rv64     , id_ex_inst_is_rv64_r    , clk, rst);
    ysyx_22050598_sirv_gnrl_dfflr #(1)  id_ex_inst_is_illegal_dfflr   (id_ex_en     , temp_id_ex_inst_is_illegal  , id_ex_inst_is_illegal_r , clk, rst);
        
    `ifdef ysyx_22050598_Test
    wire   [31:0]    temp_id_ex_inst = id_ex_flush ? 32'h00000013 : id_ex_inst  ;
    wire   [31:0]    id_ex_inst_r    ;
    ysyx_22050598_sirv_gnrl_dfflr #(32)  id_ex_inst_dfflr(id_ex_en, temp_id_ex_inst, id_ex_inst_r, clk, rst);
    assign id_ex_inst_o = id_ex_inst_r ;
    `endif

    assign id_ex_op_type_o         = id_ex_op_type_r         ;
    assign alu_op_a_o              = alu_op_a_r              ;
    assign alu_op_b_o              = alu_op_b_r              ;
    assign id_ex_pc_o              = id_ex_pc_r              ;
    assign id_ex_bs_zimm_data_o    = id_ex_bs_zimm_data_r    ;
    assign id_write_rd_idx_o       = id_write_rd_idx_r       ;
    assign id_ex_w_reg_en_o        = id_ex_w_reg_en_r        ;
    assign id_ex_inst_is_ebreak_o  = id_ex_inst_bus_r[8]     ;
    assign id_ex_inst_is_ecall_o   = id_ex_inst_bus_r[7]     ;
    assign id_ex_inst_is_jalr_o    = id_ex_inst_bus_r[6]     ;
    assign id_ex_inst_is_jal_o     = id_ex_inst_bus_r[5]     ;
    assign id_ex_inst_is_store_o   = id_ex_inst_bus_r[4]     ;
    assign id_ex_inst_is_set_o     = id_ex_inst_bus_r[3]     ;
    assign id_ex_inst_is_srax_o    = id_ex_inst_bus_r[2]     ;
    assign id_ex_inst_5_shamt_o    = id_ex_inst_bus_r[1]     ;
    assign id_ex_inst_is_mret_o    = id_ex_inst_bus_r[0]     ;
    assign id_ex_ls_data_bus_o     = id_ex_ls_data_bus_r     ;
    assign id_ex_inst_divrem_bus_o = id_ex_inst_divrem_bus_r ;
    assign id_ex_inst_mul_bus_o    = id_ex_inst_mul_bus_r    ;
    assign id_ex_csr_bus_o         = id_ex_csr_bus_r         ;
    assign id_ex_branch_bus_o      = id_ex_branch_bus_r      ;
    assign id_ex_unsigned_bus_o    = id_ex_unsigned_bus_r    ;
    assign id_ex_ls_req_o          = id_ex_ls_req_r          ;
    assign id_ex_inst_is_rv64_o    = id_ex_inst_is_rv64_r    ;
    assign id_ex_inst_is_illegal_o = id_ex_inst_is_illegal_r ;

endmodule