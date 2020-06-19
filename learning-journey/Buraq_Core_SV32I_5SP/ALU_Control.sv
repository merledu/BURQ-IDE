`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/21/2019 12:51:01 AM
// Design Name: BSV32I_SSC
// Module Name: ALU_Control
// Project Name: BURAQ
// Target Devices: Arty A7 35T
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


module ALU_Control
(
    input [2:0]func3,
    input [1:0] func7,
    input [2:0]ALU_Operation,
    output logic [5:0]ALU_Control
);
 
always_comb begin   
     ALU_Control = (ALU_Operation == 3'b011)? 
               6'b011_111 :      //pass for JAL and JALR
                      
               (ALU_Operation == 3'b010)? 
               {3'b010,func3} : //branches
               
               //R Type instructions
               ({ALU_Operation, func7} == {3'b000, 2'b00})? 
               {3'b000,func3} : 
               ({ALU_Operation, func7} == {3'b000, 2'b01})? 
               {3'b001,func3} :
                                         
               //I Type instructions
               ({ALU_Operation, func3, func7} == {3'b001, 3'b101, 2'b00})? 
               {3'b000,func3} : 
               ({ALU_Operation, func3, func7} == {3'b001, 3'b101, 2'b01})? 
               {3'b001,func3} : 
               ({ALU_Operation, func3} == {3'b001, 3'b101})? 
               {3'b000,func3} : 
               (ALU_Operation == 3'b001)?                  
               {3'b000,func3} : 
               6'b000_000;      // load/store    (addition)
 end
endmodule:ALU_Control
