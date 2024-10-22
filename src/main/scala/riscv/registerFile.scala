package riscv
import chisel3._
import chisel3.util.Cat
import chisel3.util.Fill
class registerFile extends Module{
  val io = IO(new Bundle{
    val regWrite = Input(UInt(1.W))
    val rs1_sel = Input(UInt(5.W))
    val rs2_sel = Input(UInt(5.W))
    val rd_sel = Input(UInt(5.W))
    val writeData = Input(SInt(32.W))
    val rs1 = Output(SInt(32.W))
    val rs2 = Output(SInt(32.W))
  })
  val registers = RegInit(VecInit(Seq.fill(32)(0.S(32.W))))
  registers(0) := 0.S
  io.rs1 := registers(io.rs1_sel)
  io.rs2 := registers(io.rs2_sel)
  when(io.regWrite === 1.U){
    registers(io.rd_sel) := io.writeData
  }
}
