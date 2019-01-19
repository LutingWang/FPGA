`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:33:02 12/16/2018 
// Design Name: 
// Module Name:    loadExt 
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
module LoadExt(
    input [31:0] Dr,
    input [1:0] Addr,
    input [1:0] BEOp,
    input LoadExtOp,
    output reg [31:0] Ext
    );
	 
	`include "header_ctrl.v"
	 
	always @(*) begin
		case (BEOp) 
			`be_byte: begin
				case (Addr)
					2'b00: Ext = (LoadExtOp == `load_ext_signed) ? {{24{Dr[7]}}, Dr[7:0]} : {24'b0, Dr[7:0]};
					2'b01: Ext = (LoadExtOp == `load_ext_signed) ? {{24{Dr[15]}}, Dr[15:8]} : {24'b0, Dr[15:8]};
					2'b10: Ext = (LoadExtOp == `load_ext_signed) ? {{24{Dr[23]}}, Dr[23:16]} : {24'b0, Dr[23:16]};
					2'b11: Ext = (LoadExtOp == `load_ext_signed) ? {{24{Dr[31]}}, Dr[31:24]} : {24'b0, Dr[31:24]};
				endcase
			end
			`be_half: begin
				case (Addr[1])
					1'b0: Ext = (LoadExtOp == `load_ext_signed) ? {{16{Dr[15]}}, Dr[15:0]} : {16'b0, Dr[15:0]};
					1'b1: Ext = (LoadExtOp == `load_ext_signed) ? {{16{Dr[31]}}, Dr[31:16]} : {16'b0, Dr[31:16]};
				endcase
			end
			`be_word: begin
				Ext = Dr;
			end
			`be_default: begin
				Ext = 32'b0;
			end
		endcase
	end


endmodule
