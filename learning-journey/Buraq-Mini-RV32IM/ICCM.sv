`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/28/2019 10:43:10 AM
// Design Name: Buraq-Mini-RV32IM
// Module Name: ICCM
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


module ICCM#(
parameter DataWidth=32,
parameter AddrWidth=15
)(
    input brq_clk,
    input [AddrWidth-1:0] address, 
    input i_write,
    input i_read,
    input [DataWidth-1:0] i_data,
    output logic [DataWidth-1:0] readData    
    );

    localparam DEPTH = 2**AddrWidth;
    logic [DataWidth-1:0] memory_array [0:DEPTH-1];

    initial begin
    
       $readmemh("/home/monis/learning-journey/Buraq-Mini-RV32IM/hex_memory_file.mem",memory_array);

     end    
    
 always @(posedge brq_clk) begin
     if(i_write) begin
         memory_array[address] <= i_data;
     end
end
 always @(*) begin
     if(i_read) 
         readData = memory_array[address];
end     
endmodule: ICCM
