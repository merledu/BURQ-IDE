package datapath

import chisel3.iotesters.PeekPokeTester

class control_decodeTests(c: control_decode) extends PeekPokeTester(c) {
	poke(c.io.R_Format, 1)
	poke(c.io.Load, 0)
	poke(c.io.Store, 0)
	poke(c.io.Branch, 0)
	poke(c.io.I_Type, 0)
	poke(c.io.JALR, 0)
	poke(c.io.JAL, 0)
	poke(c.io.LUI, 0)
	step(1)
	expect(c.io.MemWrite,0)
	expect(c.io.Branch2,0)
	expect(c.io.MemRead,0)
	expect(c.io.RegWrite,1)
	expect(c.io.MemtoReg,0)
	expect(c.io.ALUoperation,0)
	expect(c.io.operand_A_sel,0)
	expect(c.io.operand_B_sel,0)
	expect(c.io.extend_sel,0)
	expect(c.io.next_PC_sel,0)
	
}
