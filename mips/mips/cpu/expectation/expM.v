`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:35 12/10/2018 
// Design Name: 
// Module Name:    expM 
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
module expM(
    input [6:2] ExcCodeM,
    input [31:0] AOM,
    input [31:0] IRM,
	 input [3:0] Be,
    output [6:2] ExcCode
    );

	`include "header_expint.v"
	`include "header_addr.v"
	`include "header_hazard.v"
	
	wire [3:0] ic;
	assign addr_overflow = ~(($unsigned(AOM) >= `data_start && $unsigned(AOM) < `data_end) || 
											($unsigned(AOM) >= `timer_start && $unsigned(AOM) < `timer_end && Be == 4'b1111) || 
											($unsigned(AOM) >= `uart_start && $unsigned(AOM) < `uart_end && Be == 4'b1111) ||
											($unsigned(AOM) >= `switch_start && $unsigned(AOM) < `switch_end && Be == 4'b1111) ||
											($unsigned(AOM) >= `led_start && $unsigned(AOM) < `led_end && Be == 4'b1111) ||
											($unsigned(AOM) >= `tube_start && $unsigned(AOM) < `tube_end) ||
											($unsigned(AOM) >= `key_start && $unsigned(AOM) < `key_end && Be == 4'b1111));
	assign addr_overflow_load = addr_overflow && ic == `hzd_load;
	assign addr_overflow_store = (addr_overflow || AOM == `timer_count_addr) && ic == `hzd_store;
	assign ExcCode = (ExcCodeM != `ExcCode_default) ? ExcCodeM :
								(addr_overflow_load) ? `ExcCode_adel :
								(addr_overflow_store) ? `ExcCode_ades : 
								`ExcCode_default;
	
	ctrl atM (
    .instr(IRM), 
    .ic(ic)
    );

endmodule
