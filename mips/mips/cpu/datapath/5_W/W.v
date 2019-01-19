`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:17:39 12/04/2018 
// Design Name: 
// Module Name:    W_tb 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module W(
    input [31:0] IRW,
    input [31:0] PC4W,
    input [31:0] AOW,
    input [31:0] DRW,
    output [4:0] MUX_RF_A3_OUT,
    output [31:0] MUX_RF_WD_OUT,
	 output RegWrite
    );

	`include "header_ind.v"
	
	wire [31:0] load_ext_out;
	wire [1:0] RegDst, DataSrc, BEOp;
	wire LoadExtOp;
	
	ctrl contorllerW (
    .instr(IRW),
	 .BEOp(BEOp),
	 .LoadExtOp(LoadExtOp),
    .RegDst(RegDst), 
    .DataSrc(DataSrc), 
    .RegWrite(RegWrite)
    );
	 
	MUX_RF_A3 mux_rf_a3_W (
    .A3(IRW[`rd]), 
    .A2(IRW[`rt]), 
    .RegDst(RegDst), 
    .RegDstOut(MUX_RF_A3_OUT)
    );
	 
	LoadExt load_ext (
    .Dr(DRW), 
    .Addr(AOW[1:0]), 
    .BEOp(BEOp), 
    .LoadExtOp(LoadExtOp), 
    .Ext(load_ext_out)
    );
	
	MUX_RF_WD mux_rf_wd_W (
    .C(AOW), 
    .Dout(load_ext_out), 
    .PC(PC4W+4), 
    .DataSrc(DataSrc), 
    .DataSrcOut(MUX_RF_WD_OUT)
    );

endmodule
