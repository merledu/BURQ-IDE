`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/21/2019 06:44:56 PM
// Design Name: BSV32I_SSC
// Module Name: WriteBack
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


module WriteBack#(
parameter DataWidth=32,
parameter RegAddrWidth=10
)
(
    input [RegAddrWidth-1:0]writeback_reg,
    input memtoreg,
    input [DataWidth-1:0]Data_from_ALU,
    input [DataWidth-1:0]Data_from_Mem,
    output logic [DataWidth-1:0]WriteBackData,
    output logic [RegAddrWidth-1:0]writeBack_reg
);

always_comb begin
    if(memtoreg)
        WriteBackData = Data_from_Mem;
    else
        WriteBackData = Data_from_ALU;
end

assign writeBack_reg = writeback_reg;

endmodule:WriteBack
