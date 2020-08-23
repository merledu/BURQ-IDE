package datapath 
import chisel3._

class control extends Module{
	val io=IO(new Bundle{
		val opcode=Input(UInt(7.W))
		val MemoryWrite=Output(UInt(1.W))
		val Branch2=Output(UInt(1.W))
		val MemRead=Output(UInt(1.W))
		val RegWrite=Output(UInt(1.W))
		val MemtoReg=Output(UInt(1.W))
		val ALUoperation=Output(UInt(3.W))
		val operand_A_sel=Output(UInt(2.W))
		val operand_B_sel=Output(UInt(1.W))
		val extend_sel=Output(UInt(2.W))
		val next_PC_sel=Output(UInt(2.W))
			
	})
		
		io.MemoryWrite:=0.U
		io.Branch2:=0.U
		io.MemRead:=0.U
		io.RegWrite:=0.U
		io.MemtoReg:=0.U
		io.ALUoperation:="b000".U
		io.operand_A_sel:="b00".U
		io.operand_B_sel:=0.U
		io.extend_sel:="b00".U
		io.next_PC_sel:="b00".U

		val InstDecode = Module(new InstructionTypeDecode())
		val CtrlDecode = Module(new control_decode())
		InstDecode.io.opcode:=io.opcode
		CtrlDecode.io.R_Format:=InstDecode.io.R_Format
		CtrlDecode.io.Load:=InstDecode.io.Load
		CtrlDecode.io.Store:=InstDecode.io.Store
		CtrlDecode.io.Branch:=InstDecode.io.Branch
		CtrlDecode.io.I_Type:=InstDecode.io.I_Type
		CtrlDecode.io.JALR:=InstDecode.io.JALR
		CtrlDecode.io.JAL:=InstDecode.io.JAL
		CtrlDecode.io.LUI:=InstDecode.io.LUI
		
		io.MemoryWrite:=CtrlDecode.io.MemWrite
		io.Branch2:=CtrlDecode.io.Branch2
		io.MemRead:=CtrlDecode.io.MemRead
		io.RegWrite:=CtrlDecode.io.RegWrite
		io.MemtoReg:=CtrlDecode.io.MemtoReg
		io.ALUoperation:=CtrlDecode.io.ALUoperation
		io.operand_A_sel:=CtrlDecode.io.operand_A_sel
		io.operand_B_sel:=CtrlDecode.io.operand_B_sel
		io.extend_sel:=CtrlDecode.io.extend_sel
		io.next_PC_sel:=CtrlDecode.io.next_PC_sel
}
