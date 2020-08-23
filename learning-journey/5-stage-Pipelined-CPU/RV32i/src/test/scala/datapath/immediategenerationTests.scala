package datapath
import chisel3._
import chisel3.iotesters.PeekPokeTester


class immediategenerationTests(c: ImmediateGeneration) extends PeekPokeTester(c) {
	poke(c.io.Instruction , 6)
	poke(c.io.PC , 6)
	step(1)
	
	expect(c.io.SB_Immediate,6)
	expect(c.io.S_Immediate,0)
	expect(c.io.U_Immediate,0)
	expect(c.io.UJ_Immediate,6)
	expect(c.io.I_Immediate,0)
	
	
	
}
