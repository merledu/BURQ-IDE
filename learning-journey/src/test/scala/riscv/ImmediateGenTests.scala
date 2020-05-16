package riscv

import chisel3.iotesters.PeekPokeTester

class ImmediateGenTests(c: ImmediateGen) extends PeekPokeTester(c){
  poke(c.io.a,2)
  step(1)
  expect(c.io.out,4)
}
