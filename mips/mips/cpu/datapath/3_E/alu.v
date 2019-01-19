`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:25:22 11/25/2018 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
    input [3:0] ALUOp,
    output reg [31:0] C,
    output N,
    output Z,
    output reg V,
    output reg Carry
    );
	
	`include "header_ctrl.v"
	`include "header_debug.v"

	assign N = C[31];
	assign Z = ~(|C);
	
	reg CS;
	integer i;
	
	always @(*) begin
		case (ALUOp)
			`alu_nop: begin
				C = 32'b0;
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_add: begin
				{CS, C[30:0]} = A[30:0] + B[30:0];
				{Carry, C[31]} = A[31] + B[31] + CS;
				V = CS ^ Carry;
			end
			`alu_sub: begin
				{CS, C[30:0]} = A[30:0] - B[30:0];
				{Carry, C[31]} = A[31] - B[31] - CS;
				V = CS ^ Carry;
			end
			`alu_and: begin
				C = A & B;
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_or: begin
				C = A | B;
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_nor: begin
				C = ~(A|B);
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_xor: begin
				C = A ^ B;
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_lt: begin
				C = ($signed(A)<$signed(B)) ? 32'b1 : 32'b0;
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_ltu: begin
				C = ($unsigned(A)<$unsigned(B)) ? 32'b1 : 32'b0;
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_sll: begin
				C = B;
				for (i=0; i<$unsigned(A[4:0]); i=i+1) C = {C[30:0], 1'b0};
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_sra: begin
				C = B;
				for (i=0; i<$unsigned(A[4:0]); i=i+1) C = {C[31], C[31:1]};
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_srl: begin
				C = B;
				for (i=0; i<$unsigned(A[4:0]); i=i+1) C = {1'b0, C[31:1]};
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_undef_0: begin
				C = `debug_alu_undef_0;
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_undef_1: begin
				C = `debug_alu_undef_1;
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_undef_2: begin
				C = `debug_alu_undef_2;
				CS = 0;
				V = 0;
				Carry = 0;
			end
			`alu_default: begin
				C = `debug_alu;
				CS = 0;
				V = 0;
				Carry = 0;
			end
		endcase
	end

endmodule
