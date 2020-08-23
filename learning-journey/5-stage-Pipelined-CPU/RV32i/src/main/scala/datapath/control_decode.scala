package datapath 
import chisel3._

class control_decode extends Module{
	val io=IO(new Bundle{
		val R_Format=Input(UInt(1.W))	
		val Load=Input(UInt(1.W))	
		val Store=Input(UInt(1.W))	
		val Branch=Input(UInt(1.W))	
		val I_Type=Input(UInt(1.W))	
		val JALR=Input(UInt(1.W))	
		val JAL=Input(UInt(1.W))	
		val LUI=Input(UInt(1.W))
		val MemWrite=Output(UInt(1.W))
		val Branch2=Output(UInt(1.W))
		val MemRead=Output(UInt(1.W))
		val RegWrite=Output(UInt(1.W))
		val MemtoReg=Output(UInt(1.W))
		val ALUoperation=Output(UInt(3.W))
		val operand_A_sel=Output(UInt(2.W))
		val operand_B_sel=Output(UInt(2.W))
		val extend_sel=Output(UInt(2.W))
		val next_PC_sel=Output(UInt(2.W))
			
	})
		
		io.MemWrite:=0.U
		io.MemWrite:=0.U
		io.Branch2:=0.U
		io.MemRead:=0.U
		io.RegWrite:=0.U
		io.MemtoReg:=0.U
		io.ALUoperation:="b000".U
		io.operand_A_sel:="b00".U
		io.operand_B_sel:=0.U
		io.extend_sel:="b00".U
		io.next_PC_sel:="b00".U
		
		when(io.R_Format === 1.U){
			io.RegWrite:=1.U
	}.elsewhen (io.Load === 1.U){
		io.MemRead:=1.U
		io.MemtoReg:=1.U
		io.RegWrite:=1.U
		io.operand_B_sel:=1.U
		io.ALUoperation:="b100".U

	}.elsewhen (io.Store=== 1.U){
		io.MemWrite:=1.U
		io.ALUoperation:="b101".U
		io.operand_B_sel:=1.U
		io.extend_sel:="b10".U

	}.elsewhen (io.Branch === 1.U){
		io.Branch2:=1.U
		io.ALUoperation:="b010".U
		io.next_PC_sel:="b01".U

	}.elsewhen (io.I_Type === 1.U){
		io.RegWrite:=1.U
		io.ALUoperation:="b001".U
		io.operand_B_sel:=1.U

	
	}.elsewhen (io.JALR === 1.U){
		io.RegWrite:=1.U
		io.ALUoperation:="b011".U
		io.operand_A_sel:="b10".U
		io.next_PC_sel:="b11".U

	}.elsewhen (io.JAL=== 1.U){
		io.RegWrite:=1.U
		io.ALUoperation:="b011".U
		io.operand_A_sel:="b10".U
		io.next_PC_sel:="b10".U

	}.elsewhen (io.LUI === 1.U){
		io.RegWrite:=1.U
		io.ALUoperation:="b110".U
		io.operand_A_sel:="b11".U
		io.operand_B_sel:=1.U
		io.extend_sel:="b01".U
		
	}

}
