package datapath
import chisel3._
import chisel3.iotesters.PeekPokeTester


class JalrTests(c: Jalr) extends PeekPokeTester(c) {
	poke(c.io.A ,5)
	poke(c.io.B, -4)
	step(1)
	step(1)
	expect(c.io.x,0)
	
	
	
}
