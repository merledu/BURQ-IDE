package datapath
import chisel3._
import chisel3.iotesters.PeekPokeTester


class reg_32Tests(c: reg_32) extends PeekPokeTester(c) {
	poke(c.io.regwrite , 1)
	poke(c.io.rd_sel , 0)
	poke(c.io.rs1_sel,1)
	poke(c.io.rs2_sel,2)
	poke(c.io.WriteData,0)
	step(1)
	expect (c.io.rs1,0)
	expect(c.io.rs1,0)
	
	
	
}
