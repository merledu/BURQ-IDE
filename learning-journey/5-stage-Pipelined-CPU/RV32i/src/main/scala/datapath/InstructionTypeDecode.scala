package datapath 
import chisel3._

class InstructionTypeDecode extends Module{
	val io=IO(new Bundle{
		val opcode=Input(UInt(7.W))
		val R_Format=Output(UInt(1.W))	
		val Load=Output(UInt(1.W))	
		val Store=Output(UInt(1.W))	
		val Branch=Output(UInt(1.W))	
		val I_Type=Output(UInt(1.W))	
		val JALR=Output(UInt(1.W))	
		val JAL=Output(UInt(1.W))	
		val LUI=Output(UInt(1.W))	
	})
		io.R_Format:=0.U
		io.Load:=0.U
		io.Store:=0.U
		io.Branch:=0.U
		io.I_Type:=0.U
		io.JALR:=0.U
		io.JAL:=0.U
		io.LUI:=0.U
		
	when(io.opcode === "b0110011".U){
		io.R_Format:=1.U
	}.elsewhen (io.opcode === "b0000011".U){
		io.Load:= 1.U
	}.elsewhen (io.opcode === "b0100011".U){
		io.Store:= 1.U
	}.elsewhen (io.opcode === "b1100011".U){
		io.Branch:= 1.U
	}.elsewhen (io.opcode === "b0010011".U){
		io.I_Type:= 1.U
	}.elsewhen (io.opcode === "b1100111".U){
		io.JALR:= 1.U
	}.elsewhen (io.opcode === "b1101111".U){
		io.JAL:= 1.U
	}.elsewhen (io.opcode === "b0110111".U){
		io.LUI:= 1.U
	}

} 	


