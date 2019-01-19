`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:28:04 12/03/2018 
// Design Name: 
// Module Name:    M 
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
module M(
    input [31:0] IRM,
    input [31:0] PC4M,
    input [31:0] AOM,
    input [31:0] RTM,
    input Clk,
	 input Clk2,
    input Reset,
    output reg [31:0] IRW,
    output reg [31:0] PC4W,
    output reg [31:0] AOW,
    output reg [31:0] DRW,
    input [2:0] Forward_RT_M_Sel,
    input [31:0] MUX_RF_WD_OUT,
	 output [31:0] D2write,
	 input [31:0] Dread_exp,
	 input exp_in,
	 input [6:2] ExcCodeM,
	 output [6:2] ExcCode,
	 output [3:0] Be,
	 input [31:0] PrRD,
	 output [31:2] PrAddr,
	 output [31:0] PrWD,
	 output PrWe
    );
	
	`include "header_addr.v"
	`include "header_debug.v"
	
	wire [31:0] MF_RT_M_OUT, Dout;
	wire [1:0] BEOp;
	wire MemWrite;
	
	wire iscp0;
	assign D2write = MF_RT_M_OUT;
	assign PrAddr = AOM[31:2];
	assign PrWD = MF_RT_M_OUT;
	assign PrWe = MemWrite;
	
	always @(posedge Clk) begin
		if (Reset || exp_in) begin
			IRW = 32'b0;
			PC4W = 32'b0;
			AOW = 32'b0;
			DRW = 32'b0;
		end else begin
			IRW = IRM;
			PC4W = PC4M;
			AOW = AOM;
			DRW = (iscp0) ? Dread_exp : 
						($unsigned(AOM) >= `data_start && $unsigned(AOM) < `data_end) ? Dout :
						($unsigned(AOM) >= `external_start && $unsigned(AOM) < `external_end) ? PrRD :
						`debug_drw;
		end
	end

	expM EXPM (
    .ExcCodeM(ExcCodeM), 
    .AOM(AOM), 
    .IRM(IRM), 
	 .Be(Be),
    .ExcCode(ExcCode)
    );
	
	ctrl controllerM (
    .instr(IRM),
    .MemWrite(MemWrite), 
	 .BEOp(BEOp), 
	 .iscp0(iscp0)
    );
	
	be BE (
    .Addr(AOM[1:0]), 
    .BEOp(BEOp), 
    .Be(Be)
    );
	
	dm DMM (
    .Addr(AOM), 
    .Din(MF_RT_M_OUT), 
	 .Be(Be), 
    .We(MemWrite && ~exp_in), 
    .Clk(Clk2), 
    .Dout(Dout)
    );
	 
	mf MF_RT_M (
    .Wd(MUX_RF_WD_OUT), 
    .Rd(RTM), 
    .Forward_Sel(Forward_RT_M_Sel), 
    .MF_OUT(MF_RT_M_OUT)
    );

endmodule
