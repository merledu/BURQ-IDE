package datapath
import chisel3._

class HazardDetect extends Module {
  val io = IO(new Bundle {
    val if_id_inst = Input(UInt(32.W))
    val if_id_memread =Input(UInt(1.W))
    val id_ex_memread = Input(UInt(1.W))
    val id_ex_rd_sel = Input(UInt(5.W))
    val if_id_pc_in = Input(UInt(32.W))
    val current_pc_in = Input(UInt(32.W))
    val inst_forward = Output(UInt(1.W))
    val pc_forward = Output(UInt(1.W))
    val ctrl_forward = Output(UInt(1.W))
    val inst_out = Output(UInt(32.W))
    val pc_out = Output(UInt(32.W))
    val current_pc_out = Output(UInt(32.W))
    val rs1_sel =Input(UInt(5.W))
    val rs2_sel =Input(UInt(5.W))
    val control_branch=Input(UInt(1.W))

  })
	when(io.if_id_memread === 1.U){
		when(io.id_ex_memread === "b1".U && io.id_ex_rd_sel === io.rs1_sel){
 			io.inst_forward := 1.U
      			io.pc_forward := 1.U
      			io.ctrl_forward := 1.U
      			io.inst_out := io.if_id_inst
      			io.pc_out := io.if_id_pc_in
      			io.current_pc_out := io.current_pc_in
		}.otherwise{
			io.inst_forward := 0.U
    			io.pc_forward := 0.U
    			io.ctrl_forward := 0.U
    			io.inst_out := io.if_id_inst  
    			io.pc_out := io.if_id_pc_in         
    			io.current_pc_out := io.current_pc_in
		}
	}.otherwise{
	when(io.control_branch === 1.U && io.id_ex_memread === 1.U){
		io.inst_forward := 0.U
    		io.pc_forward := 0.U
    		io.ctrl_forward := 0.U
    		io.inst_out := io.if_id_inst  
    		io.pc_out := io.if_id_pc_in         
    		io.current_pc_out := io.current_pc_in

  	}.elsewhen(io.id_ex_memread === "b1".U && ((io.id_ex_rd_sel === io.rs1_sel) || (io.id_ex_rd_sel === io.rs2_sel))) {
      		io.inst_forward := 1.U
      		io.pc_forward := 1.U
      		io.ctrl_forward := 1.U
      		io.inst_out := io.if_id_inst
      		io.pc_out := io.if_id_pc_in
      		io.current_pc_out := io.current_pc_in

  	} .otherwise {
    		io.inst_forward := 0.U
    		io.pc_forward := 0.U
    		io.ctrl_forward := 0.U
    		io.inst_out := io.if_id_inst  
    		io.pc_out := io.if_id_pc_in         
    		io.current_pc_out := io.current_pc_in
  	}
	}

}
