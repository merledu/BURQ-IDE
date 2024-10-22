`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/20/2019 11:51:23 PM
// Design Name: BSV32I_SSC
// Module Name: ALU
// Project Name: BURAQ
// Target Devices: ATRY 7 A35 T
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module ALU#(parameter DataWidth=32)
(
    input [DataWidth-1:0]operand_A,
    input [DataWidth-1:0]operand_B,
    input [5:0]ALU_Control,
    output logic [DataWidth-1:0]ALU_result
    //output logic branch
);

wire [4:0]shamt = operand_B[4:0];

//always_comb begin

//   assign branch = ((ALU_Control[4:3] == 2'b10) & (ALU_result == 32'b1))? 1: 0;  

   assign ALU_result   = 
            (ALU_Control == 6'b000_000)? operand_A + operand_B:                /* ADD, ADDI*/
            (ALU_Control == 6'b001_000)? operand_A - operand_B:                /* SUB */
            (ALU_Control == 6'b000_100)? operand_A ^ operand_B:                /* XOR, XORI*/
            (ALU_Control == 6'b000_110)? operand_A | operand_B:                /* OR, ORI */
            (ALU_Control == 6'b000_111)? operand_A & operand_B:                /* AND, ANDI */
            (ALU_Control == 6'b000_010)? {31'd0,(operand_A < operand_B)}:                /* SLT, SLTI */
            (ALU_Control == 6'b000_011)? {31'd0,(operand_A < operand_B)}:                /* SLTU, SLTIU */
            (ALU_Control == 6'b000_001)? operand_A << shamt:                   /* SLL, SLLI => 0's shifted in from right */
            (ALU_Control == 6'b000_101)? operand_A >> shamt:                   /* SRL, SRLI => 0's shifted in from left */
            (ALU_Control == 6'b001_101)? operand_A >> shamt:                   /* SRA, SRAI => sign bit shifted in from left */
            (ALU_Control == 6'b011_111)? operand_A:                            /* operand_A = PC+4 for JAL   and JALR */
            (ALU_Control == 6'b010_000)? {31'd0,(operand_A == operand_B)}:             /* BEQ */
            (ALU_Control == 6'b010_001)? {31'd0,(operand_A != operand_B)}:             /* BNE */
            (ALU_Control == 6'b010_100)? {31'd0,(operand_A < operand_B)}:              /* BLT */
            (ALU_Control == 6'b010_101)? {31'd0,(operand_A >= operand_B)}:             /* BGE */
            (ALU_Control == 6'b010_110)? {31'd0,(operand_A < operand_B)}:              /* BLTU */
            (ALU_Control == 6'b010_111)? {31'd0,(operand_A >= operand_B)}: 32'd0;          /* BGEU */

//end

endmodule:ALU