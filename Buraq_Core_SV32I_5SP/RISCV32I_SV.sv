`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/22/2019 01:37:48 AM
// Design Name: BSV32I_SSC
// Module Name: RISCV32I_SV
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

module RISCV32I_SV #(
parameter DataWidth=32,
parameter AddrWidth=10,
parameter RegAddrWidth=5
)
(   
    input  clock,
    input  reset,
    input  [DataWidth-1:0]program_in,
    input  [AddrWidth-1:0]address_in,
    output logic [DataWidth-1:0]Reg_Out
);

logic [DataWidth-1:0]Ins_mem_out;
logic [DataWidth-1:0]D_mem_out;
logic [DataWidth-1:0]Ins_mem_data_in;
logic [DataWidth-1:0]D_mem_data_in;
logic [AddrWidth-1:0]Ins_mem_addr_in;
logic [AddrWidth-1:0]D_mem_addr_in;
logic [2:0]function3;
logic Ins_mem_readEn;
logic D_mem_readEn;
logic Ins_mem_writeEn;
logic D_mem_writeEn;

BSV32I_SSC#(DataWidth,AddrWidth,RegAddrWidth)Core
(
        .clock(clock),
        .reset(reset),
        .program_in(program_in),
        .address_in(address_in),
        .Inst_mem_dataOut(Ins_mem_out),
        .Data_mem_dataOut(D_mem_out),
        //OUTPUTS//
        .func3(function3),
        .Inst_mem_dataIn(Ins_mem_data_in),
        .Data_mem_dataIn(D_mem_data_in),
        .Inst_mem_address(Ins_mem_addr_in),
        .Data_mem_address(D_mem_addr_in),
        .Inst_mem_read_en(Ins_mem_readEn),
        .Data_mem_read_en(D_mem_readEn),
        .Inst_mem_write_en(Ins_mem_writeEn),
        .Data_mem_write_en(D_mem_writeEn),
        .reg_out(Reg_Out)
);

DCCM#(DataWidth,AddrWidth)DataMemory
(
        .clock(clock),
        .readEn(D_mem_readEn),        
        .writeEn(D_mem_writeEn),
        .func_3(function3),       
        .DataIn(D_mem_data_in),
        .Address(D_mem_addr_in),
        //OUTPUT//
        .DataOut(D_mem_out)
);

ICCM#(DataWidth,AddrWidth)InstructionMemory
(
    .clock(clock),
    .address(Ins_mem_addr_in), 
    .i_write(Ins_mem_writeEn),
    .i_data(Ins_mem_data_in),
    //OUTPUT//
    .readData(Ins_mem_out)    
);

endmodule: RISCV32I_SV