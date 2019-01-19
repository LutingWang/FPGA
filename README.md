# CPU_pipeline

## Overview

This is the final version of ***Project 8 FPGA*** of ***BUAA Computer Organization*** year 2018 - 2019. The project is written in Verilog and is designed handle the MIPS-Lite3 Instruction Set. 

**WARNING: the project is used only for study! Cloning the whole project and submitting it as your project is a serious violation of the course regulations. Cheating will bring about numerous penalties. Moreover, nobody ensures the project being absolutely correct. Please test it before you put into use.** 

## Project Info

The project consists of one 5-stage pipeline CPU, a bridge, a timer, a led driver, a digital tube driver, a switch driver, a user key driver, and a uart driver. It is designed to operate on a FPGA chip, but you should pay special attention to the pin file in /mips to make sure that the project won’t harm because wrongful connection of pins can even burn your chip. 

### File Hierarchy

/mips is the root for the project, while the other folders contain the necessary files to rebuild some of the projects written before (some kind of testing).

### Instruction Set

The project supports nop, sll, srl, sra, sllv, srlv, srav, jr, jalr, add, addu, sub, subu, and, nor, or, xor, slt, sltu, bgez, bltz, beq, bne, blez, bgtz, addi, addiu, slti, sltiu, andi, ori, xori, lui, lb, lh, lw, lbu, lhu, sb, sh, sw, j, jal, mfc0, mtc0, eret.

### Hazard

The model detects instruction conflicts and hazards, and will stall only if it has to. Therefore, the efficiency is maximized under this particular condition.

### Branch Delay

Branch delay is regarded as a normal hardware behavior, meaning that the first instruction following a branch instruction or jump instruction will be unconditionally executed. Eret is not one of the jump instructions and no instruction after eret shall be executed.

### Interupts and Exceptions

The model is designed to be capable of handling interupts and exceptions. Under both occasions, the flow of instructions are redirected into kernel, starting at 0x00004180. The difference is that interupts are generated from external devices, while exceptions are errors happened executing the program. 

In this project, interupts could only come from timer (an external device, whose utilities will be illucinated later). 

Exceptions include AdEL (Fetch or load address alignment error), AdES (Store address alignment error), RI (Execution of a Reserved Instruction), Ov (Arithmetic overflow). Also, jumping into kernel will not be counted as a jump instruction.

### FPGA

For FPGA chip to operate the program, a bit file must be generated and uploaded to the chip. Before that, it is necessary that you upload IM_init.coe and DM_init.coe if you have changed them, otherwise your changes will not work. 

For the reason that the positioning of kernel segment of instruction is done by hand, a python script called coeGen.py is attached to the project. If you have successfully generated code.txt and code_handler.txt in /mips, you can run the script to generate the coe files conveniently.

## Testing

Testing of this project can either be done on a FPGA chip or by examining the wave figure on ISim. It usually takes longer to test on FPGA than ISim. Thus, ISim is generally used to eliminate naïve errors locally. When you are pretty sure that your design is correct, you could upload the bit file and check it one more time on FPGA. Looping the aforementioned actions could get rid of most bugs while saving you a great deal of time.  
