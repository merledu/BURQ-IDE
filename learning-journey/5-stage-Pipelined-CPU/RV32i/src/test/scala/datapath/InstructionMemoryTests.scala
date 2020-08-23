package datapath
import chisel3._
import chisel3.iotesters.PeekPokeTester


class InstructionMemoryTests(c: InstructionMemory) extends PeekPokeTester(c) {
	//poke(c.io.clock ,1)
	poke(c.io.wrAddr, 1)
	step(1)
	step(1)
	
	
	
	
}
