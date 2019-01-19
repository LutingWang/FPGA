`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:31:56 12/11/2018 
// Design Name: 
// Module Name:    bridge 
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
module bridge(
    input [3:0] Be,
	 input [31:2] PrAddr,
    output [31:0] PrRD,
    input [31:0] PrWD,
    input PrWe,
    output [1:0] timer_addr, // timer
    input [31:0] timer_RD,
    output [31:0] timer_WD,
    output timer_We,
	 output [2:0] uart_addr, // uart
	 input [31:0] uart_RD, 
	 output [31:0] uart_WD,
	 output uart_We,
	 output uart_Sel,
	 output switch_addr, // switch
	 input [31:0] switch_RD,
	 input [31:0] led_RD, // led
	 output [31:0] led_WD,
	 output led_We,
	 output [3:0] tube_Be, // tube
	 output tube_addr,
	 input [31:0] tube_RD,
	 output [31:0] tube_WD,
	 output tube_We,
	 input [31:0] key_RD // key
    );
	 
	`include "header_addr.v"
	`include "header_debug.v"

	wire [31:0] addr;
	assign addr = {PrAddr, 2'b0};
	
	assign timer_hit = (addr >= `timer_start && addr < `timer_end);
	assign uart_hit = (addr >= `uart_start && addr < `uart_end);
	assign switch_hit = (addr >= `switch_start && addr < `switch_end);
	assign led_hit = (addr >= `led_start && addr < `led_end);
	assign tube_hit = (addr >= `tube_start && addr < `tube_end);
	assign key_hit = (addr >= `key_start && addr < `key_end);
	
	assign timer_addr = addr[3:2];
	assign timer_WD = PrWD;
	assign timer_We = (PrWe && timer_hit);
	
	assign uart_addr = (addr - `uart_start) >> 2;
	assign uart_WD = PrWD;
	assign uart_We = (PrWe && uart_hit);
	assign uart_Sel = uart_hit;
	
	assign switch_addr = (addr == `switch_start) ? 1'b0 :
								(addr == `switch_start + 4) ? 1'b1 :
								1'b0;
	
	assign led_WD = PrWD;
	assign led_We = (PrWe && led_hit);
	
	assign tube_Be = Be;
	assign tube_addr = (addr == `tube_start) ? 1'b0 : 1'b1;
	assign tube_WD = PrWD;
	assign tube_We = (PrWe && tube_hit);
	
	assign PrRD = (timer_hit) ? timer_RD :
							(uart_hit) ? uart_RD :
							(switch_hit) ? switch_RD :
							(led_hit) ? led_RD :
							(tube_hit) ? tube_RD :
							(key_hit) ? key_RD : 
							`debug_bridge;
	

endmodule
