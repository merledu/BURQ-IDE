package examples
import chisel3.iotesters.PeekPokeTester
class SignExtendTests(c: SignExtend) extends PeekPokeTester(c) {
  poke(c.io.ins,2)
  step(1)
  expect(c.io.out,0)
}
