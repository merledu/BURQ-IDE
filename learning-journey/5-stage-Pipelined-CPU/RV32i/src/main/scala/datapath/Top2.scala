package datapath 
import chisel3._
class Top2 extends Module{
	val io=IO(new Bundle{
		val instruction=Output(UInt(32.W))			
		val reg_out=Output(SInt(32.W))
		val branch_stall = Output(UInt(1.W))
		
		
	})
		
		val control = Module(new control())
		val register = Module(new reg_32())
		val alu = Module(new alu())
		val alucontrol = Module(new ALU_control())
		val immediate = Module(new ImmediateGeneration())
		val PC=Module(new PC())
		val instmem=Module(new InstructionMemory())
		val DataMemory=Module(new DataMemory())
		val mem_wb=Module(new MEM_WB())
		val ex_mem=Module(new EX_MEM())
		val id_ex=Module(new ID_EX())
		val if_id=Module(new IF_DEC())
		val JALR=Module(new Jalr())
		val forward=Module(new Forwarding())
		val hazardDetection=Module(new HazardDetect())
		val branchlogic=Module(new branchlogic())
		val branchforward=Module(new branchforward())
		val structdetect=Module(new structdetect())

		/* Initialization of Top Outputs */
		io.reg_out:=0.S
		mem_wb.io.memread:=0.U
		ex_mem.io.Rs2_sel_in:=0.U
		id_ex.io.Immediate:=0.S
		PC.io.input:= 0.U
		JALR.io.A:=0.S
		alu.io.A:=0.S
		alu.io.B:=0.S
		io.branch_stall:=0.U
		

		/*PC and Instruction Memory Module*/
		instmem.io.wrAddr:=PC.io.pc(11,2)
		
		/*Instruction Fetch to Instruction Decode Stage*/
		if_id.io.pc_in:=PC.io.pc
		if_id.io.pc4_in:=PC.io.pc4
		if_id.io.data_in:=instmem.io.rdData
		io.instruction:=if_id.io.rdData

		/*Control and Immediate Modules*/
		control.io.opcode:=if_id.io.rdData(6,0)
		immediate.io.Instruction :=if_id.io.rdData
		immediate.io.PC:=if_id.io.pc_out

		/*RD_SELECT and REGISTER WRITE THROW*/
		id_ex.io.ctRegWr_in:=control.io.RegWrite
		id_ex.io.rd_sel_in:=if_id.io.rdData(11,7)
		ex_mem.io.Regwr:=id_ex.io.RegWrite
		ex_mem.io.Rd_sel:=id_ex.io.rd_sel_out
		mem_wb.io.Rd_sel:=ex_mem.io.Rd_sel_out
		mem_wb.io.Regwr:=ex_mem.io.Regwr_out

		/*Register Module*/
		register.io.rs1_sel:=if_id.io.rdData(19,15)
		register.io.rs2_sel:=if_id.io.rdData(24,20)
		register.io.rd_sel:=mem_wb.io.Rd_sel_out
		register.io.regwrite:=mem_wb.io.Regwr_out


		/*BranchForwarding Module to forward rs1 and rs2 and func3 to branch logic module*/
		branchforward.io.id_ex_rd_sel := id_ex.io.rd_sel_out
    		branchforward.io.id_ex_memread := id_ex.io.MemRead
		branchforward.io.id_ex_regwrite:= id_ex.io.RegWrite
    		branchforward.io.ex_mem_rd_sel := ex_mem.io.Rd_sel_out
    		branchforward.io.mem_wb_rd_sel := mem_wb.io.Rd_sel_out
		branchforward.io.ex_mem_regwrite:= ex_mem.io.Regwr_out
    		branchforward.io.ex_mem_memread := ex_mem.io.Memrd
    		branchforward.io.mem_wb_memread := mem_wb.io.memread2
		branchforward.io.mem_wb_regwrite:= mem_wb.io.Regwr_out
    		branchforward.io.rs1_sel := if_id.io.rdData(19, 15)
    		branchforward.io.rs2_sel := if_id.io.rdData(24, 20)
    		branchforward.io.ctrl_branch := control.io.Branch2
		branchlogic.io.func3_in := if_id.io.rdData(14,12)
		branchlogic.io.branch:=control.io.Branch2
		
		

