package datapath
import chisel3._
import chisel3.util.experimental.loadMemoryFromFile

class DataMemory extends Module{
	val io=IO(new Bundle{
		val wrAddr=Input(UInt(8.W))
		val wrData=Input(SInt(32.W))
		val MemRead=Input(Bool())
		val Data=Output(SInt(32.W))
		val MemWrite=Input(Bool())

			
	})
		io.Data:=0.S
		val mem=Mem(16384,SInt(32.W))
		
		when(io.MemWrite===1.U){
			mem.write(io.wrAddr,io.wrData)
		}
		when(io.MemRead===1.U){
			io.Data:=mem.read(io.wrAddr)
		}
		
		
}

		
		

