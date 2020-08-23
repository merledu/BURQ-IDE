package datapath
import chisel3._
import chisel3.util.Cat
import chisel3.util.Fill
class EX_MEM extends Module{
	val io=IO(new Bundle{
		val Memwr= Input(UInt(1.W))
        	val Memrd = Input(UInt(1.W))
        	val Regwr = Input(UInt(1.W))
        	val MemtoReg = Input(UInt(1.W))
        	val Rs2= Input(SInt(32.W))
        	val Rd_sel = Input(UInt(5.W))
		val Alu_out = Input(SInt(32.W))
		val Rs2_sel_in=Input(UInt(5.W))

        	val Memwr_out = Output(UInt(1.W))
        	val Memrd_out = Output(UInt(1.W))
        	val Regwr_out= Output(UInt(1.W))
        	val MemtoReg_out = Output(UInt(1.W))
        	val Rs2_out = Output(SInt(32.W))
        	val Rd_sel_out = Output(UInt(5.W))
        	val Alu_out2 = Output(SInt(32.W))
		val Rs2_sel_out=Output(UInt(5.W))

	})

	/*Register*/
	val Memwr_Reg = RegInit(0.U(1.W))
        val Memrd_Reg = RegInit(0.U(1.W))
	val Regwr_Reg = RegInit(0.U(1.W))
	val MemtoReg_Reg = RegInit(0.U(1.W))
	val Rs2_Reg = RegInit(0.S(32.W))
	val Rd_sel_Reg = RegInit(0.U(5.W))
	val Alu_out_Reg = RegInit(0.S(32.W))
	val Rs2_sel_Reg=RegInit(0.U(5.W))

	/*Inputs to Register*/
	Memwr_Reg := io.Memwr
        Memrd_Reg := io.Memrd
	Regwr_Reg := io.Regwr
	MemtoReg_Reg := io.MemtoReg 
	Rs2_Reg := io.Rs2
	Rd_sel_Reg := io.Rd_sel
	Alu_out_Reg := io.Alu_out
	Rs2_sel_Reg := io.Rs2_sel_in
	
	/*Outputs from Register*/
	io.Memwr_out := Memwr_Reg
	io.Memrd_out := Memrd_Reg
	io.Regwr_out := Regwr_Reg
	io.MemtoReg_out := MemtoReg_Reg
	io.Rs2_out := Rs2_Reg
	io.Rd_sel_out:= Rd_sel_Reg
	io.Alu_out2 := Alu_out_Reg
	io.Rs2_sel_out := Rs2_sel_Reg

		
}