		/*For Branch Prediction taken from rs1 and rs2 and func3 along with JALR*/
		when(branchforward.io.forward_a === "b0000".U) {
      			branchlogic.io.rs1_in := register.io.rs1
      			JALR.io.A := register.io.rs1
    		} .elsewhen(branchforward.io.forward_a === "b0001".U) {
      			branchlogic.io.rs1_in := alu.io.x
      			JALR.io.A := register.io.rs1
    		} .elsewhen(branchforward.io.forward_a === "b0010".U) {
      			branchlogic.io.rs1_in := ex_mem.io.Alu_out2
      			JALR.io.A := register.io.rs1
    		} .elsewhen(branchforward.io.forward_a === "b0011".U) {
      			branchlogic.io.rs1_in := register.io.WriteData
      			JALR.io.A := register.io.rs1
    		} .elsewhen(branchforward.io.forward_a === "b0100".U) {
      			branchlogic.io.rs1_in := DataMemory.io.Data
      			JALR.io.A := register.io.rs1
    		} .elsewhen(branchforward.io.forward_a === "b0101".U) {
      			branchlogic.io.rs1_in := register.io.WriteData
      			JALR.io.A := register.io.rs1
		}.elsewhen(branchforward.io.forward_a === "b0110".U) {
        		JALR.io.A := alu.io.x
        		branchlogic.io.rs1_in := register.io.rs1
    		} .elsewhen(branchforward.io.forward_a === "b0111".U) {
        		JALR.io.A := ex_mem.io.Alu_out2
        		branchlogic.io.rs1_in := register.io.rs1
    		} .elsewhen(branchforward.io.forward_a === "b1000".U) {
        		JALR.io.A := register.io.WriteData
        		branchlogic.io.rs1_in := register.io.rs1
    		} .elsewhen(branchforward.io.forward_a === "b1001".U) {
        		JALR.io.A := DataMemory.io.Data
        		branchlogic.io.rs1_in := register.io.rs1
    		} .elsewhen(branchforward.io.forward_a === "b1010".U) {
       			JALR.io.A := register.io.WriteData
        		branchlogic.io.rs1_in := register.io.rs1
    		}.otherwise {
        		branchlogic.io.rs1_in := register.io.rs1
        		JALR.io.A := register.io.rs1
    		}


   
    		when(branchforward.io.forward_b === "b0000".U) {
			branchlogic.io.rs2_in := register.io.rs2
    		} .elsewhen(branchforward.io.forward_b === "b0001".U) {
			branchlogic.io.rs2_in := alu.io.x
    		} .elsewhen(branchforward.io.forward_b === "b0010".U) {
			branchlogic.io.rs2_in := ex_mem.io.Alu_out2
    		} .elsewhen(branchforward.io.forward_b === "b0011".U) {
			branchlogic.io.rs2_in := register.io.WriteData
    		} .elsewhen(branchforward.io.forward_b === "b0100".U) {
			branchlogic.io.rs2_in := DataMemory.io.Data
    		} .elsewhen(branchforward.io.forward_b === "b0101".U) {
			branchlogic.io.rs2_in := register.io.WriteData
    		}.otherwise {
        		branchlogic.io.rs2_in := register.io.rs2
      		}

    		JALR.io.B := immediate.io.I_Immediate		





		/*Deciding Immediate or Rs2 for ALU input B */
		
		when(control.io.extend_sel===1.U){
			when(control.io.operand_A_sel===3.U){
				when(control.io.operand_B_sel===1.U){
					id_ex.io.Immediate:=immediate.io.U_Immediate
				}
			}
		}.elsewhen(control.io.extend_sel===2.U){
			id_ex.io.Immediate:=immediate.io.S_Immediate
		}.otherwise{
			id_ex.io.Immediate:=immediate.io.I_Immediate
		}

		/*Initialising HazardDetect Module*/
		hazardDetection.io.if_id_inst := if_id.io.rdData
		hazardDetection.io.if_id_memread := control.io.MemRead
        	hazardDetection.io.id_ex_memread := id_ex.io.MemRead
        	hazardDetection.io.id_ex_rd_sel := id_ex.io.rd_sel_out
        	hazardDetection.io.if_id_pc_in := if_id.io.pc4_out
        	hazardDetection.io.current_pc_in := if_id.io.pc_out
		hazardDetection.io.rs1_sel:=if_id.io.rdData(19,15)
		hazardDetection.io.rs2_sel:=if_id.io.rdData(24, 20)
		hazardDetection.io.control_branch:=control.io.Branch2
		
		

		
		//Forwarding Instruction If Hazard Detected to be stalled
		when(hazardDetection.io.inst_forward === "b1".U) {
		      if_id.io.data_in := hazardDetection.io.inst_out
		      if_id.io.pc_in := hazardDetection.io.current_pc_out
	        } .otherwise {
        	      if_id.io.data_in := instmem.io.rdData
    		}


