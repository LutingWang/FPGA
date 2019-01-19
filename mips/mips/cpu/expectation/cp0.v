`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:50:39 12/10/2018 
// Design Name: 
// Module Name:    cp0 
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
module cp0(
    input [4:0] Addr,
    input [31:0] Din,
    input [31:0] PC4M,
    input [31:0] IRW,
    input [6:2] ExcCodeM,
    input [15:10] HWInt,
    input We,
	 input EXLSet,
    input EXLClr,
    input Clk,
    input Reset,
    output IntReq,
    output [31:0] ePC,
	 output exl,
    output [31:0] Dout
    );
	 
	`include "header_expint.v"
	`include "header_ctrl.v"
	`include "header_debug.v"
	 
	//SR
	reg [7:2] IM;
	reg EXL, IE;
	assign exl = EXL;
	//Cause
	reg BD;
	reg [7:2] IP;
	reg [6:2] ExcCode;
	//EPC
	reg [31:2] EPC;
	assign ePC = {EPC, 2'b00};
	//PrID
	//reg [31:0] PrID;
	
	assign Dout = ({1'b1, Addr} == `cp0_sr) ? {16'b0, IM[7:2], 8'b0, EXL, IE} :
						({1'b1, Addr} == `cp0_cause) ? {BD, 15'b0, IP[7:2], 3'b0, ExcCode[6:2], 2'b0} :
						({1'b1, Addr} == `cp0_epc) ? {EPC, 2'b00} :
						({1'b1, Addr} == `cp0_prid) ? `PrID :
						`debug_cp0;
	
	wire [3:0] ic;
	
	assign IntReq = (|(HWInt & IM) && IE && ~EXL) ? 1'b1 : 1'b0;
	
	integer i;
	
	always @(posedge Clk) begin
		if (Reset) begin
			IM = 6'b0;
			EXL = 1'b0;
			IE = 1'b0;
			BD = 1'b0;
			IP = 6'b0;
			ExcCode = `ExcCode_default;
			EPC = 1'b0;
		end else begin
			if (~EXL)
				IP = HWInt;
			if (EXLSet || IntReq) begin
				//sr
				EXL = 1'b1;
				//cause
				BD = ((ic == `hzd_b) || (ic == `hzd_j && IRW != `eret) || ic == `hzd_jr || ic == `hzd_jal || ic == `hzd_jalr) ? 1'b1 : 1'b0;
				ExcCode = ExcCodeM;
				//epc
				EPC = ((BD) ? PC4M - 8 : PC4M - 4) >> 2;
			end else if (EXLClr) begin
				EXL = 1'b0;
			end else if (We) begin
				case ({1'b1, Addr})
					`cp0_sr: begin
						IM = Din[15:10];
						{EXL, IE} = {Din[1:0]};
					end
					`cp0_epc: EPC = Din >> 2;
				endcase
			end
		end
	end
	
	ctrl atCP0 (
    .instr(IRW), 
    .ic(ic)
    );


endmodule
