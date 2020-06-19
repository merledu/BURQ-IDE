`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Merl
// Engineer: 
// 
// Create Date: 12/22/2019 11:02:40 AM
// Design Name: BSV32I_SSC
// Module Name: Testing_Module
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


module Testing_Module #(
parameter DataWidth=32,
parameter AddrWidth=10,
parameter RegAddrWidth=5
)
(
    input  clock_in,
    input  reset,
    output logic led1a,led1b,led1c,led1d,led1e,led1f,led1g,
           led2a,led2b,led2c,led2d,led2e,led2f,led2g,
           led3a,led3b,led3c,led3d,led3e,led3f,led3g   
);

logic clock;
logic [DataWidth-1:0]top_io_reg_7;

clock_wizard clk_wiz
(
    .clock_in(clock_in),
    .clock(clock)
);

RISCV32I_SV #(DataWidth,AddrWidth,RegAddrWidth) RV_core
(
        .clock(clock),
        .reset(reset),
        .program_in(32'b0),
        .address_in(10'd0),
        .Reg_Out(top_io_reg_7)
);

segmentTop seg4(
         .clock(clock),      //  1,2,3,5,8,d,15,22,37,59,90,E9,179,262,3dB,63d
         .reset(reset),
         .fibo(top_io_reg_7),
         .led1a(led1a),
         .led1b(led1b),
         .led1c(led1c),
         .led1d(led1d),
         .led1e(led1e),
         .led1f(led1f),
         .led1g(led1g),
         
         .led2a(led2a),
         .led2b(led2b),
         .led2c(led2c),
         .led2d(led2d),
         .led2e(led2e),
         .led2f(led2f),
         .led2g(led2g),
         
         .led3a(led3a),
         .led3b(led3b),
         .led3c(led3c),
         .led3d(led3d),
         .led3e(led3e),
         .led3f(led3f),
         .led3g(led3g) 
      );     
 
endmodule: Testing_Module
