package datapath
import chisel3._

import chisel3.util.Cat
import chisel3.util

class reg_32 extends Module{
	val io=IO(new Bundle{
		val regwrite=Input(UInt(1.W))			
		val rd_sel=Input(UInt(5.W))
		val rs1_sel=Input(UInt(5.W))
		val rs2_sel=Input(UInt(5.W))
		val WriteData=Input(SInt(32.W))
		val rs1=Output(SInt(32.W))
		val rs2=Output(SInt(32.W))
			
	})
		val registers_c=Reg(Vec(32,SInt(32.W)))
		registers_c(0):=0.S
		registers_c(2):=512.S
		io.rs1:= registers_c(io.rs1_sel)
		io.rs2 := registers_c(io.rs2_sel)
		when(io.regwrite ===1.U){
			when(io.rd_sel === "b00000".U){
	  			registers_c(io.rd_sel) := 0.S
			}.otherwise{
			registers_c(io.rd_sel) := io.WriteData
			}
		}
}

		
		

