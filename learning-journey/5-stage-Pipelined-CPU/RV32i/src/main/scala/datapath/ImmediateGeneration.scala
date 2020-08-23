package datapath
import chisel3._
import chisel3.util.Cat
import chisel3.util.Fill
class ImmediateGeneration extends Module{
	val io = IO(new Bundle{
	val Instruction = Input(UInt(32.W))
	val PC = Input(UInt(32.W))
	val I_Immediate = Output(SInt(32.W))
	val S_Immediate = Output(SInt(32.W))
	val U_Immediate = Output(SInt(32.W))
	val SB_Immediate = Output(SInt(32.W))
	val UJ_Immediate = Output(SInt(32.W))
})
	/*Initialize*/
	io.I_Immediate:=0.S
	io.S_Immediate:=0.S
	io.U_Immediate:=0.S
	io.SB_Immediate:=0.S
	io.UJ_Immediate:=0.S

	val sbt1 = io.Instruction(31,20)
	val output = Cat(Fill(19,sbt1(11)),sbt1)
	val output1 = output.asSInt 
	io.I_Immediate := output1

	val sbt2 = io.Instruction(11,7)
	val sbt3 = io.Instruction(31,25)
	val sbt4 = Cat(sbt3,sbt2)
	val output2 = Cat(Fill(19,sbt4(11)),sbt4)
	val output3 = output2.asSInt
	io.S_Immediate := output3

	val sbt5 = io.Instruction(31,12)
	val sbt6 = Cat(Fill(11,sbt5(19)),sbt5)
	val sbt7 = sbt6 << "hc".U
	val output4 = sbt7.asSInt
	io.U_Immediate := output4 

	val sbt8 = io.Instruction(7)
	val sbt9 = io.Instruction(11,8)
	val sbt10 = io.Instruction(30,25)
	val sbt11 = io.Instruction(31)
	val sbt12 = Cat(sbt11,sbt8,sbt10,sbt9,"b0".U)
	val sbt13 = Cat(Fill(19,sbt12(12)),sbt12)
	val output5 = sbt13 + io.PC
	val output6 = output5.asSInt
	io.SB_Immediate := output6

	val sbt14 = io.Instruction(19,12)
	val sbt15 = io.Instruction(20)
	val sbt16 = io.Instruction(30,21)
	val sbt17 = io.Instruction(31)
	val sbt18 = Cat(sbt17,sbt14,sbt15,sbt16,0.U)
	val sbt19 = Cat(Fill(11,sbt18(20)),sbt18)
	val output8 = sbt19 +io.PC
	val output9 = output8.asSInt
	io.UJ_Immediate := output9
}

