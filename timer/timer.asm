.ktext 0x00004180
li $t0, 0x8 # {28'b0, IE(1), Mode(00), Enable(0)}
sw $t0, 0x7f00

lw $t0, 0x7f38
blez $t0, stop_cnt
	nop
	subi $t0, $t0, 1
	beq $0, $0, branch_end
	nop
stop_cnt:
	li $t0, 0
branch_end:
sw $t0, 0x7f38

li $t0, 0x9 # {28'b0, IE(1), Mode(00), Enable(1)}
sw $t0, 0x7f00

mtc0 $ra, $14
eret

.text
nop # $cp0_cause = $13 = {BD, 15'b0, IP[7:2], 3'b0, ExcCode[6:2], 2'b0}
nop # HWInt = {IRQ_key, 1'b0, 1'b0, IRQ_switch, IRQ_uart, IRQ_timer}
nop # timer.control 0x7f00
nop # timer.preset  0x7f04
nop # timer.count   0x7f08
nop # uart   0x7f10 - 0x7f2c
nop # switch 0x7f2c - 0x7f34 rd
nop # led    0x7f34 - 0x7f38
nop # tube   0x7f38 - 0x7f40
nop # key    0x7f40 - 0x7f44 op
nop # op = [add, sub, and, or, xor, sllv, srlv, srav]

li $t0, 0x0401 # {16'b0, IM[7:2](000001), 8'b0, EXL, IE}
mtc0 $t0, $12
li $t0, 0x8 # {28'b0, IE(1), Mode(00), Enable(0)}
sw $t0, 0x7f00
li $t0, 20000000 # preset 2 * 10 ^ 7 cycle
sw $t0, 0x7f04
sw $0, 0x7f38
la $ra, start

li $t0, 0x9 # {28'b0, IE(1), Mode(00), Enable(1)}
sw $t0, 0x7f00
start:
# $s0 = tube_data
# $s1 = switch_data
lw $t1, 0x7f2c
beq $t1, $s1, start
	nop
bgez $t1, load
	move $s1, $t1
	li $t1, 0
load:
li $t0, 0x8 # {28'b0, IE(1), Mode(00), Enable(0)}
sw $t0, 0x7f00
move $s0, $t1
sw $s0, 0x7f38
li $t0, 0x9 # {28'b0, IE(1), Mode(00), Enable(1)}
sw $t0, 0x7f00
jr $ra

	
