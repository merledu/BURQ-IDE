package datapath
import chisel3._

class PC extends Module{
	val io=IO(new Bundle{
		val input=Input(UInt(32.W))
		val pc=Output(UInt(32.W))
		val pc4=Output(UInt(32.W))
		
			
	})
		val pc1=RegInit(0.U(32.W))
		pc1:=io.input		
		io.pc4:=pc1+4.U
		io.pc:=pc1
		
		
}

		
		

