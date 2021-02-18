`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/06/2020 01:30:03 PM
// Design Name: 
// Module Name: UnConditional_Forwarding
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

module UnConditional_Forwarding#
(
parameter DataWidth = 32, 
parameter RegAddrWidth = 5
)
(   
    input Reg_File_EN_Execute_stage,
    input Reg_File_EN_Memory_stage,
    input Reg_File_EN_WrBk_stage,
    input [RegAddrWidth-1:0]WriteBack_reg_Execute_stage,
    input [RegAddrWidth-1:0]WriteBack_reg_Memory_stage,
    input [RegAddrWidth-1:0]WriteBack_reg_WrBk_stage,
    input [RegAddrWidth-1:0]IF_ID_RS1,
    input [RegAddrWidth-1:0]IF_ID_RS2,
    
    output logic [1:0]Operand_A_control,
    output logic [1:0]Operand_B_control   
);

always_comb begin
    if((WriteBack_reg_Memory_stage == IF_ID_RS1) && Reg_File_EN_Memory_stage == 1'b1)
        Operand_A_control = 2'b01;
    else
    if ((WriteBack_reg_WrBk_stage == IF_ID_RS1) && Reg_File_EN_WrBk_stage == 1'b1)
        Operand_A_control = 2'b10;
    else
    if ((WriteBack_reg_Execute_stage == IF_ID_RS1) )//&& Reg_File_EN_Execute_stage == 1'b1)
        Operand_A_control = 2'b11;
    else
        Operand_A_control = 2'b00;
end


always_comb begin
    if((WriteBack_reg_Memory_stage == IF_ID_RS2) && Reg_File_EN_Memory_stage == 1'b1)
        Operand_B_control = 2'b01;
    else
    if ((WriteBack_reg_WrBk_stage == IF_ID_RS2) && Reg_File_EN_WrBk_stage == 1'b1)
        Operand_B_control = 2'b10;
    else
    if ((WriteBack_reg_Execute_stage == IF_ID_RS2) && Reg_File_EN_Execute_stage == 1'b1)
        Operand_B_control = 2'b11;
    else
        Operand_B_control = 2'b00;
end

endmodule: UnConditional_Forwarding