		//Forwarding PC if Hazard Detected to be Stalled
		when(hazardDetection.io.pc_forward === "b1".U) {
      			PC.io.input := hazardDetection.io.pc_out
    		} .otherwise {
        		when(control.io.next_PC_sel === "b01".U){
         			 when((branchlogic.io.output_x === 1.U && branchlogic.io.branch2 === 1.U)){
            				PC.io.input := immediate.io.SB_Immediate.asUInt
            				if_id.io.pc_in := 0.U
            				if_id.io.pc4_in := 0.U
            				if_id.io.data_in := 0.U
          			} .otherwise {
					when(control.io.Branch2 === 1.U && id_ex.io.MemRead === 1.U){
						io.branch_stall:=1.U
						PC.io.input := immediate.io.SB_Immediate.asUInt
						if_id.io.pc_in := 0.U
            					if_id.io.pc4_in := 0.U
            					if_id.io.data_in := 0.U
					}.otherwise{
					PC.io.input:= PC.io.pc4
					}
				}
			
			

        		} .elsewhen(control.io.next_PC_sel === "b10".U) {
          			PC.io.input := immediate.io.UJ_Immediate.asUInt
          			if_id.io.pc_in := 0.U
          			if_id.io.pc4_in := 0.U
          			if_id.io.data_in := 0.U
        		} .elsewhen(control.io.next_PC_sel === "b11".U) {
         			 PC.io.input := JALR.io.x.asUInt
          			 if_id.io.pc_in := 0.U
          			 if_id.io.pc4_in := 0.U
          			 if_id.io.data_in := 0.U
       			}.elsewhen(control.io.next_PC_sel ==="b00".U){
    				when(id_ex.io.MemRead===1.U){
					PC.io.input:= if_id.io.pc4_out
				}.elsewhen(id_ex.io.MemRead===0.U){
					PC.io.input:= PC.io.pc4
				}
			}
		}

		//Control Hazard pins set to be either set to 0's or 1's
	 	when(hazardDetection.io.ctrl_forward === "b1".U) {
        		id_ex.io.ctMemWr_in := 0.U
        		id_ex.io.ctMemRd_in := 0.U
        		id_ex.io.ctBranch_in := 0.U
        		id_ex.io.ctRegWr_in := 0.U
        		id_ex.io.ctMemToReg_in := 0.U
        		id_ex.io.ctAluOp_in := 0.U
        		id_ex.io.ctOpA_sel_in := 0.U
        		id_ex.io.ctOpB_sel_in := 0.U
        		id_ex.io.ctnextPc_sel_in := 0.U
    		}.otherwise {
        		id_ex.io.ctMemWr_in := control.io.MemoryWrite
        		id_ex.io.ctMemRd_in := control.io.MemRead
        		id_ex.io.ctBranch_in := control.io.Branch2
        		id_ex.io.ctRegWr_in := control.io.RegWrite
        		id_ex.io.ctMemToReg_in := control.io.MemtoReg
        		id_ex.io.ctAluOp_in := control.io.ALUoperation
        		id_ex.io.ctOpA_sel_in := control.io.operand_A_sel
        		id_ex.io.ctOpB_sel_in := control.io.operand_B_sel
        		id_ex.io.ctnextPc_sel_in := control.io.next_PC_sel
    		}
	
		



		/* Instruction-Decode to Instruction-Execute IO's */
		id_ex.io.PC:=if_id.io.pc_out
		id_ex.io.PC4:=if_id.io.pc4_out
		id_ex.io.rs1_in:=register.io.rs1
		id_ex.io.rs2_in:=register.io.rs2
		id_ex.io.func3_in:=if_id.io.rdData(14,12)
		id_ex.io.func7_in:=if_id.io.rdData(31,25)
		id_ex.io.rs1_sel_in:=if_id.io.rdData(19,15)
		id_ex.io.rs2_sel_in:=if_id.io.rdData(24,20)
		

		/*Initialise StructDetect Module*/
		structdetect.io.rs1_sel := if_id.io.rdData(19, 15)
      		structdetect.io.rs2_sel := if_id.io.rdData(24, 20)
      		structdetect.io.mem_wb_rd_sel := mem_wb.io.Rd_sel_out
      		structdetect.io.mem_wb_regwrite := mem_wb.io.Regwr_out
        
