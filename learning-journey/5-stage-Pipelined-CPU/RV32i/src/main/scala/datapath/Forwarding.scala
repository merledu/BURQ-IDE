package datapath 
import chisel3._
class Forwarding extends Module{
	val io=IO(new Bundle{
		val rs1_sel_id=Input(UInt(5.W))
		val rs2_sel_id=Input(UInt(5.W))
		val ex_mem_rd=Input(UInt(5.W))			
		val mem_wb_rd=Input(UInt(5.W))
		val ex_mem_regwrite=Input(UInt(1.W))			
		val mem_wb_regwrite=Input(UInt(1.W))
		
		val forward_a=Output(UInt(2.W))
		val forward_b=Output(UInt(2.W))
	})
	
		io.forward_a:=0.U
		io.forward_b:=0.U
	/* Forwarding Unit Module */
		//EX hazard:
		io.forward_a := "b00".U
		io.forward_b := "b00".U
		when(io.ex_mem_regwrite === "b1".U && io.ex_mem_rd =/= "b00000".U){
	 		when((io.ex_mem_rd === io.rs1_sel_id) && (io.ex_mem_rd === io.rs2_sel_id)){
	   			io.forward_a := "b10".U
	   			io.forward_b := "b10".U
			}.elsewhen(io.ex_mem_rd === io.rs1_sel_id){
	   			io.forward_a := "b10".U
			}.elsewhen(io.ex_mem_rd === io.rs2_sel_id){
	   			io.forward_b := "b10".U
			}
		}
	

		when(io.mem_wb_regwrite === "b1".U & io.mem_wb_rd =/= "b00000".U){
	  		when(((io.mem_wb_rd === io.rs1_sel_id) && (io.mem_wb_rd === io.rs2_sel_id)) && ~((io.ex_mem_regwrite === "b1".U) && 		(io.ex_mem_rd =/= "b00000".U) && (io.rs1_sel_id === io.ex_mem_rd) && (io.rs2_sel_id === io.ex_mem_rd))){
	   			io.forward_a := "b01".U
	   			io.forward_b := "b01".U
			}.elsewhen(io.mem_wb_rd === io.rs1_sel_id && ~((io.ex_mem_regwrite === "b1".U) && (io.ex_mem_rd =/= "b00000".U) && (io.rs1_sel_id === io.ex_mem_rd))){
	   			io.forward_a := "b01".U
			}.elsewhen(io.mem_wb_rd === io.rs2_sel_id && ~((io.ex_mem_regwrite === "b1".U) && (io.ex_mem_rd =/= "b00000".U) && 			  (io.rs2_sel_id === io.ex_mem_rd))){
	   			io.forward_b := "b01".U
}	
}
			
}

/*Previous Code Do Not Touch 
	when((io.ex_mem_regwrite === "b1".U && io.ex_mem_rd =/= "b00000".U) && (io.ex_mem_rd === io.rs1_sel_id) && (io.ex_mem_rd ===   io.rs2_sel_id)) {
			io.forward_a:="b01".U
			io.forward_b:="b01".U
		}.elsewhen((io.ex_mem_regwrite === "b1".U & io.ex_mem_rd =/= "b00000".U) &&(io.ex_mem_rd === io.rs1_sel_id)){
				io.forward_a:="b01".U
		}.elsewhen ((io.ex_mem_regwrite === "b1".U & io.ex_mem_rd =/= "b00000".U) &&(io.ex_mem_rd === io.rs2_sel_id)){
				io.forward_b:="b01".U
			}

		
		when((io.mem_wb_regwrite === "b1".U )&& (io.mem_wb_rd =/= "b00000".U )&& ~((io.ex_mem_regwrite === "b1".U) && (io.ex_mem_rd =/= "b00000".U) && (io.ex_mem_rd === io.rs1_sel_id) && (io.ex_mem_rd === io.rs2_sel_id)) && (io.mem_wb_rd === io.rs1_sel_id) && (io.mem_wb_rd === io.rs2_sel_id)) {
			io.forward_a := "b10".U
        		io.forward_b := "b10".U

		}.elsewhen((io.mem_wb_regwrite === "b1".U && io.mem_wb_rd =/= "b00000".U )&& ~((io.ex_mem_regwrite === "b1".U) && (io.ex_mem_rd =/= "b00000".U) && (io.ex_mem_rd === io.rs1_sel_id)) && (io.mem_wb_rd === io.rs1_sel_id)) {
        io.forward_b := "b10".U
		}.elsewhen((io.mem_wb_regwrite === "b1".U && io.mem_wb_rd =/= "b00000".U )&& ~((io.ex_mem_regwrite === "b1".U) && (io.ex_mem_rd =/= "b00000".U) && (io.ex_mem_rd === io.rs1_sel_id))  && (io.mem_wb_rd === io.rs1_sel_id)) {
        io.forward_a := "b10".U
		}*/
/*/*Forward*/
		forward.io.rs1_sel_id:=id_ex.io.rs1_sel_out
		forward.io.rs2_sel_id:=id_ex.io.rs2_sel_out
		forward.io.ex_mem_rd:=ex_mem.io.Rd_sel_out
		forward.io.mem_wb_rd:=mem_wb.io.Rd_sel_out
		forward.io.ex_mem_regwrite:=ex_mem.io.Regwr_out
		forward.io.mem_wb_regwrite:=mem_wb.io.Regwr_out
		forward.io.ex_mem_aluout:=ex_mem.io.Alu_out2
		forward.io.mem_wb_aluout:=mem_wb.io.Aluout_2
		when(forward.io.forward_a==="b01".U){
			alu.io.A:=ex_mem.io.Alu_out2
		}.elsewhen(forward.io.forward_a==="b10".U){
			alu.io.A:=mem_wb.io.Aluout_2
		}
		when(forward.io.forward_b==="b01".U){
			alu.io.B:=ex_mem.io.Alu_out2
		}.elsewhen(forward.io.forward_b==="b10".U){
			alu.io.B:=mem_wb.io.Aluout_2
		}
*/
