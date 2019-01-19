`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:32:19 12/11/2018 
// Design Name: 
// Module Name:    exception 
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
module exception(
    input Clk,
    input Reset,
	 input [31:0] IRM,
	 input [31:0] D2write,
	 input [31:0] PC4M,
	 input [31:0] IRW,
	 input [6:2] ExcCode,
	 input [7:2] HWInt,
	 output EXLSet, 
	 output [31:0] EPC,
	 output [31:0] Dread
    );

	`include "header_expint.v"
	`include "header_ind.v"
	
	wire EXL, iseret, cp0_we, IntReq;
	assign EXLSet = ((~EXL && ExcCode != `ExcCode_default) || IntReq) ? 1'b1 : 1'b0;
	wire [6:2] ExcCode_int;
	assign ExcCode_int = (IntReq) ? `ExcCode_int : ExcCode;
	
	cp0 CP0 (
    .Addr(IRM[`rd]), 
    .Din(D2write), 
    .PC4M(PC4M), 
    .IRW(IRW), 
    .ExcCodeM(ExcCode_int), 
    .HWInt(HWInt), 
    .We(cp0_we), 
    .EXLSet(EXLSet), 
    .EXLClr(iseret), 
    .Clk(Clk), 
    .Reset(Reset), 
    .IntReq(IntReq), 
    .ePC(EPC), 
	 .exl(EXL),
    .Dout(Dread)
    );
	 
	ctrl controllerExp (
    .instr(IRM),
    .iseret(iseret), 
    .cp0_we(cp0_we)
    );

endmodule