        	when(structdetect.io.forward_rs1 === 1.U) {
			id_ex.io.rs1_in := register.io.WriteData
        	}.elsewhen(structdetect.io.forward_rs1 === 0.U) {
			id_ex.io.rs1_in := register.io.rs1
		}
        	

		when(structdetect.io.forward_rs2 === 1.U) {
          		id_ex.io.rs2_in := register.io.WriteData
        	}.elsewhen(structdetect.io.forward_rs2 === 0.U) {
			id_ex.io.rs2_in:=register.io.rs2
		}	


		/* Instruction-Execute to Memory IO,s */
		ex_mem.io.Memwr:=id_ex.io.MemWrite
		ex_mem.io.Memrd:=id_ex.io.MemRead
		ex_mem.io.MemtoReg:=id_ex.io.MemtoReg
		ex_mem.io.Rs2:=id_ex.io.rs2

		/* ALU and ALUOperation Modules */
		alucontrol.io.Aluop:=id_ex.io.ALUoperation
		alucontrol.io.Func7:=id_ex.io.func7_out
		alucontrol.io.Func3:=id_ex.io.func3_out
		alu.io.Aluop:=alucontrol.io.control

		forward.io.rs1_sel_id:=id_ex.io.rs1_sel_out
		forward.io.rs2_sel_id:=id_ex.io.rs2_sel_out
		forward.io.ex_mem_rd:=ex_mem.io.Rd_sel_out
		forward.io.mem_wb_rd:=mem_wb.io.Rd_sel_out
		forward.io.ex_mem_regwrite:=ex_mem.io.Regwr_out
		forward.io.mem_wb_regwrite:=mem_wb.io.Regwr_out
		
		
			
		
		
		
		
		//  ALU input A with forwarding to either be PC or PC4 or RS1
    		when (id_ex.io.operand_A_sel === "b10".U) {
      			alu.io.A := id_ex.io.pc4_out.asSInt
		}.elsewhen(id_ex.io.operand_A_sel ==="b01".U){
			alu.io.A:=id_ex.io.pc_out.asSInt
    		}.elsewhen(id_ex.io.operand_A_sel ==="b00".U) {
       			 when(forward.io.forward_a === "b00".U) {
          			alu.io.A := id_ex.io.rs1
        		} .elsewhen(forward.io.forward_a === "b01".U) {
				alu.io.A := register.io.WriteData
			} .elsewhen(forward.io.forward_a === "b10".U) {
          			alu.io.A := ex_mem.io.Alu_out2
					
        		}
   		}

  		
		//  ALU input B with forwarding if immediate is selected via operand_B
    		when(id_ex.io.operand_B_sel === "b1".U) {
      			alu.io.B := id_ex.io.Immediate_out
			when(forward.io.forward_b ==="b01".U){		
				ex_mem.io.Rs2 := register.io.WriteData
			}.elsewhen(forward.io.forward_b==="b10".U){
				ex_mem.io.Rs2:=ex_mem.io.Alu_out2
			}.elsewhen(forward.io.forward_b === "b00".U){
				ex_mem.io.Rs2:=id_ex.io.rs2
			}

		//  ALU input B with forwarding if rs2 is selected via operand_B
    		} .elsewhen(id_ex.io.operand_B_sel === "b0".U) {
      			when(forward.io.forward_b === "b00".U) {
        			alu.io.B := id_ex.io.rs2
				ex_mem.io.Rs2:=id_ex.io.rs2
      			} .elsewhen(forward.io.forward_b === "b01".U) {
        			alu.io.B := register.io.WriteData
				ex_mem.io.Rs2:=register.io.WriteData
			} .elsewhen(forward.io.forward_b === "b10".U) {
        			alu.io.B := ex_mem.io.Alu_out2
        			ex_mem.io.Rs2:=ex_mem.io.Alu_out2
      			}
    		}
		
		ex_mem.io.Alu_out:=alu.io.x

		/* JALR 
		
		when (control.io.next_PC_sel===1.U){
			when(control.io.MemRead===0.U){
				PC.io.input:= PC.io.pc + 4.U
			}.elsewhen(control.io.MemRead===1.U){
				PC.io.input:=id_ex.io.pc_out + 4.U
			}
			
			
		}.elsewhen(control.io.next_PC_sel===0.U){
			when(control.io.MemRead===0.U){
					PC.io.input:= PC.io.pc4
				}.elsewhen(control.io.MemRead===1.U){
					PC.io.input:=id_ex.io.pc4_out
				}
		}*/


