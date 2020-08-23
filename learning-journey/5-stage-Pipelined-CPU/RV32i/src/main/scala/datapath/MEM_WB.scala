package datapath
import chisel3._
import chisel3.util.Cat
import chisel3.util.Fill
class MEM_WB extends Module{
	val io=IO(new Bundle{
		val Regwr = Input(UInt(1.W))
        	val MemtoReg = Input(UInt(1.W))
        	val Rd_sel = Input(UInt(5.W))
        	val data_mem_in = Input(SInt(32.W))
        	val Aluout = Input(SInt(32.W))
		val memread=Input(UInt(1.W))

        	val Regwr_out = Output(UInt(1.W))
        	val MemtoReg_out = Output(UInt(1.W))
        	val Rd_sel_out = Output(UInt(5.W))
        	val data_mem_out = Output(SInt(32.W))
        	val Aluout_2 = Output(SInt(32.W))
		val memread2=Output(UInt(1.W))
	})
		/*Registers*/

		val Regwr_Reg = RegInit(0.U(1.W))
    		val MemtoReg_Reg = RegInit(0.U(1.W))
		val Rd_sel_Reg = RegInit(0.U(5.W))
		val data_mem_Reg = RegInit(0.S(32.W))
		val Aluout_Reg= RegInit(0.S(32.W))
		val memread_reg=RegInit(0.U(1.W))
		
		/*Inputs to Register*/
		Regwr_Reg := io.Regwr
    		MemtoReg_Reg := io.MemtoReg
		Rd_sel_Reg := io.Rd_sel
		data_mem_Reg := io.data_mem_in
		Aluout_Reg:= io.Aluout
		memread_reg:=io.memread

		/*Outputs from Register*/
		io.Regwr_out := Regwr_Reg
		io.MemtoReg_out  := MemtoReg_Reg
		io.Rd_sel_out  := Rd_sel_Reg
		io.data_mem_out := data_mem_Reg
		io.Aluout_2 := Aluout_Reg
		io.memread2:=memread_reg
}
