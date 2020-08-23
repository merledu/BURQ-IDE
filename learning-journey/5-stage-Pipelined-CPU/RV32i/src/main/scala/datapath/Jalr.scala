package datapath
import chisel3._

import chisel3.util.Cat
import chisel3.util.Fill

class Jalr extends Module{
	val io=IO(new Bundle{
		val A=Input(SInt(32.W))
		val B=Input(SInt(32.W))
		val x=Output(SInt(32.W))
		
			
	})
		val ab=io.A+io.B
		val bc=ab & 4294967294L.S
		io.x:=bc
		
		
}

		
		

