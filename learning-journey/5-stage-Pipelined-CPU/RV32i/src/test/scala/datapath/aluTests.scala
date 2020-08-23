package datapath
import chisel3._
import chisel3.iotesters.PeekPokeTester


class aluTests(c: alu) extends PeekPokeTester(c) {
	poke(c.io.A , 1)
	poke(c.io.B , 1)
	poke(c.io.Aluop,4)
	step(1)
	
	expect(c.io.x,0)
	expect(c.io.AluBranch ,0)
	
}
