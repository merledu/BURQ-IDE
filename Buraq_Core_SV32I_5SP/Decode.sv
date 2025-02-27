`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/20/2019 07:26:31 PM
// Design Name: BSV32I_SSC
// Module Name: Decode
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


module Decode#(
parameter DataWidth=32,
parameter RegAddrWidth=5
)
(
    input clock,
    input reset,
    input regEN_EX,regEN_MEM,regEN_WB,Memory_Read_EN,
    input [RegAddrWidth-1:0]destReg_EX,destReg_MEM,destReg_WB,
    input [DataWidth-1:0]Forwarded_Data_EX,Forwarded_Data_MEM1,Forwarded_Data_MEM2,Forwarded_Data_WB,
    input [DataWidth-1:0]Instruction_IN,
    input [DataWidth-1:0]PC,
    input [DataWidth-1:0]writeBackData,                 // comes after WB-stage

    output logic Branch,
    output logic regWriteEn,
    output logic [RegAddrWidth-1:0]writeBackReg,   // goes to EX-stage then go to MEM,WB
    output logic memRead,memtoReg,memWrite,FLUSH_REG,
    output logic [2:0] ALUOp,
    output logic [1:0]next_PC_sel,
    output logic [2:0]function3,
    output logic [1:0]function7,
    output logic [DataWidth-1:0]BRANCH_TARGET,JAL_TARGET,JALR_TARGET,
    output logic [DataWidth-1:0]alu_src1,
    output logic [DataWidth-1:0]alu_src2,
    output logic [DataWidth-1:0]Mem_Data,
    output logic [DataWidth-1:0]RegOut
	
);

logic [DataWidth-1:0]Instruction;
logic [DataWidth-1:0]ImmOUT;
logic Branch_controller;
logic Branch_control_unit;
logic [DataWidth-1:0]readData1;
logic [DataWidth-1:0]readData2;
logic [RegAddrWidth-1:0]SRC_Reg_1;
logic [RegAddrWidth-1:0]SRC_Reg_2;
logic [1:0]ImmSel;
logic [31:0]SOURCE_A;
logic [31:0]SOURCE_B;
logic [31:0]Forwarded_SOURCE_A;
logic [31:0]Forwarded_SOURCE_B;
logic [1:0]OPERAND_A_SEL;
logic OPERAND_B_SEL;
logic [2:0]func3;
logic [1:0]func7;
logic mem_Read,mem_write;
logic regFileWriteEn,memtoRegister;
logic [2:0]ALU_Op;
logic [RegAddrWidth-1:0]destReg;
logic [6:0]opcode;
logic [DataWidth-1:0]I_imm;
logic [DataWidth-1:0]S_imm;
logic [DataWidth-1:0]U_imm;
logic [(DataWidth-1)-7:0]instruction_imm; // instruction without opcode
logic [2:0]op_A_sel;
logic [2:0]op_B_sel;

assign opcode    = Instruction[6:0];
assign destReg   = Instruction[11:7];
assign SRC_Reg_1 = Instruction[19:15];
assign SRC_Reg_2 = Instruction[24:20];
assign func3     = Instruction[14:12];
assign func7     = Instruction[31:30];

localparam No_of_registers = 32;

/////////////////////////////////////////////////////////////////////////
 always_comb begin
    if (next_PC_sel == 2'b10 || next_PC_sel == 2'b11)
        FLUSH_REG = 1'b1;
    else if (next_PC_sel == 2'b01 && Branch == 1'b1)
	FLUSH_REG = 1'b1;
    else 
	FLUSH_REG = 1'b0;
 end
///////////////////////////////////////////////////////////////////////////
always @(posedge clock)begin
	if (FLUSH_REG == 1'b1)
	      Instruction <=32'd0;
        else
	      Instruction <= Instruction_IN;
end

always @(posedge clock)begin
    if (reset)begin
        function3         <= 3'b0;
        function7         <= 2'b0;
        regWriteEn        <= 1'b0;
        memRead           <= 1'b0;
        memWrite          <= 1'b0;
        memtoReg          <= 1'b0;
        ALUOp		  <= 3'b0;
        writeBackReg      <= 5'b0;
        alu_src1          <= 32'b0;
        alu_src2          <= 32'b0; 
        Mem_Data          <= 32'b0;
    end
    else begin
        writeBackReg      <= destReg;
        function3         <= func3;
        function7         <= func7;
        regWriteEn        <= regFileWriteEn;
        memRead           <= mem_Read;
        memWrite          <= mem_write;
        memtoReg          <= memtoRegister;
        ALUOp		  <= ALU_Op;
        alu_src1          <= SOURCE_A;
        alu_src2          <= SOURCE_B;
        Mem_Data          <= Forwarded_SOURCE_B;
    end
end
////////////////////////////////////////////////////////////////////
regFile #(DataWidth,No_of_registers,RegAddrWidth) RegisterFile
     (
        .clock(clock),
        .reset(reset),
        .writeEn(regEN_WB),
        .source1(SRC_Reg_1),
        .source2(SRC_Reg_2),
        .writeDataSel(destReg_WB),
        .writeData(writeBackData),
         //OUTPUTS//
        .readData1(readData1),
        .readData2(readData2),
        .Reg_Out(RegOut)
     );

control_unit Control (
        .opcode(opcode),
         //OUTPUTS//
        .branch_op(Branch_control_unit),
        .memRead(mem_Read),
        .memtoReg(memtoRegister),
        .memWrite(mem_write),
        .regWriteEn(regFileWriteEn),
        .next_PC_sel(next_PC_sel),
        .operand_A_sel(OPERAND_A_SEL),
        .operand_B_sel(OPERAND_B_SEL),
        .ALUOp(ALU_Op),
        .extend_sel(ImmSel)
    );

ImmGen #(DataWidth) ImmediateGeneration
    (
        .pc(PC),
        .instruction(instruction_imm),
	 //OUTPUTS//
        .i_type(I_imm),
        .u_type(U_imm),
        .s_type(S_imm),
        .sb_type(BRANCH_TARGET),
        .uj_type(JAL_TARGET)        
    );
    
assign ImmOUT = (ImmSel==2'b00) ? I_imm:
                (ImmSel==2'b01) ? S_imm:
                (ImmSel==2'b10) ? U_imm: 32'd0 ;


assign instruction_imm = Instruction[31:7];
assign JALR_TARGET = (ImmOUT + Forwarded_SOURCE_A) & 32'hfffffffe;

/////////////////////////////////////////////////////////
Forwarding_Unit#(DataWidth,RegAddrWidth) Forwarding_For_Data_Hazard
(   
     .Reg_File_EN_Memory_stage(regEN_MEM),
     .Reg_File_EN_WrBk_stage(regEN_WB),
     .Reg_File_EN_EXE_stage(regEN_EX),
     .Mem_Read_EN(Memory_Read_EN),
     .WriteBack_reg_EXE_stage(destReg_EX),
     .WriteBack_reg_Memory_stage(destReg_MEM),
     .WriteBack_reg_WrBk_stage(destReg_WB),
     .ID_EX_RS1(SRC_Reg_1),
     .ID_EX_RS2(SRC_Reg_2),
     //OUTPUT//
     .Operand_A_control(op_A_sel),
     .Operand_B_control(op_B_sel)  
);


always_comb begin
    SOURCE_A = (OPERAND_A_SEL==2'b01)? PC :
               (OPERAND_A_SEL==2'b10)? PC + 32'd4 : Forwarded_SOURCE_A;

    SOURCE_B = (OPERAND_B_SEL==1'b1)?ImmOUT : Forwarded_SOURCE_B;          
end

always_comb begin
	Forwarded_SOURCE_A = op_A_sel == 3'b001 ?  Forwarded_Data_MEM1:
                             op_A_sel == 3'b010 ?  Forwarded_Data_WB  :
                             op_A_sel == 3'b011 ?  Forwarded_Data_EX  :
		             op_A_sel == 3'b110 ?  Forwarded_Data_MEM2:
                             readData1;

        Forwarded_SOURCE_B = op_B_sel == 3'b001 ?  Forwarded_Data_MEM1:
                             op_B_sel == 3'b010 ?  Forwarded_Data_WB  :
                             op_B_sel == 3'b011 ?  Forwarded_Data_EX  : 
		             op_B_sel == 3'b110 ?  Forwarded_Data_MEM2:
                             readData2;
end


Branch_Controller_Unit#(DataWidth) Branch_Controller_Unit
( 
    .function3(func3),
    .SRC_1(Forwarded_SOURCE_A),
    .SRC_2(Forwarded_SOURCE_B),
    //OUTPUT//
    .Branch(Branch_controller)
);

assign Branch = Branch_control_unit & Branch_controller;

endmodule:Decode
