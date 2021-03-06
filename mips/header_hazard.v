`define mf_pc4e 3'b100
`define mf_ao 3'b011
`define mf_pc4m 3'b010
`define mf_wd 3'b001
`define mf_rd 3'b000

`define hzd_nop 4'b0000
`define hzd_cal_r 4'b0001
`define hzd_cal_i 4'b0010
`define hzd_load 4'b0011
`define hzd_store 4'b0100
`define hzd_b 4'b0101
`define hzd_j 4'b0110
`define hzd_jr 4'b0111
`define hzd_jal 4'b1000
`define hzd_jalr 4'b1001
`define hzd_cp0_load 4'b1101
`define hzd_cp0_store 4'b1110
`define hzd_default 4'b1111