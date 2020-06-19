`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/04/2020 05:33:50 PM
// Design Name: 
// Module Name: EX_MEM
// Project Name: 
// Target Devices: 
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


module EX_MEM#(
parameter DataWidth = 32,
parameter AddrWidth = 10,
parameter RegAddrWidth =5
)
(   
    input clock,
    input reset,
    input MEM_to_REG_IN,
    input MEM_READ_IN,
    input MEM_WRITE_IN,
    input Reg_EN_IN,
    input [DataWidth-1:0]ALU_Result_IN,
    input [AddrWidth-1:0]D_MEM_ADDR_IN,
    input [DataWidth-1:0]DataIN_MEM_IN,
    input [RegAddrWidth-1:0]WB_REG_IN,
    
    output logic MEM_to_REG_OUT,
    output logic MEM_READ_OUT,
    output logic MEM_WRITE_OUT,
    output logic Reg_EN_OUT,
    output logic [DataWidth-1:0]ALU_Result_OUT,
    output logic [AddrWidth-1:0]D_MEM_ADDR_OUT,
    output logic [DataWidth-1:0]DataIN_MEM_OUT,
    output logic [RegAddrWidth-1:0]WB_REG_OUT
);

always @(posedge clock)begin
    if(reset)begin
        Reg_EN_OUT     <= 1'b0;
        WB_REG_OUT     <= 5'b0;
        MEM_READ_OUT   <= 1'b0;
        MEM_WRITE_OUT  <= 1'b0;
        MEM_to_REG_OUT <= 1'b0;
        ALU_Result_OUT <= 32'd0;
        D_MEM_ADDR_OUT <= 10'd0;
        DataIN_MEM_OUT <= 32'd0;
    end
    else begin
        Reg_EN_OUT     <= Reg_EN_IN;
        WB_REG_OUT     <= WB_REG_IN;
        MEM_READ_OUT   <= MEM_READ_IN;
        MEM_WRITE_OUT  <= MEM_WRITE_IN;
        MEM_to_REG_OUT <= MEM_to_REG_IN;
        ALU_Result_OUT <= ALU_Result_IN;
        D_MEM_ADDR_OUT <= D_MEM_ADDR_IN;
        DataIN_MEM_OUT <= DataIN_MEM_IN;
    end
end
endmodule: EX_MEM