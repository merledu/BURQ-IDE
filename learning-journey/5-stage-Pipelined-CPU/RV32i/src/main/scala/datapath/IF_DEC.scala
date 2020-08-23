package datapath
import chisel3._
import chisel3.util.experimental.loadMemoryFromFile
class IF_DEC extends Module{
	val io=IO(new Bundle{
		val pc_in = Input(UInt(32.W))
        	val pc4_in = Input(UInt(32.W))
        	val data_in = Input(UInt(32.W))
        	val pc_out = Output(UInt(32.W))
        	val pc4_out = Output(UInt(32.W))
        	val rdData= Output(UInt(32.W))
    })

    val pc_reg = RegInit(0.U(32.W))
    val pc4_reg = RegInit(0.U(32.W))
    val inst_reg = RegInit(0.U(32.W))
    pc_reg := io.pc_in
    pc4_reg := io.pc4_in
    inst_reg := io.data_in
    io.pc_out := pc_reg
    io.pc4_out := pc4_reg
    io.rdData := inst_reg
		
		
}
