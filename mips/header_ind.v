// Instr
`define OpCode 31:26
`define rs 25:21
`define rt 20:16
`define rd 15:11
`define Shamt 10:6
`define Funct 5:0
`define imm 15:0
`define instr_index 25:0

// Data
`define nibble0 3:0
`define nibble1 7:4
`define nibble2 11:8
`define nibble3 15:12
`define nibble4 19:16
`define nibble5 23:20
`define nibble6 27:24
`define nibble7 31:28

`define byte0 7:0
`define byte1 15:8
`define byte2 23:16
`define byte3 31:24

`define half0 15:0
`define half1 31:16

`define word 31:0