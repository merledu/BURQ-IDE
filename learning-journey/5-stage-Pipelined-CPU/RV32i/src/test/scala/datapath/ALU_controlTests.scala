package datapath
import chisel3._
import chisel3.iotesters.PeekPokeTester


class ALU_controlTests(c: ALU_control) extends PeekPokeTester(c) {
	poke(c.io.Aluop , 0)
	poke(c.io.Func7 , 1)
	poke(c.io.Func3 , 1)
	step(1)
	expect(c.io.control, 9)
	
	
}
