.ktext 0x00004180
lw $t7, 0x7f2c
sw $t7, 0x7f38

andi $s3, $t7, 0xf0000000
srl $s3, $s3, 28
subi $s4, $s3, 10
bltz $s4, num_1
	nop
	addi $s5, $s4, 65
	beq $0, $0, over_1
	nop
num_1:
addi $s5, $s3, 48
over_1:
sw $s5, 0($k1)
addi $k1, $k1, 4
bne $k1, $a1, if_end_1
	nop
	move $k1, $a0
if_end_1:

andi $s3, $t7, 0x0f000000
srl $s3, $s3, 24
subi $s4, $s3, 10
bltz $s4, num_2
	nop
	addi $s5, $s4, 65
	beq $0, $0, over_2
	nop
num_2:
addi $s5, $s3, 48
over_2:
sw $s5, 0($k1)
addi $k1, $k1, 4
bne $k1, $a1, if_end_2
	nop
	move $k1, $a0
if_end_2:

andi $s3, $t7, 0x00f00000
srl $s3, $s3, 20
subi $s4, $s3, 10
bltz $s4, num_3
	nop
	addi $s5, $s4, 65
	beq $0, $0, over_3
	nop
num_3:
addi $s5, $s3, 48
over_3:
sw $s5, 0($k1)
addi $k1, $k1, 4
bne $k1, $a1, if_end_3
	nop
	move $k1, $a0
if_end_3:

andi $s3, $t7, 0x000f0000
srl $s3, $s3, 16
subi $s4, $s3, 10
bltz $s4, num_4
	nop
	addi $s5, $s4, 65
	beq $0, $0, over_4
	nop
num_4:
addi $s5, $s3, 48
over_4:
sw $s5, 0($k1)
addi $k1, $k1, 4
bne $k1, $a1, if_end_4
	nop
	move $k1, $a0
if_end_4:

andi $s3, $t7, 0xf000
srl $s3, $s3, 12
subi $s4, $s3, 10
bltz $s4, num_5
	nop
	addi $s5, $s4, 65
	beq $0, $0, over_5
	nop
num_5:
addi $s5, $s3, 48
over_5:
sw $s5, 0($k1)
addi $k1, $k1, 4
bne $k1, $a1, if_end_5
	nop
	move $k1, $a0
if_end_5:

andi $s3, $t7, 0x0f00
srl $s3, $s3, 8
subi $s4, $s3, 10
bltz $s4, num_6
	nop
	addi $s5, $s4, 65
	beq $0, $0, over_6
	nop
num_6:
addi $s5, $s3, 48
over_6:
sw $s5, 0($k1)
addi $k1, $k1, 4
bne $k1, $a1, if_end_6
	nop
	move $k1, $a0
if_end_6:

andi $s3, $t7, 0x00f0
srl $s3, $s3, 4
subi $s4, $s3, 10
bltz $s4, num_7
	nop
	addi $s5, $s4, 65
	beq $0, $0, over_7
	nop
num_7:
addi $s5, $s3, 48
over_7:
sw $s5, 0($k1)
addi $k1, $k1, 4
bne $k1, $a1, if_end_7
	nop
	move $k1, $a0
if_end_7:

andi $s3, $t7, 0x000f
subi $s4, $s3, 10
bltz $s4, num_8
	nop
	addi $s5, $s4, 65
	beq $0, $0, over_8
	nop
num_8:
addi $s5, $s3, 48
over_8:
sw $s5, 0($k1)
addi $k1, $k1, 4
bne $k1, $a1, if_end_8
	nop
	move $k1, $a0
if_end_8:

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
nop # op = [add, sub, and, or, xor, srlv, srlv, srav]

li $t0, 0x8001 # {16'b0, IM[7:2](100000), 8'b0, EXL, IE}
mtc0 $t0, $12
li $t0, 0x20 # extract ts 0x7f20 {26'b0, ts, 4'b0, rs}
li $a0, 0x0 # queue start
li $a1, 0x1000 # queue end
move $k0, $a0 # current data to sent
move $k1, $a0 # current data read
la $ra, start
start:
	beq $k0, $k1, start
		nop
	lw $t1, 0x7f20
	and $t1, $t1, $t0
	bne $t1, $t0, start
		nop
	lw $t2, 0($k0)
	sw $t2, 0x7f10
	addi $k0, $k0, 4
	bne $k0, $a1, if_1_end
		nop
		move $k0, $a0
	if_1_end:
jr $ra
nop