		/* Data Memory Module */
		DataMemory.io.wrAddr:=ex_mem.io.Alu_out2(9,2)
		DataMemory.io.wrData:=ex_mem.io.Rs2_out
		DataMemory.io.MemRead:=ex_mem.io.Memrd_out
		DataMemory.io.MemWrite:=ex_mem.io.Memwr_out

		/* Memory to Write-Back IO's */
		mem_wb.io.data_mem_in:=DataMemory.io.Data
		mem_wb.io.Aluout:=ex_mem.io.Alu_out2 
		mem_wb.io.MemtoReg:=ex_mem.io.MemtoReg_out

		/* Final Write-Back Stage */
		register.io.WriteData := 0.S
		when(mem_wb.io.MemtoReg_out ===1.U){		
			register.io.WriteData:=mem_wb.io.data_mem_out
			io.reg_out:=mem_wb.io.data_mem_out
		}.elsewhen(mem_wb.io.MemtoReg_out ===0.U){	
			register.io.WriteData:=mem_wb.io.Aluout_2
		}



		
		


		/*Single Cycle Core Code
		PC.io.input:= 0.U#
		instmem.io.wrAddr:=PC.io.pc(11,2)#
		io.instruction:=instmem.io.rdData#

		control.io.opcode:=io.instruction(6,0)#
		immediate.io.Instruction :=io.instruction#
		immediate.io.PC:=PC.io.pc#
		
		alucontrol.io.Aluop := control.io.ALUoperation#
		alu.io.Aluop:=alucontrol.io.control#
		alucontrol.io.Func7:=io.instruction(30)#
		alucontrol.io.Func3:=io.instruction(14,12)#
		
		register.io.rs1_sel:=io.instruction(19,15)#
		register.io.rs2_sel:=io.instruction(24,20)#
		register.io.rd_sel:=io.instruction(11,7)#
		register.io.regwrite:=control.io.RegWrite#

		alu.io.A :=register.io.rs1
		when(control.io.operand_B_sel===1.U){
			val b23 = immediate.io.I_Immediate.asSInt#	
			alu.io.B:=b23#
		}.otherwise
		{
			alu.io.B:=register.io.rs2#
		}		

		register.io.WriteData := alu.io.x#
		io.reg_out := register.io.WriteData#

		io.branch:=control.io.Branch2#
		io.branch2:=alu.io.AluBranch#
		when(control.io.operand_A_sel===2.U){
			alu.io.A:=PC.io.pc4.asSInt
		}.elsewhen(control.io.operand_A_sel===0.U){
			alu.io.A:=register.io.rs1#
		}
	/*JALR*/when (control.io.next_PC_sel===1.U){
			when(io.branch ===1.U & io.branch2 === 1.U){
				PC.io.input:=immediate.io.SB_Immediate.asUInt#
			}.otherwise{
				PC.io.input:= PC.io.pc + 4.U#
			}
		}.elsewhen(control.io.next_PC_sel===3.U){
				val JALR=Module(new Jalr()) 
				JALR.io.A:=register.io.rs1#
				JALR.io.B:=immediate.io.I_Immediate#
				PC.io.input:=JALR.io.x.asUInt#
		}.elsewhen(control.io.next_PC_sel===2.U){
			PC.io.input:=immediate.io.UJ_Immediate.asUInt#
			
		}.elsewhen(control.io.next_PC_sel===0.U){
			PC.io.input:=PC.io.pc4#
		}				
			when(control.io.extend_sel===2.U){
			PC.io.input:=PC.io.pc4#
			alu.io.A:=register.io.rs1#
			alu.io.B:=immediate.io.S_Immediate#
		}
			when(control.io.extend_sel===1.U){
				when(control.io.operand_A_sel===3.U){
					when(control.io.operand_B_sel===1.U){
						alu.io.A:=register.io.rs1#
						alu.io.B:=immediate.io.U_Immediate#
							when(control.io.MemtoReg===1.U){
								register.io.WriteData:=alu.io.x#
							}
						}
					}
				}
			
						
		

		DataMemory.io.wrAddr:=alu.io.x(9,2)#
		DataMemory.io.wrData:=register.io.rs2#
		DataMemory.io.MemRead:=control.io.MemRead#
		DataMemory.io.MemWrite:=control.io.MemoryWrite#
		when(control.io.MemtoReg ===1.U){		
			register.io.WriteData:=DataMemory.io.Data#
		}.elsewhen(control.io.MemtoReg ===0.U){	
			register.io.WriteData:=alu.io.x#
		}
}*/
}
	
