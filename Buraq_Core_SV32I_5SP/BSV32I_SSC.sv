`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: MERL
// Engineer: 
// 
// Create Date: 12/21/2019 06:26:51 PM
// Design Name: BSV32I_SSC
// Module Name: BSV32I_SSC
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

module BSV32I_SSC#(
parameter DataWidth=32,
parameter AddrWidth=10,
parameter RegAddrWidth=5
)
(
    input  clock,
    input  reset,
    input  [DataWidth-1:0]program_in,
    input  [AddrWidth-1:0]address_in,
    input  [DataWidth-1:0]Inst_mem_dataOut,Data_mem_dataOut,
    output logic [DataWidth-1:0]Inst_mem_dataIn,Data_mem_dataIn,
    output logic [AddrWidth-1:0]Inst_mem_address,Data_mem_address,
    output logic Inst_mem_read_en,Data_mem_read_en,
    output logic Inst_mem_write_en,Data_mem_write_en,
    output logic [2:0]func3,
    output logic [DataWidth-1:0]reg_out
);
logic [DataWidth-1:0]Mem_WB_Data;
logic [1:0]NEXT_PC_SEL;
logic  BRANCH;
logic [DataWidth-1:0]ALUresult;
logic [DataWidth-1:0]PROGRAM_COUNTER;
logic [DataWidth-1:0]BRANCH_TARG;
logic [DataWidth-1:0]JAL_TARG;
logic [DataWidth-1:0]JALR_TARG;
logic [DataWidth-1:0]WB_DATA;
logic [RegAddrWidth-1:0]WB_REG;
logic [RegAddrWidth-1:0]DEST_REG;
logic [RegAddrWidth-1:0]DEST_REGISTER;
logic [DataWidth-1:0]SOURCE1;
logic [DataWidth-1:0]SOURCE2;
logic MEM_TO_REG_DEC_EX;
logic MEM_READ_EN_DEC_EX;
logic MEM_WRITE_EN_DEC_EX;
logic [DataWidth-1:0]aluOutput;
logic [2:0]ALU_OPCODE;
logic [2:0]FUNC_3;
logic [1:0]FUNC_7;
logic RF_EN_DEC_to_EX;          //register file enable from decode to execute
logic RF_EN_EX_to_WB;           //register file enable from execute to writeBack
logic FLUSH;
logic mem_to_register;
logic [DataWidth-1:0]Mem_Data_WB;
logic [DataWidth-1:0]ALU_RESULT;
logic [RegAddrWidth-1:0]reg_WB;
logic EN_reg_file;
logic Mem2Reg;
                                     ///********INSTANTIATING MODULES********///

Fetch #(DataWidth,AddrWidth) Fetch_unit
(
     .clock(clock),
     .reset(reset),
     .next_PC_sel(NEXT_PC_SEL),
     .Branch(BRANCH),
     .flush(FLUSH),
     .Branch_target(BRANCH_TARG),
     .Jal_target(JAL_TARG),
     .Jalr_target(JALR_TARG),
     //OUTPUT//
     .Inst_mem_address(Inst_mem_address),
     .PC_OUT(PROGRAM_COUNTER) 
);

Decode #(DataWidth,RegAddrWidth) Decode_unit
(
     .clock(clock),
     .reset(reset),
     .regEN_EX(RF_EN_DEC_to_EX),
     .regEN_MEM(RF_EN_EX_to_WB),
     .regEN_WB(EN_reg_file),
     .Instruction_IN(Inst_mem_dataOut),
     .Memory_Read_EN(Data_mem_read_en),
     .destReg_EX(DEST_REG),
     .destReg_MEM(DEST_REGISTER),
     .destReg_WB(reg_WB),
     .Forwarded_Data_EX(ALU_RESULT),
     .Forwarded_Data_MEM1(aluOutput),    
     .Forwarded_Data_MEM2(Data_mem_dataOut),
     .Forwarded_Data_WB(WB_DATA),
     .PC(PROGRAM_COUNTER),
     .writeBackData(WB_DATA),     // comes from WB-stage                        
     //OUTPUTS//
     .writeBackReg(DEST_REG),     // goes to EX-stage then go to MEM,WB
     .alu_src1(SOURCE1),
     .alu_src2(SOURCE2),
     .memRead(MEM_READ_EN_DEC_EX),
     .memtoReg(MEM_TO_REG_DEC_EX),
     .memWrite(MEM_WRITE_EN_DEC_EX),
     .FLUSH_REG(FLUSH),
     .Branch(BRANCH),
     .next_PC_sel(NEXT_PC_SEL),
     .ALUOp(ALU_OPCODE),
     .BRANCH_TARGET(BRANCH_TARG),
     .JAL_TARGET(JAL_TARG),
     .JALR_TARGET(JALR_TARG),
     .function3(FUNC_3),
     .function7(FUNC_7),
     .regWriteEn(RF_EN_DEC_to_EX),
     .Mem_Data(Mem_WB_Data),
     .RegOut(reg_out)
);

Execute #(DataWidth,AddrWidth,RegAddrWidth) Execute_unit
(
     .clock(clock),
     .reset(reset),
     .DataMemDataIn(Mem_WB_Data),
     .Operand_A(SOURCE1), 
     .Operand_B(SOURCE2),
     .Func3(FUNC_3),
     .Func7(FUNC_7),
     .ALU_op(ALU_OPCODE),
     .memtoreg(MEM_TO_REG_DEC_EX),
     .writeEn(MEM_WRITE_EN_DEC_EX),
     .readEn(MEM_READ_EN_DEC_EX),
     .regfileEN(RF_EN_DEC_to_EX),
     .writeBack_reg(DEST_REG), 
     //OUTPUTS//
     .Func_3(func3),
     .MEM_to_REG(mem_to_register),
     .MEM_WRITE(Data_mem_write_en),
     .MEM_READ(Data_mem_read_en),
     .Reg_EN(RF_EN_EX_to_WB),
     .D_MEM_ADDR(Data_mem_address),           //It will give address to the memory
     .ALU_Result(ALU_RESULT),
     .ALU_result_delay(aluOutput),
     .WB_REG(DEST_REGISTER),
     .DataIN_MEM(Data_mem_dataIn)
);


MEM_WB#(DataWidth,RegAddrWidth)MEM_WB_REG      // *MEM_WB_REG*
(
     .clock(clock),
     .reset(reset),
     .ALU_result_IN(aluOutput),
     .Mem_Data_IN(Data_mem_dataOut),
     .WB_REG_IN(DEST_REGISTER),
     .Mem_to_Reg_IN(mem_to_register),
     .RegEn_IN(RF_EN_EX_to_WB),
     //OUTPUTS//
     .ALU_result_OUT(ALUresult),
     .Mem_Data_OUT(Mem_Data_WB),
     .WB_REG_OUT(reg_WB),
     .Mem_to_Reg_OUT(Mem2Reg),
     .RegEn_OUT(EN_reg_file)
);

WriteBack#(DataWidth,RegAddrWidth) WriteBack_unit
( 
     .writeback_reg(reg_WB),
     .memtoreg(Mem2Reg),
     .Data_from_ALU(ALUresult),
     .Data_from_Mem(Mem_Data_WB),// Mem_Data_WB
     //OUTPUTS//
     .WriteBackData(WB_DATA),
     .writeBack_reg(WB_REG)
);
assign Inst_mem_read_en  =  1'b1;
assign Inst_mem_write_en =  1'b0;
assign Inst_mem_dataIn   =  32'd0;

endmodule:BSV32I_SSC