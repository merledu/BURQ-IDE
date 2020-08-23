package datapath

import chisel3.iotesters.PeekPokeTester

class controlTests(c: control) extends PeekPokeTester(c) {
	step(1)
	
}
