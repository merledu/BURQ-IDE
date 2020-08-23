package datapath
import chisel3._
import chisel3.iotesters.PeekPokeTester


class PCTests(c: PC) extends PeekPokeTester(c) {
	poke(c.io.input ,0)
	step(1)
	step(1)
	expect(c.io.pc,0)
	expect(c.io.pc4,4)
	
	
	
}
