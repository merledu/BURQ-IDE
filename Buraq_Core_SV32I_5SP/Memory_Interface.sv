`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/21/2019 03:38:28 PM
// Design Name: BSV32I_SSC
// Module Name: Memory_Interface
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


module Memory_Interface#(
parameter DataWidth=32,
parameter AddrWidth=10
)
(
        input  clock,
        input  readEn_A,readEn_B,                               //A is Instruction Memory
        input  writeEn_A,writeEn_B,                             //B is Data Memory
        input  [DataWidth-1:0]DataIn_A,DataIn_B,
        input  [AddrWidth-1:0]Address_A,Address_B,
        output logic [DataWidth-1:0]DataOut_A,DataOut_B
);

Memory #(DataWidth,AddrWidth) Memory
(
    .clock(clock),
    .readEn_A(readEn_A),
    .readEn_B(readEn_B),
    .writeEn_A(writeEn_A),
    .writeEn_B(writeEn_B),
    .DataIn_A(DataIn_A),
    .DataIn_B(DataIn_B),
    .Address_A(Address_A),
    .Address_B(Address_B),
    .DataOut_A(DataOut_A),
    .DataOut_B(DataOut_B)
);

endmodule:Memory_Interface
