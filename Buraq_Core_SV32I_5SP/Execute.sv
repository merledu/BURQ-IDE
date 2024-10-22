`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/21/2019 01:07:46 AM
// Design Name: BSV32I_SSC
// Module Name: Execute
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

module Execute #(
parameter DataWidth=32,
parameter AddrWidth=10,
parameter RegAddrWidth=5
)
(	
    input   clock,reset,
    input  [DataWidth-1:0]DataMemDataIn,
    input  [DataWidth-1:0]Operand_A,
    input  [DataWidth-1:0]Operand_B,
    input  [2:0]Func3,
    input  [1:0]Func7,
    input  [2:0]ALU_op,
    input  memtoreg,writeEn,readEn,regfileEN,
    input  [RegAddrWidth-1:0]writeBack_reg,
    
    output logic [2:0]Func_3,
    output logic Reg_EN,MEM_READ,MEM_WRITE,MEM_to_REG,
    output logic [RegAddrWidth-1:0]WB_REG,
    output logic [DataWidth-1:0]ALU_Result,
    output logic [DataWidth-1:0]ALU_result_delay,
    output logic [AddrWidth-1:0]D_MEM_ADDR,
    output logic [DataWidth-1:0]DataIN_MEM
);

logic [5:0]ALU_MUX_CONTROL;
logic [AddrWidth-1:0]Mem_addr;

ALU #(DataWidth)alu
(
    .operand_A(Operand_A),  
    .operand_B(Operand_B),
    .ALU_Control(ALU_MUX_CONTROL),
    .ALU_result(ALU_Result)
);

ALU_Control aluControl
(
    .func3(Func3),
    .func7(Func7),
    .ALU_Operation(ALU_op),
    .ALU_Control(ALU_MUX_CONTROL)
);

//assign Mem_addr = (ALU_Result > 4 ) ? ALU_Result[11:2] : ALU_Result ;  //address for memory
assign Mem_addr = ALU_Result[9:0] ;  //address for memory

////////////////////////////////////////////////////////////////////////////
always @(posedge clock)begin
    if(reset)begin
        Reg_EN    	 <= 1'b0;
        WB_REG    	 <= 5'b0;
        MEM_READ  	 <= 1'b0;
        MEM_WRITE 	 <= 1'b0;
        MEM_to_REG	 <= 1'b0;
        ALU_result_delay <= 32'd0;
        D_MEM_ADDR	 <= 10'd0;
        DataIN_MEM	 <= 32'd0;
        Func_3           <= 3'd0;
    end
    else begin
        Reg_EN           <= regfileEN;
        WB_REG     	 <= writeBack_reg;
        MEM_READ    	 <= readEn;
        MEM_WRITE  	 <= writeEn;
        MEM_to_REG 	 <= memtoreg;
        ALU_result_delay <= ALU_Result;
        D_MEM_ADDR	 <= Mem_addr;
        DataIN_MEM	 <= DataMemDataIn;
        Func_3           <= Func3;
    end
end

endmodule:Execute