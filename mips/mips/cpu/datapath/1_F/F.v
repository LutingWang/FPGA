`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:48:02 12/03/2018 
// Design Name: 
// Module Name:    F 
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
module F(
    input [31:0] NPC,
    input [1:0] NPC_Sel,
	 input Branch,
	 input [31:0] MF_RS_D_OUT,
    input Clk,
	 input Clk2,
    input Reset,
    input StallF,
    input StallD,
    output reg [31:0] IRD,
    output reg [31:0] PC4D,
	 input exp_in,
	 input iseretD,
	 input [31:0] EPC,
	 output reg [6:2] ExcCodeF
    );
	 
	`include "header_addr.v"
	`include "header_expint.v"
	`include "header_debug.v"

	wire [31:0] PCF_OUT, Instr, PC4, MUX_PC_OUT, NPC_exp;
	wire [6:2] ExcCode;
	assign PC4 = PCF_OUT + 4;
	assign NPC_exp = (exp_in) ? `handler_start :
								(iseretD) ? EPC :
								MUX_PC_OUT;
	
	always @(posedge Clk) begin
		if (Reset || exp_in) begin
			IRD = 32'b0;
			PC4D = 32'b0;
			ExcCodeF = `ExcCode_default;
		end else if (iseretD && ~StallD) begin
			IRD = 32'b0;
			PC4D = EPC + 4;
			ExcCodeF = `ExcCode_default;
		end else if (~StallD) begin
			IRD = (ExcCode == `ExcCode_adel) ? `debug_adel_instr : Instr;
			PC4D = PC4;
			ExcCodeF = ExcCode;
		end
	end
	
	expF EXPF (
    .PC(PCF_OUT), 
    .ExcCodeF(ExcCode)
    );
	
	pc PCF (
    .NPC(NPC_exp), 
    .Clk(Clk), 
    .Reset(Reset), 
    .En(exp_in || ~StallF), 
    .PC(PCF_OUT)
    );
	
	im IMF (
    .Addr(PCF_OUT), 
	 .Clk(Clk2),
    .Instr(Instr)
    );
	
	MUX_PC mux_pc_F (
    .add4(PC4), 
    .NPC(NPC), 
    .mf(MF_RS_D_OUT), 
    .NPC_Sel(NPC_Sel), 
    .Branch(Branch), 
    .MUX_PC_OUT(MUX_PC_OUT)
    );
endmodule
