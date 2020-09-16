module InstructionTypeDecode(
  input  [6:0] io_opcode,
  output       io_R_Format,
  output       io_Load,
  output       io_Store,
  output       io_Branch,
  output       io_I_Type,
  output       io_JALR,
  output       io_JAL,
  output       io_LUI
);
  wire  _T_32; // @[InstructionTypeDecode.scala 25:24]
  wire  _T_35; // @[InstructionTypeDecode.scala 27:31]
  wire  _T_38; // @[InstructionTypeDecode.scala 29:31]
  wire  _T_41; // @[InstructionTypeDecode.scala 31:31]
  wire  _T_44; // @[InstructionTypeDecode.scala 33:31]
  wire  _T_47; // @[InstructionTypeDecode.scala 35:31]
  wire  _T_50; // @[InstructionTypeDecode.scala 37:31]
  wire  _T_53; // @[InstructionTypeDecode.scala 39:31]
  wire  _GEN_2; // @[InstructionTypeDecode.scala 37:48]
  wire  _GEN_4; // @[InstructionTypeDecode.scala 35:48]
  wire  _GEN_5; // @[InstructionTypeDecode.scala 35:48]
  wire  _GEN_7; // @[InstructionTypeDecode.scala 33:48]
  wire  _GEN_8; // @[InstructionTypeDecode.scala 33:48]
  wire  _GEN_9; // @[InstructionTypeDecode.scala 33:48]
  wire  _GEN_11; // @[InstructionTypeDecode.scala 31:48]
  wire  _GEN_12; // @[InstructionTypeDecode.scala 31:48]
  wire  _GEN_13; // @[InstructionTypeDecode.scala 31:48]
  wire  _GEN_14; // @[InstructionTypeDecode.scala 31:48]
  wire  _GEN_16; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_17; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_18; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_19; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_20; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_22; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_23; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_24; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_25; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_26; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_27; // @[InstructionTypeDecode.scala 27:48]
  assign _T_32 = io_opcode == 7'h33; // @[InstructionTypeDecode.scala 25:24]
  assign _T_35 = io_opcode == 7'h3; // @[InstructionTypeDecode.scala 27:31]
  assign _T_38 = io_opcode == 7'h23; // @[InstructionTypeDecode.scala 29:31]
  assign _T_41 = io_opcode == 7'h63; // @[InstructionTypeDecode.scala 31:31]
  assign _T_44 = io_opcode == 7'h13; // @[InstructionTypeDecode.scala 33:31]
  assign _T_47 = io_opcode == 7'h67; // @[InstructionTypeDecode.scala 35:31]
  assign _T_50 = io_opcode == 7'h6f; // @[InstructionTypeDecode.scala 37:31]
  assign _T_53 = io_opcode == 7'h37; // @[InstructionTypeDecode.scala 39:31]
  assign _GEN_2 = _T_50 ? 1'h0 : _T_53; // @[InstructionTypeDecode.scala 37:48]
  assign _GEN_4 = _T_47 ? 1'h0 : _T_50; // @[InstructionTypeDecode.scala 35:48]
  assign _GEN_5 = _T_47 ? 1'h0 : _GEN_2; // @[InstructionTypeDecode.scala 35:48]
  assign _GEN_7 = _T_44 ? 1'h0 : _T_47; // @[InstructionTypeDecode.scala 33:48]
  assign _GEN_8 = _T_44 ? 1'h0 : _GEN_4; // @[InstructionTypeDecode.scala 33:48]
  assign _GEN_9 = _T_44 ? 1'h0 : _GEN_5; // @[InstructionTypeDecode.scala 33:48]
  assign _GEN_11 = _T_41 ? 1'h0 : _T_44; // @[InstructionTypeDecode.scala 31:48]
  assign _GEN_12 = _T_41 ? 1'h0 : _GEN_7; // @[InstructionTypeDecode.scala 31:48]
  assign _GEN_13 = _T_41 ? 1'h0 : _GEN_8; // @[InstructionTypeDecode.scala 31:48]
  assign _GEN_14 = _T_41 ? 1'h0 : _GEN_9; // @[InstructionTypeDecode.scala 31:48]
  assign _GEN_16 = _T_38 ? 1'h0 : _T_41; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_17 = _T_38 ? 1'h0 : _GEN_11; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_18 = _T_38 ? 1'h0 : _GEN_12; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_19 = _T_38 ? 1'h0 : _GEN_13; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_20 = _T_38 ? 1'h0 : _GEN_14; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_22 = _T_35 ? 1'h0 : _T_38; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_23 = _T_35 ? 1'h0 : _GEN_16; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_24 = _T_35 ? 1'h0 : _GEN_17; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_25 = _T_35 ? 1'h0 : _GEN_18; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_26 = _T_35 ? 1'h0 : _GEN_19; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_27 = _T_35 ? 1'h0 : _GEN_20; // @[InstructionTypeDecode.scala 27:48]
  assign io_R_Format = io_opcode == 7'h33; // @[InstructionTypeDecode.scala 16:28 InstructionTypeDecode.scala 26:28]
  assign io_Load = _T_32 ? 1'h0 : _T_35; // @[InstructionTypeDecode.scala 17:24 InstructionTypeDecode.scala 28:24]
  assign io_Store = _T_32 ? 1'h0 : _GEN_22; // @[InstructionTypeDecode.scala 18:25 InstructionTypeDecode.scala 30:25]
  assign io_Branch = _T_32 ? 1'h0 : _GEN_23; // @[InstructionTypeDecode.scala 19:26 InstructionTypeDecode.scala 32:26]
  assign io_I_Type = _T_32 ? 1'h0 : _GEN_24; // @[InstructionTypeDecode.scala 20:26 InstructionTypeDecode.scala 34:26]
  assign io_JALR = _T_32 ? 1'h0 : _GEN_25; // @[InstructionTypeDecode.scala 21:24 InstructionTypeDecode.scala 36:24]
  assign io_JAL = _T_32 ? 1'h0 : _GEN_26; // @[InstructionTypeDecode.scala 22:23 InstructionTypeDecode.scala 38:23]
  assign io_LUI = _T_32 ? 1'h0 : _GEN_27; // @[InstructionTypeDecode.scala 23:23 InstructionTypeDecode.scala 40:23]
endmodule
module control_decode(
  input        io_R_Format,
  input        io_Load,
  input        io_Store,
  input        io_Branch,
  input        io_I_Type,
  input        io_JALR,
  input        io_JAL,
  input        io_LUI,
  output       io_MemWrite,
  output       io_Branch2,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_ALUoperation,
  output [1:0] io_operand_A_sel,
  output [1:0] io_operand_B_sel,
  output [1:0] io_extend_sel,
  output [1:0] io_next_PC_sel
);
  wire [2:0] _GEN_1; // @[control_decode.scala 77:36]
  wire [1:0] _GEN_2; // @[control_decode.scala 77:36]
  wire  _GEN_3; // @[control_decode.scala 71:35]
  wire [2:0] _GEN_4; // @[control_decode.scala 71:35]
  wire [1:0] _GEN_5; // @[control_decode.scala 71:35]
  wire [1:0] _GEN_6; // @[control_decode.scala 71:35]
  wire  _GEN_7; // @[control_decode.scala 71:35]
  wire  _GEN_8; // @[control_decode.scala 65:37]
  wire [2:0] _GEN_9; // @[control_decode.scala 65:37]
  wire [1:0] _GEN_10; // @[control_decode.scala 65:37]
  wire [1:0] _GEN_11; // @[control_decode.scala 65:37]
  wire  _GEN_12; // @[control_decode.scala 65:37]
  wire  _GEN_13; // @[control_decode.scala 59:39]
  wire [2:0] _GEN_14; // @[control_decode.scala 59:39]
  wire  _GEN_15; // @[control_decode.scala 59:39]
  wire [1:0] _GEN_16; // @[control_decode.scala 59:39]
  wire [1:0] _GEN_17; // @[control_decode.scala 59:39]
  wire  _GEN_18; // @[control_decode.scala 59:39]
  wire [2:0] _GEN_20; // @[control_decode.scala 54:39]
  wire [1:0] _GEN_21; // @[control_decode.scala 54:39]
  wire  _GEN_22; // @[control_decode.scala 54:39]
  wire  _GEN_23; // @[control_decode.scala 54:39]
  wire [1:0] _GEN_24; // @[control_decode.scala 54:39]
  wire  _GEN_25; // @[control_decode.scala 54:39]
  wire [2:0] _GEN_27; // @[control_decode.scala 48:37]
  wire  _GEN_28; // @[control_decode.scala 48:37]
  wire [1:0] _GEN_29; // @[control_decode.scala 48:37]
  wire  _GEN_30; // @[control_decode.scala 48:37]
  wire [1:0] _GEN_31; // @[control_decode.scala 48:37]
  wire  _GEN_32; // @[control_decode.scala 48:37]
  wire [1:0] _GEN_33; // @[control_decode.scala 48:37]
  wire  _GEN_35; // @[control_decode.scala 41:37]
  wire  _GEN_36; // @[control_decode.scala 41:37]
  wire [2:0] _GEN_37; // @[control_decode.scala 41:37]
  wire  _GEN_38; // @[control_decode.scala 41:37]
  wire [1:0] _GEN_39; // @[control_decode.scala 41:37]
  wire  _GEN_40; // @[control_decode.scala 41:37]
  wire [1:0] _GEN_41; // @[control_decode.scala 41:37]
  wire [1:0] _GEN_42; // @[control_decode.scala 41:37]
  wire  _GEN_45; // @[control_decode.scala 39:42]
  assign _GEN_1 = io_LUI ? 3'h6 : 3'h0; // @[control_decode.scala 77:36]
  assign _GEN_2 = io_LUI ? 2'h3 : 2'h0; // @[control_decode.scala 77:36]
  assign _GEN_3 = io_JAL ? 1'h1 : io_LUI; // @[control_decode.scala 71:35]
  assign _GEN_4 = io_JAL ? 3'h3 : _GEN_1; // @[control_decode.scala 71:35]
  assign _GEN_5 = io_JAL ? 2'h2 : _GEN_2; // @[control_decode.scala 71:35]
  assign _GEN_6 = io_JAL ? 2'h2 : 2'h0; // @[control_decode.scala 71:35]
  assign _GEN_7 = io_JAL ? 1'h0 : io_LUI; // @[control_decode.scala 71:35]
  assign _GEN_8 = io_JALR ? 1'h1 : _GEN_3; // @[control_decode.scala 65:37]
  assign _GEN_9 = io_JALR ? 3'h3 : _GEN_4; // @[control_decode.scala 65:37]
  assign _GEN_10 = io_JALR ? 2'h2 : _GEN_5; // @[control_decode.scala 65:37]
  assign _GEN_11 = io_JALR ? 2'h3 : _GEN_6; // @[control_decode.scala 65:37]
  assign _GEN_12 = io_JALR ? 1'h0 : _GEN_7; // @[control_decode.scala 65:37]
  assign _GEN_13 = io_I_Type ? 1'h1 : _GEN_8; // @[control_decode.scala 59:39]
  assign _GEN_14 = io_I_Type ? 3'h1 : _GEN_9; // @[control_decode.scala 59:39]
  assign _GEN_15 = io_I_Type ? 1'h1 : _GEN_12; // @[control_decode.scala 59:39]
  assign _GEN_16 = io_I_Type ? 2'h0 : _GEN_10; // @[control_decode.scala 59:39]
  assign _GEN_17 = io_I_Type ? 2'h0 : _GEN_11; // @[control_decode.scala 59:39]
  assign _GEN_18 = io_I_Type ? 1'h0 : _GEN_12; // @[control_decode.scala 59:39]
  assign _GEN_20 = io_Branch ? 3'h2 : _GEN_14; // @[control_decode.scala 54:39]
  assign _GEN_21 = io_Branch ? 2'h1 : _GEN_17; // @[control_decode.scala 54:39]
  assign _GEN_22 = io_Branch ? 1'h0 : _GEN_13; // @[control_decode.scala 54:39]
  assign _GEN_23 = io_Branch ? 1'h0 : _GEN_15; // @[control_decode.scala 54:39]
  assign _GEN_24 = io_Branch ? 2'h0 : _GEN_16; // @[control_decode.scala 54:39]
  assign _GEN_25 = io_Branch ? 1'h0 : _GEN_18; // @[control_decode.scala 54:39]
  assign _GEN_27 = io_Store ? 3'h5 : _GEN_20; // @[control_decode.scala 48:37]
  assign _GEN_28 = io_Store ? 1'h1 : _GEN_23; // @[control_decode.scala 48:37]
  assign _GEN_29 = io_Store ? 2'h2 : {{1'd0}, _GEN_25}; // @[control_decode.scala 48:37]
  assign _GEN_30 = io_Store ? 1'h0 : io_Branch; // @[control_decode.scala 48:37]
  assign _GEN_31 = io_Store ? 2'h0 : _GEN_21; // @[control_decode.scala 48:37]
  assign _GEN_32 = io_Store ? 1'h0 : _GEN_22; // @[control_decode.scala 48:37]
  assign _GEN_33 = io_Store ? 2'h0 : _GEN_24; // @[control_decode.scala 48:37]
  assign _GEN_35 = io_Load ? 1'h1 : _GEN_32; // @[control_decode.scala 41:37]
  assign _GEN_36 = io_Load ? 1'h1 : _GEN_28; // @[control_decode.scala 41:37]
  assign _GEN_37 = io_Load ? 3'h4 : _GEN_27; // @[control_decode.scala 41:37]
  assign _GEN_38 = io_Load ? 1'h0 : io_Store; // @[control_decode.scala 41:37]
  assign _GEN_39 = io_Load ? 2'h0 : _GEN_29; // @[control_decode.scala 41:37]
  assign _GEN_40 = io_Load ? 1'h0 : _GEN_30; // @[control_decode.scala 41:37]
  assign _GEN_41 = io_Load ? 2'h0 : _GEN_31; // @[control_decode.scala 41:37]
  assign _GEN_42 = io_Load ? 2'h0 : _GEN_33; // @[control_decode.scala 41:37]
  assign _GEN_45 = io_R_Format ? 1'h0 : _GEN_36; // @[control_decode.scala 39:42]
  assign io_MemWrite = io_R_Format ? 1'h0 : _GEN_38; // @[control_decode.scala 27:28 control_decode.scala 28:28 control_decode.scala 49:28]
  assign io_Branch2 = io_R_Format ? 1'h0 : _GEN_40; // @[control_decode.scala 29:27 control_decode.scala 55:27]
  assign io_MemRead = io_R_Format ? 1'h0 : io_Load; // @[control_decode.scala 30:27 control_decode.scala 42:27]
  assign io_RegWrite = io_R_Format ? 1'h1 : _GEN_35; // @[control_decode.scala 31:28 control_decode.scala 40:36 control_decode.scala 44:28 control_decode.scala 60:28 control_decode.scala 66:28 control_decode.scala 72:28 control_decode.scala 78:28]
  assign io_MemtoReg = io_R_Format ? 1'h0 : io_Load; // @[control_decode.scala 32:28 control_decode.scala 43:28]
  assign io_ALUoperation = io_R_Format ? 3'h0 : _GEN_37; // @[control_decode.scala 33:32 control_decode.scala 46:32 control_decode.scala 50:32 control_decode.scala 56:32 control_decode.scala 61:32 control_decode.scala 67:32 control_decode.scala 73:32 control_decode.scala 79:32]
  assign io_operand_A_sel = io_R_Format ? 2'h0 : _GEN_42; // @[control_decode.scala 34:33 control_decode.scala 68:33 control_decode.scala 74:33 control_decode.scala 80:33]
  assign io_operand_B_sel = {{1'd0}, _GEN_45}; // @[control_decode.scala 35:33 control_decode.scala 45:33 control_decode.scala 51:33 control_decode.scala 62:33 control_decode.scala 81:33]
  assign io_extend_sel = io_R_Format ? 2'h0 : _GEN_39; // @[control_decode.scala 36:30 control_decode.scala 52:30 control_decode.scala 82:30]
  assign io_next_PC_sel = io_R_Format ? 2'h0 : _GEN_41; // @[control_decode.scala 37:31 control_decode.scala 57:31 control_decode.scala 69:31 control_decode.scala 75:31]
endmodule
module control(
  input  [6:0] io_opcode,
  output       io_MemoryWrite,
  output       io_Branch2,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_ALUoperation,
  output [1:0] io_operand_A_sel,
  output       io_operand_B_sel,
  output [1:0] io_extend_sel,
  output [1:0] io_next_PC_sel
);
  wire [6:0] InstDecode_io_opcode; // @[control.scala 31:40]
  wire  InstDecode_io_R_Format; // @[control.scala 31:40]
  wire  InstDecode_io_Load; // @[control.scala 31:40]
  wire  InstDecode_io_Store; // @[control.scala 31:40]
  wire  InstDecode_io_Branch; // @[control.scala 31:40]
  wire  InstDecode_io_I_Type; // @[control.scala 31:40]
  wire  InstDecode_io_JALR; // @[control.scala 31:40]
  wire  InstDecode_io_JAL; // @[control.scala 31:40]
  wire  InstDecode_io_LUI; // @[control.scala 31:40]
  wire  CtrlDecode_io_R_Format; // @[control.scala 32:40]
  wire  CtrlDecode_io_Load; // @[control.scala 32:40]
  wire  CtrlDecode_io_Store; // @[control.scala 32:40]
  wire  CtrlDecode_io_Branch; // @[control.scala 32:40]
  wire  CtrlDecode_io_I_Type; // @[control.scala 32:40]
  wire  CtrlDecode_io_JALR; // @[control.scala 32:40]
  wire  CtrlDecode_io_JAL; // @[control.scala 32:40]
  wire  CtrlDecode_io_LUI; // @[control.scala 32:40]
  wire  CtrlDecode_io_MemWrite; // @[control.scala 32:40]
  wire  CtrlDecode_io_Branch2; // @[control.scala 32:40]
  wire  CtrlDecode_io_MemRead; // @[control.scala 32:40]
  wire  CtrlDecode_io_RegWrite; // @[control.scala 32:40]
  wire  CtrlDecode_io_MemtoReg; // @[control.scala 32:40]
  wire [2:0] CtrlDecode_io_ALUoperation; // @[control.scala 32:40]
  wire [1:0] CtrlDecode_io_operand_A_sel; // @[control.scala 32:40]
  wire [1:0] CtrlDecode_io_operand_B_sel; // @[control.scala 32:40]
  wire [1:0] CtrlDecode_io_extend_sel; // @[control.scala 32:40]
  wire [1:0] CtrlDecode_io_next_PC_sel; // @[control.scala 32:40]
  InstructionTypeDecode InstDecode ( // @[control.scala 31:40]
    .io_opcode(InstDecode_io_opcode),
    .io_R_Format(InstDecode_io_R_Format),
    .io_Load(InstDecode_io_Load),
    .io_Store(InstDecode_io_Store),
    .io_Branch(InstDecode_io_Branch),
    .io_I_Type(InstDecode_io_I_Type),
    .io_JALR(InstDecode_io_JALR),
    .io_JAL(InstDecode_io_JAL),
    .io_LUI(InstDecode_io_LUI)
  );
  control_decode CtrlDecode ( // @[control.scala 32:40]
    .io_R_Format(CtrlDecode_io_R_Format),
    .io_Load(CtrlDecode_io_Load),
    .io_Store(CtrlDecode_io_Store),
    .io_Branch(CtrlDecode_io_Branch),
    .io_I_Type(CtrlDecode_io_I_Type),
    .io_JALR(CtrlDecode_io_JALR),
    .io_JAL(CtrlDecode_io_JAL),
    .io_LUI(CtrlDecode_io_LUI),
    .io_MemWrite(CtrlDecode_io_MemWrite),
    .io_Branch2(CtrlDecode_io_Branch2),
    .io_MemRead(CtrlDecode_io_MemRead),
    .io_RegWrite(CtrlDecode_io_RegWrite),
    .io_MemtoReg(CtrlDecode_io_MemtoReg),
    .io_ALUoperation(CtrlDecode_io_ALUoperation),
    .io_operand_A_sel(CtrlDecode_io_operand_A_sel),
    .io_operand_B_sel(CtrlDecode_io_operand_B_sel),
    .io_extend_sel(CtrlDecode_io_extend_sel),
    .io_next_PC_sel(CtrlDecode_io_next_PC_sel)
  );
  assign io_MemoryWrite = CtrlDecode_io_MemWrite; // @[control.scala 20:31 control.scala 43:31]
  assign io_Branch2 = CtrlDecode_io_Branch2; // @[control.scala 21:27 control.scala 44:27]
  assign io_MemRead = CtrlDecode_io_MemRead; // @[control.scala 22:27 control.scala 45:27]
  assign io_RegWrite = CtrlDecode_io_RegWrite; // @[control.scala 23:28 control.scala 46:28]
  assign io_MemtoReg = CtrlDecode_io_MemtoReg; // @[control.scala 24:28 control.scala 47:28]
  assign io_ALUoperation = CtrlDecode_io_ALUoperation; // @[control.scala 25:32 control.scala 48:32]
  assign io_operand_A_sel = CtrlDecode_io_operand_A_sel; // @[control.scala 26:33 control.scala 49:33]
  assign io_operand_B_sel = CtrlDecode_io_operand_B_sel[0]; // @[control.scala 27:33 control.scala 50:33]
  assign io_extend_sel = CtrlDecode_io_extend_sel; // @[control.scala 28:30 control.scala 51:30]
  assign io_next_PC_sel = CtrlDecode_io_next_PC_sel; // @[control.scala 29:31 control.scala 52:31]
  assign InstDecode_io_opcode = io_opcode; // @[control.scala 33:37]
  assign CtrlDecode_io_R_Format = InstDecode_io_R_Format; // @[control.scala 34:39]
  assign CtrlDecode_io_Load = InstDecode_io_Load; // @[control.scala 35:35]
  assign CtrlDecode_io_Store = InstDecode_io_Store; // @[control.scala 36:36]
  assign CtrlDecode_io_Branch = InstDecode_io_Branch; // @[control.scala 37:37]
  assign CtrlDecode_io_I_Type = InstDecode_io_I_Type; // @[control.scala 38:37]
  assign CtrlDecode_io_JALR = InstDecode_io_JALR; // @[control.scala 39:35]
  assign CtrlDecode_io_JAL = InstDecode_io_JAL; // @[control.scala 40:34]
  assign CtrlDecode_io_LUI = InstDecode_io_LUI; // @[control.scala 41:34]
endmodule
module reg_32(
  input         clock,
  input         io_regwrite,
  input  [4:0]  io_rd_sel,
  input  [4:0]  io_rs1_sel,
  input  [4:0]  io_rs2_sel,
  input  [31:0] io_WriteData,
  output [31:0] io_rs1,
  output [31:0] io_rs2
);
  reg [31:0] registers_c_0; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_0;
  reg [31:0] registers_c_1; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_1;
  reg [31:0] registers_c_2; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_2;
  reg [31:0] registers_c_3; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_3;
  reg [31:0] registers_c_4; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_4;
  reg [31:0] registers_c_5; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_5;
  reg [31:0] registers_c_6; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_6;
  reg [31:0] registers_c_7; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_7;
  reg [31:0] registers_c_8; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_8;
  reg [31:0] registers_c_9; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_9;
  reg [31:0] registers_c_10; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_10;
  reg [31:0] registers_c_11; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_11;
  reg [31:0] registers_c_12; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_12;
  reg [31:0] registers_c_13; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_13;
  reg [31:0] registers_c_14; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_14;
  reg [31:0] registers_c_15; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_15;
  reg [31:0] registers_c_16; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_16;
  reg [31:0] registers_c_17; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_17;
  reg [31:0] registers_c_18; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_18;
  reg [31:0] registers_c_19; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_19;
  reg [31:0] registers_c_20; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_20;
  reg [31:0] registers_c_21; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_21;
  reg [31:0] registers_c_22; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_22;
  reg [31:0] registers_c_23; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_23;
  reg [31:0] registers_c_24; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_24;
  reg [31:0] registers_c_25; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_25;
  reg [31:0] registers_c_26; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_26;
  reg [31:0] registers_c_27; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_27;
  reg [31:0] registers_c_28; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_28;
  reg [31:0] registers_c_29; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_29;
  reg [31:0] registers_c_30; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_30;
  reg [31:0] registers_c_31; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_2; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_3; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_4; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_5; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_6; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_7; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_8; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_9; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_10; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_11; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_12; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_13; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_14; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_15; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_16; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_17; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_18; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_19; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_20; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_21; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_22; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_23; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_24; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_25; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_26; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_27; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_28; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_29; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_30; // @[reg_32.scala 21:23]
  wire [31:0] _GEN_33; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_34; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_35; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_36; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_37; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_38; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_39; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_40; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_41; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_42; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_43; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_44; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_45; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_46; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_47; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_48; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_49; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_50; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_51; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_52; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_53; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_54; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_55; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_56; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_57; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_58; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_59; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_60; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_61; // @[reg_32.scala 22:24]
  wire [31:0] _GEN_62; // @[reg_32.scala 22:24]
  wire  _T_63; // @[reg_32.scala 24:40]
  wire [31:0] _GEN_65; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_66; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_67; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_68; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_69; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_70; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_71; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_72; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_73; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_74; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_75; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_76; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_77; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_78; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_79; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_80; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_81; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_82; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_83; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_84; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_85; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_86; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_87; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_88; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_89; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_90; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_91; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_92; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_93; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_94; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_95; // @[reg_32.scala 25:56]
  wire [31:0] _GEN_96; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_97; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_98; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_99; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_100; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_101; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_102; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_103; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_104; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_105; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_106; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_107; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_108; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_109; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_110; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_111; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_112; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_113; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_114; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_115; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_116; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_117; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_118; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_119; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_120; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_121; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_122; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_123; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_124; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_125; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_126; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_127; // @[reg_32.scala 27:48]
  wire [31:0] _GEN_129; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_130; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_131; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_132; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_133; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_134; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_135; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_136; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_137; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_138; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_139; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_140; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_141; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_142; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_143; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_144; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_145; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_146; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_147; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_148; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_149; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_150; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_151; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_152; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_153; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_154; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_155; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_156; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_157; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_158; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_159; // @[reg_32.scala 24:55]
  wire [31:0] _GEN_160; // @[reg_32.scala 24:55]
  assign _GEN_1 = 5'h1 == io_rs1_sel ? $signed(registers_c_1) : $signed(registers_c_0); // @[reg_32.scala 21:23]
  assign _GEN_2 = 5'h2 == io_rs1_sel ? $signed(registers_c_2) : $signed(_GEN_1); // @[reg_32.scala 21:23]
  assign _GEN_3 = 5'h3 == io_rs1_sel ? $signed(registers_c_3) : $signed(_GEN_2); // @[reg_32.scala 21:23]
  assign _GEN_4 = 5'h4 == io_rs1_sel ? $signed(registers_c_4) : $signed(_GEN_3); // @[reg_32.scala 21:23]
  assign _GEN_5 = 5'h5 == io_rs1_sel ? $signed(registers_c_5) : $signed(_GEN_4); // @[reg_32.scala 21:23]
  assign _GEN_6 = 5'h6 == io_rs1_sel ? $signed(registers_c_6) : $signed(_GEN_5); // @[reg_32.scala 21:23]
  assign _GEN_7 = 5'h7 == io_rs1_sel ? $signed(registers_c_7) : $signed(_GEN_6); // @[reg_32.scala 21:23]
  assign _GEN_8 = 5'h8 == io_rs1_sel ? $signed(registers_c_8) : $signed(_GEN_7); // @[reg_32.scala 21:23]
  assign _GEN_9 = 5'h9 == io_rs1_sel ? $signed(registers_c_9) : $signed(_GEN_8); // @[reg_32.scala 21:23]
  assign _GEN_10 = 5'ha == io_rs1_sel ? $signed(registers_c_10) : $signed(_GEN_9); // @[reg_32.scala 21:23]
  assign _GEN_11 = 5'hb == io_rs1_sel ? $signed(registers_c_11) : $signed(_GEN_10); // @[reg_32.scala 21:23]
  assign _GEN_12 = 5'hc == io_rs1_sel ? $signed(registers_c_12) : $signed(_GEN_11); // @[reg_32.scala 21:23]
  assign _GEN_13 = 5'hd == io_rs1_sel ? $signed(registers_c_13) : $signed(_GEN_12); // @[reg_32.scala 21:23]
  assign _GEN_14 = 5'he == io_rs1_sel ? $signed(registers_c_14) : $signed(_GEN_13); // @[reg_32.scala 21:23]
  assign _GEN_15 = 5'hf == io_rs1_sel ? $signed(registers_c_15) : $signed(_GEN_14); // @[reg_32.scala 21:23]
  assign _GEN_16 = 5'h10 == io_rs1_sel ? $signed(registers_c_16) : $signed(_GEN_15); // @[reg_32.scala 21:23]
  assign _GEN_17 = 5'h11 == io_rs1_sel ? $signed(registers_c_17) : $signed(_GEN_16); // @[reg_32.scala 21:23]
  assign _GEN_18 = 5'h12 == io_rs1_sel ? $signed(registers_c_18) : $signed(_GEN_17); // @[reg_32.scala 21:23]
  assign _GEN_19 = 5'h13 == io_rs1_sel ? $signed(registers_c_19) : $signed(_GEN_18); // @[reg_32.scala 21:23]
  assign _GEN_20 = 5'h14 == io_rs1_sel ? $signed(registers_c_20) : $signed(_GEN_19); // @[reg_32.scala 21:23]
  assign _GEN_21 = 5'h15 == io_rs1_sel ? $signed(registers_c_21) : $signed(_GEN_20); // @[reg_32.scala 21:23]
  assign _GEN_22 = 5'h16 == io_rs1_sel ? $signed(registers_c_22) : $signed(_GEN_21); // @[reg_32.scala 21:23]
  assign _GEN_23 = 5'h17 == io_rs1_sel ? $signed(registers_c_23) : $signed(_GEN_22); // @[reg_32.scala 21:23]
  assign _GEN_24 = 5'h18 == io_rs1_sel ? $signed(registers_c_24) : $signed(_GEN_23); // @[reg_32.scala 21:23]
  assign _GEN_25 = 5'h19 == io_rs1_sel ? $signed(registers_c_25) : $signed(_GEN_24); // @[reg_32.scala 21:23]
  assign _GEN_26 = 5'h1a == io_rs1_sel ? $signed(registers_c_26) : $signed(_GEN_25); // @[reg_32.scala 21:23]
  assign _GEN_27 = 5'h1b == io_rs1_sel ? $signed(registers_c_27) : $signed(_GEN_26); // @[reg_32.scala 21:23]
  assign _GEN_28 = 5'h1c == io_rs1_sel ? $signed(registers_c_28) : $signed(_GEN_27); // @[reg_32.scala 21:23]
  assign _GEN_29 = 5'h1d == io_rs1_sel ? $signed(registers_c_29) : $signed(_GEN_28); // @[reg_32.scala 21:23]
  assign _GEN_30 = 5'h1e == io_rs1_sel ? $signed(registers_c_30) : $signed(_GEN_29); // @[reg_32.scala 21:23]
  assign _GEN_33 = 5'h1 == io_rs2_sel ? $signed(registers_c_1) : $signed(registers_c_0); // @[reg_32.scala 22:24]
  assign _GEN_34 = 5'h2 == io_rs2_sel ? $signed(registers_c_2) : $signed(_GEN_33); // @[reg_32.scala 22:24]
  assign _GEN_35 = 5'h3 == io_rs2_sel ? $signed(registers_c_3) : $signed(_GEN_34); // @[reg_32.scala 22:24]
  assign _GEN_36 = 5'h4 == io_rs2_sel ? $signed(registers_c_4) : $signed(_GEN_35); // @[reg_32.scala 22:24]
  assign _GEN_37 = 5'h5 == io_rs2_sel ? $signed(registers_c_5) : $signed(_GEN_36); // @[reg_32.scala 22:24]
  assign _GEN_38 = 5'h6 == io_rs2_sel ? $signed(registers_c_6) : $signed(_GEN_37); // @[reg_32.scala 22:24]
  assign _GEN_39 = 5'h7 == io_rs2_sel ? $signed(registers_c_7) : $signed(_GEN_38); // @[reg_32.scala 22:24]
  assign _GEN_40 = 5'h8 == io_rs2_sel ? $signed(registers_c_8) : $signed(_GEN_39); // @[reg_32.scala 22:24]
  assign _GEN_41 = 5'h9 == io_rs2_sel ? $signed(registers_c_9) : $signed(_GEN_40); // @[reg_32.scala 22:24]
  assign _GEN_42 = 5'ha == io_rs2_sel ? $signed(registers_c_10) : $signed(_GEN_41); // @[reg_32.scala 22:24]
  assign _GEN_43 = 5'hb == io_rs2_sel ? $signed(registers_c_11) : $signed(_GEN_42); // @[reg_32.scala 22:24]
  assign _GEN_44 = 5'hc == io_rs2_sel ? $signed(registers_c_12) : $signed(_GEN_43); // @[reg_32.scala 22:24]
  assign _GEN_45 = 5'hd == io_rs2_sel ? $signed(registers_c_13) : $signed(_GEN_44); // @[reg_32.scala 22:24]
  assign _GEN_46 = 5'he == io_rs2_sel ? $signed(registers_c_14) : $signed(_GEN_45); // @[reg_32.scala 22:24]
  assign _GEN_47 = 5'hf == io_rs2_sel ? $signed(registers_c_15) : $signed(_GEN_46); // @[reg_32.scala 22:24]
  assign _GEN_48 = 5'h10 == io_rs2_sel ? $signed(registers_c_16) : $signed(_GEN_47); // @[reg_32.scala 22:24]
  assign _GEN_49 = 5'h11 == io_rs2_sel ? $signed(registers_c_17) : $signed(_GEN_48); // @[reg_32.scala 22:24]
  assign _GEN_50 = 5'h12 == io_rs2_sel ? $signed(registers_c_18) : $signed(_GEN_49); // @[reg_32.scala 22:24]
  assign _GEN_51 = 5'h13 == io_rs2_sel ? $signed(registers_c_19) : $signed(_GEN_50); // @[reg_32.scala 22:24]
  assign _GEN_52 = 5'h14 == io_rs2_sel ? $signed(registers_c_20) : $signed(_GEN_51); // @[reg_32.scala 22:24]
  assign _GEN_53 = 5'h15 == io_rs2_sel ? $signed(registers_c_21) : $signed(_GEN_52); // @[reg_32.scala 22:24]
  assign _GEN_54 = 5'h16 == io_rs2_sel ? $signed(registers_c_22) : $signed(_GEN_53); // @[reg_32.scala 22:24]
  assign _GEN_55 = 5'h17 == io_rs2_sel ? $signed(registers_c_23) : $signed(_GEN_54); // @[reg_32.scala 22:24]
  assign _GEN_56 = 5'h18 == io_rs2_sel ? $signed(registers_c_24) : $signed(_GEN_55); // @[reg_32.scala 22:24]
  assign _GEN_57 = 5'h19 == io_rs2_sel ? $signed(registers_c_25) : $signed(_GEN_56); // @[reg_32.scala 22:24]
  assign _GEN_58 = 5'h1a == io_rs2_sel ? $signed(registers_c_26) : $signed(_GEN_57); // @[reg_32.scala 22:24]
  assign _GEN_59 = 5'h1b == io_rs2_sel ? $signed(registers_c_27) : $signed(_GEN_58); // @[reg_32.scala 22:24]
  assign _GEN_60 = 5'h1c == io_rs2_sel ? $signed(registers_c_28) : $signed(_GEN_59); // @[reg_32.scala 22:24]
  assign _GEN_61 = 5'h1d == io_rs2_sel ? $signed(registers_c_29) : $signed(_GEN_60); // @[reg_32.scala 22:24]
  assign _GEN_62 = 5'h1e == io_rs2_sel ? $signed(registers_c_30) : $signed(_GEN_61); // @[reg_32.scala 22:24]
  assign _T_63 = io_rd_sel == 5'h0; // @[reg_32.scala 24:40]
  assign _GEN_65 = 5'h1 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_1); // @[reg_32.scala 25:56]
  assign _GEN_66 = 5'h2 == io_rd_sel ? $signed(32'sh0) : $signed(32'sh200); // @[reg_32.scala 25:56]
  assign _GEN_67 = 5'h3 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_3); // @[reg_32.scala 25:56]
  assign _GEN_68 = 5'h4 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_4); // @[reg_32.scala 25:56]
  assign _GEN_69 = 5'h5 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_5); // @[reg_32.scala 25:56]
  assign _GEN_70 = 5'h6 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_6); // @[reg_32.scala 25:56]
  assign _GEN_71 = 5'h7 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_7); // @[reg_32.scala 25:56]
  assign _GEN_72 = 5'h8 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_8); // @[reg_32.scala 25:56]
  assign _GEN_73 = 5'h9 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_9); // @[reg_32.scala 25:56]
  assign _GEN_74 = 5'ha == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_10); // @[reg_32.scala 25:56]
  assign _GEN_75 = 5'hb == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_11); // @[reg_32.scala 25:56]
  assign _GEN_76 = 5'hc == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_12); // @[reg_32.scala 25:56]
  assign _GEN_77 = 5'hd == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_13); // @[reg_32.scala 25:56]
  assign _GEN_78 = 5'he == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_14); // @[reg_32.scala 25:56]
  assign _GEN_79 = 5'hf == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_15); // @[reg_32.scala 25:56]
  assign _GEN_80 = 5'h10 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_16); // @[reg_32.scala 25:56]
  assign _GEN_81 = 5'h11 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_17); // @[reg_32.scala 25:56]
  assign _GEN_82 = 5'h12 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_18); // @[reg_32.scala 25:56]
  assign _GEN_83 = 5'h13 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_19); // @[reg_32.scala 25:56]
  assign _GEN_84 = 5'h14 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_20); // @[reg_32.scala 25:56]
  assign _GEN_85 = 5'h15 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_21); // @[reg_32.scala 25:56]
  assign _GEN_86 = 5'h16 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_22); // @[reg_32.scala 25:56]
  assign _GEN_87 = 5'h17 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_23); // @[reg_32.scala 25:56]
  assign _GEN_88 = 5'h18 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_24); // @[reg_32.scala 25:56]
  assign _GEN_89 = 5'h19 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_25); // @[reg_32.scala 25:56]
  assign _GEN_90 = 5'h1a == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_26); // @[reg_32.scala 25:56]
  assign _GEN_91 = 5'h1b == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_27); // @[reg_32.scala 25:56]
  assign _GEN_92 = 5'h1c == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_28); // @[reg_32.scala 25:56]
  assign _GEN_93 = 5'h1d == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_29); // @[reg_32.scala 25:56]
  assign _GEN_94 = 5'h1e == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_30); // @[reg_32.scala 25:56]
  assign _GEN_95 = 5'h1f == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_31); // @[reg_32.scala 25:56]
  assign _GEN_96 = 5'h0 == io_rd_sel ? $signed(io_WriteData) : $signed(32'sh0); // @[reg_32.scala 27:48]
  assign _GEN_97 = 5'h1 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_1); // @[reg_32.scala 27:48]
  assign _GEN_98 = 5'h2 == io_rd_sel ? $signed(io_WriteData) : $signed(32'sh200); // @[reg_32.scala 27:48]
  assign _GEN_99 = 5'h3 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_3); // @[reg_32.scala 27:48]
  assign _GEN_100 = 5'h4 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_4); // @[reg_32.scala 27:48]
  assign _GEN_101 = 5'h5 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_5); // @[reg_32.scala 27:48]
  assign _GEN_102 = 5'h6 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_6); // @[reg_32.scala 27:48]
  assign _GEN_103 = 5'h7 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_7); // @[reg_32.scala 27:48]
  assign _GEN_104 = 5'h8 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_8); // @[reg_32.scala 27:48]
  assign _GEN_105 = 5'h9 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_9); // @[reg_32.scala 27:48]
  assign _GEN_106 = 5'ha == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_10); // @[reg_32.scala 27:48]
  assign _GEN_107 = 5'hb == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_11); // @[reg_32.scala 27:48]
  assign _GEN_108 = 5'hc == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_12); // @[reg_32.scala 27:48]
  assign _GEN_109 = 5'hd == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_13); // @[reg_32.scala 27:48]
  assign _GEN_110 = 5'he == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_14); // @[reg_32.scala 27:48]
  assign _GEN_111 = 5'hf == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_15); // @[reg_32.scala 27:48]
  assign _GEN_112 = 5'h10 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_16); // @[reg_32.scala 27:48]
  assign _GEN_113 = 5'h11 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_17); // @[reg_32.scala 27:48]
  assign _GEN_114 = 5'h12 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_18); // @[reg_32.scala 27:48]
  assign _GEN_115 = 5'h13 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_19); // @[reg_32.scala 27:48]
  assign _GEN_116 = 5'h14 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_20); // @[reg_32.scala 27:48]
  assign _GEN_117 = 5'h15 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_21); // @[reg_32.scala 27:48]
  assign _GEN_118 = 5'h16 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_22); // @[reg_32.scala 27:48]
  assign _GEN_119 = 5'h17 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_23); // @[reg_32.scala 27:48]
  assign _GEN_120 = 5'h18 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_24); // @[reg_32.scala 27:48]
  assign _GEN_121 = 5'h19 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_25); // @[reg_32.scala 27:48]
  assign _GEN_122 = 5'h1a == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_26); // @[reg_32.scala 27:48]
  assign _GEN_123 = 5'h1b == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_27); // @[reg_32.scala 27:48]
  assign _GEN_124 = 5'h1c == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_28); // @[reg_32.scala 27:48]
  assign _GEN_125 = 5'h1d == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_29); // @[reg_32.scala 27:48]
  assign _GEN_126 = 5'h1e == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_30); // @[reg_32.scala 27:48]
  assign _GEN_127 = 5'h1f == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_31); // @[reg_32.scala 27:48]
  assign _GEN_129 = _T_63 ? $signed(32'sh0) : $signed(_GEN_96); // @[reg_32.scala 24:55]
  assign _GEN_130 = _T_63 ? $signed(_GEN_65) : $signed(_GEN_97); // @[reg_32.scala 24:55]
  assign _GEN_131 = _T_63 ? $signed(_GEN_66) : $signed(_GEN_98); // @[reg_32.scala 24:55]
  assign _GEN_132 = _T_63 ? $signed(_GEN_67) : $signed(_GEN_99); // @[reg_32.scala 24:55]
  assign _GEN_133 = _T_63 ? $signed(_GEN_68) : $signed(_GEN_100); // @[reg_32.scala 24:55]
  assign _GEN_134 = _T_63 ? $signed(_GEN_69) : $signed(_GEN_101); // @[reg_32.scala 24:55]
  assign _GEN_135 = _T_63 ? $signed(_GEN_70) : $signed(_GEN_102); // @[reg_32.scala 24:55]
  assign _GEN_136 = _T_63 ? $signed(_GEN_71) : $signed(_GEN_103); // @[reg_32.scala 24:55]
  assign _GEN_137 = _T_63 ? $signed(_GEN_72) : $signed(_GEN_104); // @[reg_32.scala 24:55]
  assign _GEN_138 = _T_63 ? $signed(_GEN_73) : $signed(_GEN_105); // @[reg_32.scala 24:55]
  assign _GEN_139 = _T_63 ? $signed(_GEN_74) : $signed(_GEN_106); // @[reg_32.scala 24:55]
  assign _GEN_140 = _T_63 ? $signed(_GEN_75) : $signed(_GEN_107); // @[reg_32.scala 24:55]
  assign _GEN_141 = _T_63 ? $signed(_GEN_76) : $signed(_GEN_108); // @[reg_32.scala 24:55]
  assign _GEN_142 = _T_63 ? $signed(_GEN_77) : $signed(_GEN_109); // @[reg_32.scala 24:55]
  assign _GEN_143 = _T_63 ? $signed(_GEN_78) : $signed(_GEN_110); // @[reg_32.scala 24:55]
  assign _GEN_144 = _T_63 ? $signed(_GEN_79) : $signed(_GEN_111); // @[reg_32.scala 24:55]
  assign _GEN_145 = _T_63 ? $signed(_GEN_80) : $signed(_GEN_112); // @[reg_32.scala 24:55]
  assign _GEN_146 = _T_63 ? $signed(_GEN_81) : $signed(_GEN_113); // @[reg_32.scala 24:55]
  assign _GEN_147 = _T_63 ? $signed(_GEN_82) : $signed(_GEN_114); // @[reg_32.scala 24:55]
  assign _GEN_148 = _T_63 ? $signed(_GEN_83) : $signed(_GEN_115); // @[reg_32.scala 24:55]
  assign _GEN_149 = _T_63 ? $signed(_GEN_84) : $signed(_GEN_116); // @[reg_32.scala 24:55]
  assign _GEN_150 = _T_63 ? $signed(_GEN_85) : $signed(_GEN_117); // @[reg_32.scala 24:55]
  assign _GEN_151 = _T_63 ? $signed(_GEN_86) : $signed(_GEN_118); // @[reg_32.scala 24:55]
  assign _GEN_152 = _T_63 ? $signed(_GEN_87) : $signed(_GEN_119); // @[reg_32.scala 24:55]
  assign _GEN_153 = _T_63 ? $signed(_GEN_88) : $signed(_GEN_120); // @[reg_32.scala 24:55]
  assign _GEN_154 = _T_63 ? $signed(_GEN_89) : $signed(_GEN_121); // @[reg_32.scala 24:55]
  assign _GEN_155 = _T_63 ? $signed(_GEN_90) : $signed(_GEN_122); // @[reg_32.scala 24:55]
  assign _GEN_156 = _T_63 ? $signed(_GEN_91) : $signed(_GEN_123); // @[reg_32.scala 24:55]
  assign _GEN_157 = _T_63 ? $signed(_GEN_92) : $signed(_GEN_124); // @[reg_32.scala 24:55]
  assign _GEN_158 = _T_63 ? $signed(_GEN_93) : $signed(_GEN_125); // @[reg_32.scala 24:55]
  assign _GEN_159 = _T_63 ? $signed(_GEN_94) : $signed(_GEN_126); // @[reg_32.scala 24:55]
  assign _GEN_160 = _T_63 ? $signed(_GEN_95) : $signed(_GEN_127); // @[reg_32.scala 24:55]
  assign io_rs1 = 5'h1f == io_rs1_sel ? $signed(registers_c_31) : $signed(_GEN_30); // @[reg_32.scala 21:23]
  assign io_rs2 = 5'h1f == io_rs2_sel ? $signed(registers_c_31) : $signed(_GEN_62); // @[reg_32.scala 22:24]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  registers_c_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  registers_c_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  registers_c_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  registers_c_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  registers_c_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  registers_c_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  registers_c_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  registers_c_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  registers_c_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  registers_c_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  registers_c_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  registers_c_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  registers_c_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  registers_c_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  registers_c_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  registers_c_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  registers_c_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  registers_c_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  registers_c_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  registers_c_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  registers_c_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  registers_c_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  registers_c_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  registers_c_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  registers_c_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  registers_c_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  registers_c_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  registers_c_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  registers_c_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  registers_c_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  registers_c_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  registers_c_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (io_regwrite) begin
      if (_T_63) begin
        registers_c_0 <= 32'sh0;
      end else begin
        if (5'h0 == io_rd_sel) begin
          registers_c_0 <= io_WriteData;
        end else begin
          registers_c_0 <= 32'sh0;
        end
      end
    end else begin
      registers_c_0 <= 32'sh0;
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h1 == io_rd_sel) begin
          registers_c_1 <= 32'sh0;
        end
      end else begin
        if (5'h1 == io_rd_sel) begin
          registers_c_1 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h2 == io_rd_sel) begin
          registers_c_2 <= 32'sh0;
        end else begin
          registers_c_2 <= 32'sh200;
        end
      end else begin
        if (5'h2 == io_rd_sel) begin
          registers_c_2 <= io_WriteData;
        end else begin
          registers_c_2 <= 32'sh200;
        end
      end
    end else begin
      registers_c_2 <= 32'sh200;
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h3 == io_rd_sel) begin
          registers_c_3 <= 32'sh0;
        end
      end else begin
        if (5'h3 == io_rd_sel) begin
          registers_c_3 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h4 == io_rd_sel) begin
          registers_c_4 <= 32'sh0;
        end
      end else begin
        if (5'h4 == io_rd_sel) begin
          registers_c_4 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h5 == io_rd_sel) begin
          registers_c_5 <= 32'sh0;
        end
      end else begin
        if (5'h5 == io_rd_sel) begin
          registers_c_5 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h6 == io_rd_sel) begin
          registers_c_6 <= 32'sh0;
        end
      end else begin
        if (5'h6 == io_rd_sel) begin
          registers_c_6 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h7 == io_rd_sel) begin
          registers_c_7 <= 32'sh0;
        end
      end else begin
        if (5'h7 == io_rd_sel) begin
          registers_c_7 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h8 == io_rd_sel) begin
          registers_c_8 <= 32'sh0;
        end
      end else begin
        if (5'h8 == io_rd_sel) begin
          registers_c_8 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h9 == io_rd_sel) begin
          registers_c_9 <= 32'sh0;
        end
      end else begin
        if (5'h9 == io_rd_sel) begin
          registers_c_9 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'ha == io_rd_sel) begin
          registers_c_10 <= 32'sh0;
        end
      end else begin
        if (5'ha == io_rd_sel) begin
          registers_c_10 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'hb == io_rd_sel) begin
          registers_c_11 <= 32'sh0;
        end
      end else begin
        if (5'hb == io_rd_sel) begin
          registers_c_11 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'hc == io_rd_sel) begin
          registers_c_12 <= 32'sh0;
        end
      end else begin
        if (5'hc == io_rd_sel) begin
          registers_c_12 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'hd == io_rd_sel) begin
          registers_c_13 <= 32'sh0;
        end
      end else begin
        if (5'hd == io_rd_sel) begin
          registers_c_13 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'he == io_rd_sel) begin
          registers_c_14 <= 32'sh0;
        end
      end else begin
        if (5'he == io_rd_sel) begin
          registers_c_14 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'hf == io_rd_sel) begin
          registers_c_15 <= 32'sh0;
        end
      end else begin
        if (5'hf == io_rd_sel) begin
          registers_c_15 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h10 == io_rd_sel) begin
          registers_c_16 <= 32'sh0;
        end
      end else begin
        if (5'h10 == io_rd_sel) begin
          registers_c_16 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h11 == io_rd_sel) begin
          registers_c_17 <= 32'sh0;
        end
      end else begin
        if (5'h11 == io_rd_sel) begin
          registers_c_17 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h12 == io_rd_sel) begin
          registers_c_18 <= 32'sh0;
        end
      end else begin
        if (5'h12 == io_rd_sel) begin
          registers_c_18 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h13 == io_rd_sel) begin
          registers_c_19 <= 32'sh0;
        end
      end else begin
        if (5'h13 == io_rd_sel) begin
          registers_c_19 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h14 == io_rd_sel) begin
          registers_c_20 <= 32'sh0;
        end
      end else begin
        if (5'h14 == io_rd_sel) begin
          registers_c_20 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h15 == io_rd_sel) begin
          registers_c_21 <= 32'sh0;
        end
      end else begin
        if (5'h15 == io_rd_sel) begin
          registers_c_21 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h16 == io_rd_sel) begin
          registers_c_22 <= 32'sh0;
        end
      end else begin
        if (5'h16 == io_rd_sel) begin
          registers_c_22 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h17 == io_rd_sel) begin
          registers_c_23 <= 32'sh0;
        end
      end else begin
        if (5'h17 == io_rd_sel) begin
          registers_c_23 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h18 == io_rd_sel) begin
          registers_c_24 <= 32'sh0;
        end
      end else begin
        if (5'h18 == io_rd_sel) begin
          registers_c_24 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h19 == io_rd_sel) begin
          registers_c_25 <= 32'sh0;
        end
      end else begin
        if (5'h19 == io_rd_sel) begin
          registers_c_25 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h1a == io_rd_sel) begin
          registers_c_26 <= 32'sh0;
        end
      end else begin
        if (5'h1a == io_rd_sel) begin
          registers_c_26 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h1b == io_rd_sel) begin
          registers_c_27 <= 32'sh0;
        end
      end else begin
        if (5'h1b == io_rd_sel) begin
          registers_c_27 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h1c == io_rd_sel) begin
          registers_c_28 <= 32'sh0;
        end
      end else begin
        if (5'h1c == io_rd_sel) begin
          registers_c_28 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h1d == io_rd_sel) begin
          registers_c_29 <= 32'sh0;
        end
      end else begin
        if (5'h1d == io_rd_sel) begin
          registers_c_29 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h1e == io_rd_sel) begin
          registers_c_30 <= 32'sh0;
        end
      end else begin
        if (5'h1e == io_rd_sel) begin
          registers_c_30 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_63) begin
        if (5'h1f == io_rd_sel) begin
          registers_c_31 <= 32'sh0;
        end
      end else begin
        if (5'h1f == io_rd_sel) begin
          registers_c_31 <= io_WriteData;
        end
      end
    end
  end
endmodule
module alu(
  input  [31:0] io_A,
  input  [31:0] io_B,
  output [31:0] io_x,
  input  [4:0]  io_Aluop
);
  wire  _T_17; // @[alu.scala 19:31]
  wire [32:0] _T_18; // @[alu.scala 20:35]
  wire [31:0] _T_19; // @[alu.scala 20:35]
  wire [31:0] _T_20; // @[alu.scala 20:35]
  wire  _T_22; // @[alu.scala 21:37]
  wire [63:0] _T_23; // @[alu.scala 22:36]
  wire  _T_25; // @[alu.scala 23:37]
  wire [4:0] _T_26; // @[alu.scala 25:40]
  wire [62:0] _GEN_24; // @[alu.scala 26:40]
  wire [62:0] _T_27; // @[alu.scala 26:40]
  wire  _T_29; // @[alu.scala 29:37]
  wire  _T_31; // @[alu.scala 31:37]
  wire  _T_32; // @[alu.scala 32:35]
  wire [1:0] _GEN_0; // @[alu.scala 32:42]
  wire  _T_36; // @[alu.scala 37:37]
  wire  _T_38; // @[alu.scala 37:64]
  wire  _T_39; // @[alu.scala 37:52]
  wire  _T_44; // @[alu.scala 45:37]
  wire [31:0] _T_45; // @[alu.scala 46:30]
  wire [31:0] _T_46; // @[alu.scala 46:30]
  wire  _T_48; // @[alu.scala 47:37]
  wire  _T_50; // @[alu.scala 47:64]
  wire  _T_51; // @[alu.scala 47:52]
  wire [31:0] _T_53; // @[alu.scala 48:34]
  wire  _T_55; // @[alu.scala 50:37]
  wire [31:0] _T_56; // @[alu.scala 51:38]
  wire [31:0] _T_57; // @[alu.scala 51:38]
  wire  _T_59; // @[alu.scala 52:37]
  wire [31:0] _T_60; // @[alu.scala 53:38]
  wire [31:0] _T_61; // @[alu.scala 53:38]
  wire  _T_63; // @[alu.scala 54:37]
  wire [32:0] _T_64; // @[alu.scala 55:38]
  wire [31:0] _T_65; // @[alu.scala 55:38]
  wire [31:0] _T_66; // @[alu.scala 55:38]
  wire  _T_68; // @[alu.scala 56:37]
  wire  _T_69; // @[alu.scala 57:35]
  wire [1:0] _GEN_2; // @[alu.scala 57:44]
  wire  _T_73; // @[alu.scala 62:37]
  wire  _T_75; // @[alu.scala 63:30]
  wire [1:0] _GEN_3; // @[alu.scala 63:47]
  wire  _T_79; // @[alu.scala 68:37]
  wire  _T_84; // @[alu.scala 74:37]
  wire  _T_85; // @[alu.scala 75:35]
  wire [1:0] _GEN_5; // @[alu.scala 75:43]
  wire [31:0] _T_90; // @[alu.scala 81:39]
  wire [31:0] _T_91; // @[alu.scala 82:39]
  wire  _T_92; // @[alu.scala 83:33]
  wire [1:0] _GEN_6; // @[alu.scala 83:39]
  wire [1:0] _GEN_8; // @[alu.scala 74:52]
  wire [1:0] _GEN_9; // @[alu.scala 68:52]
  wire [1:0] _GEN_10; // @[alu.scala 62:52]
  wire [1:0] _GEN_11; // @[alu.scala 56:52]
  wire [31:0] _GEN_12; // @[alu.scala 54:52]
  wire [31:0] _GEN_13; // @[alu.scala 52:52]
  wire [31:0] _GEN_14; // @[alu.scala 50:52]
  wire [31:0] _GEN_15; // @[alu.scala 47:80]
  wire [31:0] _GEN_16; // @[alu.scala 45:52]
  wire [31:0] _GEN_17; // @[alu.scala 37:79]
  wire [31:0] _GEN_18; // @[alu.scala 31:51]
  wire [31:0] _GEN_19; // @[alu.scala 29:51]
  wire [62:0] _GEN_20; // @[alu.scala 23:51]
  wire [63:0] _GEN_21; // @[alu.scala 21:52]
  wire [63:0] _GEN_22; // @[alu.scala 19:46]
  wire [31:0] _GEN_25; // @[alu.scala 17:22 alu.scala 20:29 alu.scala 22:29 alu.scala 28:30 alu.scala 30:29 alu.scala 33:30 alu.scala 35:30 alu.scala 41:38 alu.scala 43:38 alu.scala 46:22 alu.scala 49:22 alu.scala 51:30 alu.scala 53:30 alu.scala 55:30 alu.scala 58:38 alu.scala 60:38 alu.scala 64:38 alu.scala 66:38 alu.scala 70:38 alu.scala 72:38 alu.scala 76:38 alu.scala 78:38 alu.scala 84:38 alu.scala 86:38]
  assign _T_17 = io_Aluop == 5'h0; // @[alu.scala 19:31]
  assign _T_18 = $signed(io_A) + $signed(io_B); // @[alu.scala 20:35]
  assign _T_19 = $signed(io_A) + $signed(io_B); // @[alu.scala 20:35]
  assign _T_20 = $signed(_T_19); // @[alu.scala 20:35]
  assign _T_22 = io_Aluop == 5'h9; // @[alu.scala 21:37]
  assign _T_23 = $signed(io_A) * $signed(io_B); // @[alu.scala 22:36]
  assign _T_25 = io_Aluop == 5'h1; // @[alu.scala 23:37]
  assign _T_26 = io_B[4:0]; // @[alu.scala 25:40]
  assign _GEN_24 = {{31{io_A[31]}},io_A}; // @[alu.scala 26:40]
  assign _T_27 = $signed(_GEN_24) << _T_26; // @[alu.scala 26:40]
  assign _T_29 = io_Aluop == 5'h1f; // @[alu.scala 29:37]
  assign _T_31 = io_Aluop == 5'h2; // @[alu.scala 31:37]
  assign _T_32 = $signed(io_A) < $signed(io_B); // @[alu.scala 32:35]
  assign _GEN_0 = _T_32 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 32:42]
  assign _T_36 = io_Aluop == 5'h3; // @[alu.scala 37:37]
  assign _T_38 = io_Aluop == 5'h16; // @[alu.scala 37:64]
  assign _T_39 = _T_36 | _T_38; // @[alu.scala 37:52]
  assign _T_44 = io_Aluop == 5'h4; // @[alu.scala 45:37]
  assign _T_45 = $signed(io_A) ^ $signed(io_B); // @[alu.scala 46:30]
  assign _T_46 = $signed(_T_45); // @[alu.scala 46:30]
  assign _T_48 = io_Aluop == 5'h5; // @[alu.scala 47:37]
  assign _T_50 = io_Aluop == 5'hd; // @[alu.scala 47:64]
  assign _T_51 = _T_48 | _T_50; // @[alu.scala 47:52]
  assign _T_53 = $signed(io_A) >>> _T_26; // @[alu.scala 48:34]
  assign _T_55 = io_Aluop == 5'h6; // @[alu.scala 50:37]
  assign _T_56 = $signed(io_A) | $signed(io_B); // @[alu.scala 51:38]
  assign _T_57 = $signed(_T_56); // @[alu.scala 51:38]
  assign _T_59 = io_Aluop == 5'h7; // @[alu.scala 52:37]
  assign _T_60 = $signed(io_A) & $signed(io_B); // @[alu.scala 53:38]
  assign _T_61 = $signed(_T_60); // @[alu.scala 53:38]
  assign _T_63 = io_Aluop == 5'h8; // @[alu.scala 54:37]
  assign _T_64 = $signed(io_A) - $signed(io_B); // @[alu.scala 55:38]
  assign _T_65 = $signed(io_A) - $signed(io_B); // @[alu.scala 55:38]
  assign _T_66 = $signed(_T_65); // @[alu.scala 55:38]
  assign _T_68 = io_Aluop == 5'h10; // @[alu.scala 56:37]
  assign _T_69 = $signed(io_A) == $signed(io_B); // @[alu.scala 57:35]
  assign _GEN_2 = _T_69 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 57:44]
  assign _T_73 = io_Aluop == 5'h11; // @[alu.scala 62:37]
  assign _T_75 = ~ _T_69; // @[alu.scala 63:30]
  assign _GEN_3 = _T_75 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 63:47]
  assign _T_79 = io_Aluop == 5'h14; // @[alu.scala 68:37]
  assign _T_84 = io_Aluop == 5'h15; // @[alu.scala 74:37]
  assign _T_85 = $signed(io_A) >= $signed(io_B); // @[alu.scala 75:35]
  assign _GEN_5 = _T_85 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 75:43]
  assign _T_90 = $unsigned(io_A); // @[alu.scala 81:39]
  assign _T_91 = $unsigned(io_B); // @[alu.scala 82:39]
  assign _T_92 = _T_90 >= _T_91; // @[alu.scala 83:33]
  assign _GEN_6 = _T_92 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 83:39]
  assign _GEN_8 = _T_84 ? $signed(_GEN_5) : $signed(_GEN_6); // @[alu.scala 74:52]
  assign _GEN_9 = _T_79 ? $signed(_GEN_0) : $signed(_GEN_8); // @[alu.scala 68:52]
  assign _GEN_10 = _T_73 ? $signed(_GEN_3) : $signed(_GEN_9); // @[alu.scala 62:52]
  assign _GEN_11 = _T_68 ? $signed(_GEN_2) : $signed(_GEN_10); // @[alu.scala 56:52]
  assign _GEN_12 = _T_63 ? $signed(_T_66) : $signed({{30{_GEN_11[1]}},_GEN_11}); // @[alu.scala 54:52]
  assign _GEN_13 = _T_59 ? $signed(_T_61) : $signed(_GEN_12); // @[alu.scala 52:52]
  assign _GEN_14 = _T_55 ? $signed(_T_57) : $signed(_GEN_13); // @[alu.scala 50:52]
  assign _GEN_15 = _T_51 ? $signed(_T_53) : $signed(_GEN_14); // @[alu.scala 47:80]
  assign _GEN_16 = _T_44 ? $signed(_T_46) : $signed(_GEN_15); // @[alu.scala 45:52]
  assign _GEN_17 = _T_39 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_16); // @[alu.scala 37:79]
  assign _GEN_18 = _T_31 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_17); // @[alu.scala 31:51]
  assign _GEN_19 = _T_29 ? $signed(io_A) : $signed(_GEN_18); // @[alu.scala 29:51]
  assign _GEN_20 = _T_25 ? $signed(_T_27) : $signed({{31{_GEN_19[31]}},_GEN_19}); // @[alu.scala 23:51]
  assign _GEN_21 = _T_22 ? $signed(_T_23) : $signed({{1{_GEN_20[62]}},_GEN_20}); // @[alu.scala 21:52]
  assign _GEN_22 = _T_17 ? $signed({{32{_T_20[31]}},_T_20}) : $signed(_GEN_21); // @[alu.scala 19:46]
  assign _GEN_25 = _GEN_22[31:0]; // @[alu.scala 17:22 alu.scala 20:29 alu.scala 22:29 alu.scala 28:30 alu.scala 30:29 alu.scala 33:30 alu.scala 35:30 alu.scala 41:38 alu.scala 43:38 alu.scala 46:22 alu.scala 49:22 alu.scala 51:30 alu.scala 53:30 alu.scala 55:30 alu.scala 58:38 alu.scala 60:38 alu.scala 64:38 alu.scala 66:38 alu.scala 70:38 alu.scala 72:38 alu.scala 76:38 alu.scala 78:38 alu.scala 84:38 alu.scala 86:38]
  assign io_x = $signed(_GEN_25); // @[alu.scala 17:22 alu.scala 20:29 alu.scala 22:29 alu.scala 28:30 alu.scala 30:29 alu.scala 33:30 alu.scala 35:30 alu.scala 41:38 alu.scala 43:38 alu.scala 46:22 alu.scala 49:22 alu.scala 51:30 alu.scala 53:30 alu.scala 55:30 alu.scala 58:38 alu.scala 60:38 alu.scala 64:38 alu.scala 66:38 alu.scala 70:38 alu.scala 72:38 alu.scala 76:38 alu.scala 78:38 alu.scala 84:38 alu.scala 86:38]
endmodule
module ALU_control(
  input  [2:0] io_Aluop,
  input  [6:0] io_Func7,
  input  [2:0] io_Func3,
  output [4:0] io_control
);
  wire  _T_15; // @[ALU_control.scala 15:31]
  wire  _T_17; // @[ALU_control.scala 16:39]
  wire [10:0] _T_21; // @[Cat.scala 30:58]
  wire [10:0] _GEN_0; // @[ALU_control.scala 16:56]
  wire  _T_23; // @[ALU_control.scala 21:37]
  wire  _T_26; // @[ALU_control.scala 23:37]
  wire  _T_29; // @[ALU_control.scala 25:37]
  wire  _T_31; // @[ALU_control.scala 26:31]
  wire [4:0] _T_38; // @[Cat.scala 30:58]
  wire [10:0] _GEN_1; // @[ALU_control.scala 26:44]
  wire  _T_40; // @[ALU_control.scala 32:36]
  wire [4:0] _T_42; // @[Cat.scala 30:58]
  wire  _T_44; // @[ALU_control.scala 34:37]
  wire [4:0] _GEN_3; // @[ALU_control.scala 34:49]
  wire [4:0] _GEN_4; // @[ALU_control.scala 32:48]
  wire [10:0] _GEN_5; // @[ALU_control.scala 25:49]
  wire [10:0] _GEN_6; // @[ALU_control.scala 23:49]
  wire [10:0] _GEN_7; // @[ALU_control.scala 21:50]
  wire [10:0] _GEN_8; // @[ALU_control.scala 15:43]
  assign _T_15 = io_Aluop == 3'h0; // @[ALU_control.scala 15:31]
  assign _T_17 = io_Func7 == 7'h1; // @[ALU_control.scala 16:39]
  assign _T_21 = {1'h0,io_Func7,io_Func3}; // @[Cat.scala 30:58]
  assign _GEN_0 = _T_17 ? 11'h9 : _T_21; // @[ALU_control.scala 16:56]
  assign _T_23 = io_Aluop == 3'h4; // @[ALU_control.scala 21:37]
  assign _T_26 = io_Aluop == 3'h5; // @[ALU_control.scala 23:37]
  assign _T_29 = io_Aluop == 3'h1; // @[ALU_control.scala 25:37]
  assign _T_31 = io_Func3 == 3'h5; // @[ALU_control.scala 26:31]
  assign _T_38 = {2'h0,io_Func3}; // @[Cat.scala 30:58]
  assign _GEN_1 = _T_31 ? _T_21 : {{6'd0}, _T_38}; // @[ALU_control.scala 26:44]
  assign _T_40 = io_Aluop == 3'h2; // @[ALU_control.scala 32:36]
  assign _T_42 = {2'h2,io_Func3}; // @[Cat.scala 30:58]
  assign _T_44 = io_Aluop == 3'h3; // @[ALU_control.scala 34:37]
  assign _GEN_3 = _T_44 ? 5'h1f : 5'h0; // @[ALU_control.scala 34:49]
  assign _GEN_4 = _T_40 ? _T_42 : _GEN_3; // @[ALU_control.scala 32:48]
  assign _GEN_5 = _T_29 ? _GEN_1 : {{6'd0}, _GEN_4}; // @[ALU_control.scala 25:49]
  assign _GEN_6 = _T_26 ? 11'h0 : _GEN_5; // @[ALU_control.scala 23:49]
  assign _GEN_7 = _T_23 ? 11'h0 : _GEN_6; // @[ALU_control.scala 21:50]
  assign _GEN_8 = _T_15 ? _GEN_0 : _GEN_7; // @[ALU_control.scala 15:43]
  assign io_control = _GEN_8[4:0]; // @[ALU_control.scala 14:27 ALU_control.scala 17:43 ALU_control.scala 19:43 ALU_control.scala 22:35 ALU_control.scala 24:35 ALU_control.scala 27:35 ALU_control.scala 29:28 ALU_control.scala 33:35 ALU_control.scala 35:35 ALU_control.scala 37:35]
endmodule
module ImmediateGeneration(
  input  [31:0] io_Instruction,
  input  [31:0] io_PC,
  output [31:0] io_I_Immediate,
  output [31:0] io_S_Immediate,
  output [31:0] io_U_Immediate,
  output [31:0] io_SB_Immediate,
  output [31:0] io_UJ_Immediate
);
  wire [11:0] sbt1; // @[ImmediateGeneration.scala 22:34]
  wire  _T_24; // @[ImmediateGeneration.scala 23:38]
  wire [18:0] _T_28; // @[Bitwise.scala 72:12]
  wire [30:0] output$; // @[Cat.scala 30:58]
  wire [30:0] output1; // @[ImmediateGeneration.scala 24:30]
  wire [4:0] sbt2; // @[ImmediateGeneration.scala 27:34]
  wire [6:0] sbt3; // @[ImmediateGeneration.scala 28:34]
  wire [11:0] sbt4; // @[Cat.scala 30:58]
  wire  _T_29; // @[ImmediateGeneration.scala 30:39]
  wire [18:0] _T_33; // @[Bitwise.scala 72:12]
  wire [30:0] output2; // @[Cat.scala 30:58]
  wire [30:0] output3; // @[ImmediateGeneration.scala 31:31]
  wire [19:0] sbt5; // @[ImmediateGeneration.scala 34:34]
  wire  _T_34; // @[ImmediateGeneration.scala 35:36]
  wire [10:0] _T_38; // @[Bitwise.scala 72:12]
  wire [30:0] sbt6; // @[Cat.scala 30:58]
  wire [45:0] _GEN_0; // @[ImmediateGeneration.scala 36:25]
  wire [45:0] sbt7; // @[ImmediateGeneration.scala 36:25]
  wire [45:0] output4; // @[ImmediateGeneration.scala 37:28]
  wire  sbt8; // @[ImmediateGeneration.scala 40:34]
  wire [3:0] sbt9; // @[ImmediateGeneration.scala 41:34]
  wire [5:0] sbt10; // @[ImmediateGeneration.scala 42:35]
  wire  sbt11; // @[ImmediateGeneration.scala 43:35]
  wire [12:0] sbt12; // @[Cat.scala 30:58]
  wire  _T_44; // @[ImmediateGeneration.scala 45:38]
  wire [18:0] _T_48; // @[Bitwise.scala 72:12]
  wire [31:0] sbt13; // @[Cat.scala 30:58]
  wire [32:0] _T_49; // @[ImmediateGeneration.scala 46:29]
  wire [31:0] output5; // @[ImmediateGeneration.scala 46:29]
  wire [7:0] sbt14; // @[ImmediateGeneration.scala 50:35]
  wire  sbt15; // @[ImmediateGeneration.scala 51:35]
  wire [9:0] sbt16; // @[ImmediateGeneration.scala 52:35]
  wire [20:0] sbt18; // @[Cat.scala 30:58]
  wire  _T_54; // @[ImmediateGeneration.scala 55:38]
  wire [10:0] _T_58; // @[Bitwise.scala 72:12]
  wire [31:0] sbt19; // @[Cat.scala 30:58]
  wire [32:0] _T_59; // @[ImmediateGeneration.scala 56:29]
  wire [31:0] output8; // @[ImmediateGeneration.scala 56:29]
  wire [31:0] _GEN_3; // @[ImmediateGeneration.scala 18:23 ImmediateGeneration.scala 38:24]
  assign sbt1 = io_Instruction[31:20]; // @[ImmediateGeneration.scala 22:34]
  assign _T_24 = sbt1[11]; // @[ImmediateGeneration.scala 23:38]
  assign _T_28 = _T_24 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign output$ = {_T_28,sbt1}; // @[Cat.scala 30:58]
  assign output1 = $signed(output$); // @[ImmediateGeneration.scala 24:30]
  assign sbt2 = io_Instruction[11:7]; // @[ImmediateGeneration.scala 27:34]
  assign sbt3 = io_Instruction[31:25]; // @[ImmediateGeneration.scala 28:34]
  assign sbt4 = {sbt3,sbt2}; // @[Cat.scala 30:58]
  assign _T_29 = sbt4[11]; // @[ImmediateGeneration.scala 30:39]
  assign _T_33 = _T_29 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign output2 = {_T_33,sbt3,sbt2}; // @[Cat.scala 30:58]
  assign output3 = $signed(output2); // @[ImmediateGeneration.scala 31:31]
  assign sbt5 = io_Instruction[31:12]; // @[ImmediateGeneration.scala 34:34]
  assign _T_34 = sbt5[19]; // @[ImmediateGeneration.scala 35:36]
  assign _T_38 = _T_34 ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12]
  assign sbt6 = {_T_38,sbt5}; // @[Cat.scala 30:58]
  assign _GEN_0 = {{15'd0}, sbt6}; // @[ImmediateGeneration.scala 36:25]
  assign sbt7 = _GEN_0 << 4'hc; // @[ImmediateGeneration.scala 36:25]
  assign output4 = $signed(sbt7); // @[ImmediateGeneration.scala 37:28]
  assign sbt8 = io_Instruction[7]; // @[ImmediateGeneration.scala 40:34]
  assign sbt9 = io_Instruction[11:8]; // @[ImmediateGeneration.scala 41:34]
  assign sbt10 = io_Instruction[30:25]; // @[ImmediateGeneration.scala 42:35]
  assign sbt11 = io_Instruction[31]; // @[ImmediateGeneration.scala 43:35]
  assign sbt12 = {sbt11,sbt8,sbt10,sbt9,1'h0}; // @[Cat.scala 30:58]
  assign _T_44 = sbt12[12]; // @[ImmediateGeneration.scala 45:38]
  assign _T_48 = _T_44 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign sbt13 = {_T_48,sbt11,sbt8,sbt10,sbt9,1'h0}; // @[Cat.scala 30:58]
  assign _T_49 = sbt13 + io_PC; // @[ImmediateGeneration.scala 46:29]
  assign output5 = sbt13 + io_PC; // @[ImmediateGeneration.scala 46:29]
  assign sbt14 = io_Instruction[19:12]; // @[ImmediateGeneration.scala 50:35]
  assign sbt15 = io_Instruction[20]; // @[ImmediateGeneration.scala 51:35]
  assign sbt16 = io_Instruction[30:21]; // @[ImmediateGeneration.scala 52:35]
  assign sbt18 = {sbt11,sbt14,sbt15,sbt16,1'h0}; // @[Cat.scala 30:58]
  assign _T_54 = sbt18[20]; // @[ImmediateGeneration.scala 55:38]
  assign _T_58 = _T_54 ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12]
  assign sbt19 = {_T_58,sbt11,sbt14,sbt15,sbt16,1'h0}; // @[Cat.scala 30:58]
  assign _T_59 = sbt19 + io_PC; // @[ImmediateGeneration.scala 56:29]
  assign output8 = sbt19 + io_PC; // @[ImmediateGeneration.scala 56:29]
  assign io_I_Immediate = {{1{output1[30]}},output1}; // @[ImmediateGeneration.scala 16:23 ImmediateGeneration.scala 25:24]
  assign io_S_Immediate = {{1{output3[30]}},output3}; // @[ImmediateGeneration.scala 17:23 ImmediateGeneration.scala 32:24]
  assign _GEN_3 = output4[31:0]; // @[ImmediateGeneration.scala 18:23 ImmediateGeneration.scala 38:24]
  assign io_U_Immediate = $signed(_GEN_3); // @[ImmediateGeneration.scala 18:23 ImmediateGeneration.scala 38:24]
  assign io_SB_Immediate = $signed(output5); // @[ImmediateGeneration.scala 19:24 ImmediateGeneration.scala 48:25]
  assign io_UJ_Immediate = $signed(output8); // @[ImmediateGeneration.scala 20:24 ImmediateGeneration.scala 58:25]
endmodule
module PC(
  input         clock,
  input         reset,
  input  [31:0] io_input,
  output [31:0] io_pc,
  output [31:0] io_pc4
);
  reg [31:0] pc1; // @[PC.scala 12:32]
  reg [31:0] _RAND_0;
  wire [32:0] _T_14; // @[PC.scala 14:28]
  assign _T_14 = pc1 + 32'h4; // @[PC.scala 14:28]
  assign io_pc = pc1; // @[PC.scala 15:22]
  assign io_pc4 = pc1 + 32'h4; // @[PC.scala 14:23]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc1 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      pc1 <= 32'h0;
    end else begin
      pc1 <= io_input;
    end
  end
endmodule
module InstructionMemory(
  input         clock,
  input  [31:0] io_wrAddr,
  output [31:0] io_rdData
);
  reg [31:0] mem [0:16383]; // @[InstructionMemory.scala 13:28]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_12_data; // @[InstructionMemory.scala 13:28]
  wire [13:0] mem__T_12_addr; // @[InstructionMemory.scala 13:28]
  assign mem__T_12_addr = io_wrAddr[13:0];
  assign mem__T_12_data = mem[mem__T_12_addr]; // @[InstructionMemory.scala 13:28]
  assign io_rdData = mem__T_12_data; // @[InstructionMemory.scala 14:26]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 16384; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
endmodule
module DataMemory(
  input         clock,
  input  [7:0]  io_wrAddr,
  input  [31:0] io_wrData,
  input         io_MemRead,
  output [31:0] io_Data,
  input         io_MemWrite
);
  reg [31:0] mem [0:16383]; // @[DataMemory.scala 16:28]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_23_data; // @[DataMemory.scala 16:28]
  wire [13:0] mem__T_23_addr; // @[DataMemory.scala 16:28]
  wire [31:0] mem__T_20_data; // @[DataMemory.scala 16:28]
  wire [13:0] mem__T_20_addr; // @[DataMemory.scala 16:28]
  wire  mem__T_20_mask; // @[DataMemory.scala 16:28]
  wire  mem__T_20_en; // @[DataMemory.scala 16:28]
  assign mem__T_23_addr = {{6'd0}, io_wrAddr};
  assign mem__T_23_data = mem[mem__T_23_addr]; // @[DataMemory.scala 16:28]
  assign mem__T_20_data = io_wrData;
  assign mem__T_20_addr = {{6'd0}, io_wrAddr};
  assign mem__T_20_mask = 1'h1;
  assign mem__T_20_en = io_MemWrite;
  assign io_Data = io_MemRead ? $signed(mem__T_23_data) : $signed(32'sh0); // @[DataMemory.scala 15:24 DataMemory.scala 22:32]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 16384; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(mem__T_20_en & mem__T_20_mask) begin
      mem[mem__T_20_addr] <= mem__T_20_data; // @[DataMemory.scala 16:28]
    end
  end
endmodule
module MEM_WB(
  input         clock,
  input         reset,
  input         io_Regwr,
  input         io_MemtoReg,
  input  [4:0]  io_Rd_sel,
  input  [31:0] io_data_mem_in,
  input  [31:0] io_Aluout,
  output        io_Regwr_out,
  output        io_MemtoReg_out,
  output [4:0]  io_Rd_sel_out,
  output [31:0] io_data_mem_out,
  output [31:0] io_Aluout_2
);
  reg  Regwr_Reg; // @[MEM_WB.scala 23:40]
  reg [31:0] _RAND_0;
  reg  MemtoReg_Reg; // @[MEM_WB.scala 24:43]
  reg [31:0] _RAND_1;
  reg [4:0] Rd_sel_Reg; // @[MEM_WB.scala 25:41]
  reg [31:0] _RAND_2;
  reg [31:0] data_mem_Reg; // @[MEM_WB.scala 26:43]
  reg [31:0] _RAND_3;
  reg [31:0] Aluout_Reg; // @[MEM_WB.scala 27:40]
  reg [31:0] _RAND_4;
  assign io_Regwr_out = Regwr_Reg; // @[MEM_WB.scala 39:30]
  assign io_MemtoReg_out = MemtoReg_Reg; // @[MEM_WB.scala 40:34]
  assign io_Rd_sel_out = Rd_sel_Reg; // @[MEM_WB.scala 41:32]
  assign io_data_mem_out = data_mem_Reg; // @[MEM_WB.scala 42:33]
  assign io_Aluout_2 = Aluout_Reg; // @[MEM_WB.scala 43:29]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  Regwr_Reg = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  MemtoReg_Reg = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  Rd_sel_Reg = _RAND_2[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  data_mem_Reg = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  Aluout_Reg = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      Regwr_Reg <= 1'h0;
    end else begin
      Regwr_Reg <= io_Regwr;
    end
    if (reset) begin
      MemtoReg_Reg <= 1'h0;
    end else begin
      MemtoReg_Reg <= io_MemtoReg;
    end
    if (reset) begin
      Rd_sel_Reg <= 5'h0;
    end else begin
      Rd_sel_Reg <= io_Rd_sel;
    end
    if (reset) begin
      data_mem_Reg <= 32'sh0;
    end else begin
      data_mem_Reg <= io_data_mem_in;
    end
    if (reset) begin
      Aluout_Reg <= 32'sh0;
    end else begin
      Aluout_Reg <= io_Aluout;
    end
  end
endmodule
module EX_MEM(
  input         clock,
  input         reset,
  input         io_Memwr,
  input         io_Memrd,
  input         io_Regwr,
  input         io_MemtoReg,
  input  [31:0] io_Rs2,
  input  [4:0]  io_Rd_sel,
  input  [31:0] io_Alu_out,
  output        io_Memwr_out,
  output        io_Memrd_out,
  output        io_Regwr_out,
  output        io_MemtoReg_out,
  output [31:0] io_Rs2_out,
  output [4:0]  io_Rd_sel_out,
  output [31:0] io_Alu_out2
);
  reg  Memwr_Reg; // @[EX_MEM.scala 28:32]
  reg [31:0] _RAND_0;
  reg  Memrd_Reg; // @[EX_MEM.scala 29:32]
  reg [31:0] _RAND_1;
  reg  Regwr_Reg; // @[EX_MEM.scala 30:32]
  reg [31:0] _RAND_2;
  reg  MemtoReg_Reg; // @[EX_MEM.scala 31:35]
  reg [31:0] _RAND_3;
  reg [31:0] Rs2_Reg; // @[EX_MEM.scala 32:30]
  reg [31:0] _RAND_4;
  reg [4:0] Rd_sel_Reg; // @[EX_MEM.scala 33:33]
  reg [31:0] _RAND_5;
  reg [31:0] Alu_out_Reg; // @[EX_MEM.scala 34:34]
  reg [31:0] _RAND_6;
  assign io_Memwr_out = Memwr_Reg; // @[EX_MEM.scala 48:22]
  assign io_Memrd_out = Memrd_Reg; // @[EX_MEM.scala 49:22]
  assign io_Regwr_out = Regwr_Reg; // @[EX_MEM.scala 50:22]
  assign io_MemtoReg_out = MemtoReg_Reg; // @[EX_MEM.scala 51:25]
  assign io_Rs2_out = Rs2_Reg; // @[EX_MEM.scala 52:20]
  assign io_Rd_sel_out = Rd_sel_Reg; // @[EX_MEM.scala 53:22]
  assign io_Alu_out2 = Alu_out_Reg; // @[EX_MEM.scala 54:21]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  Memwr_Reg = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  Memrd_Reg = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  Regwr_Reg = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  MemtoReg_Reg = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  Rs2_Reg = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  Rd_sel_Reg = _RAND_5[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  Alu_out_Reg = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      Memwr_Reg <= 1'h0;
    end else begin
      Memwr_Reg <= io_Memwr;
    end
    if (reset) begin
      Memrd_Reg <= 1'h0;
    end else begin
      Memrd_Reg <= io_Memrd;
    end
    if (reset) begin
      Regwr_Reg <= 1'h0;
    end else begin
      Regwr_Reg <= io_Regwr;
    end
    if (reset) begin
      MemtoReg_Reg <= 1'h0;
    end else begin
      MemtoReg_Reg <= io_MemtoReg;
    end
    if (reset) begin
      Rs2_Reg <= 32'sh0;
    end else begin
      Rs2_Reg <= io_Rs2;
    end
    if (reset) begin
      Rd_sel_Reg <= 5'h0;
    end else begin
      Rd_sel_Reg <= io_Rd_sel;
    end
    if (reset) begin
      Alu_out_Reg <= 32'sh0;
    end else begin
      Alu_out_Reg <= io_Alu_out;
    end
  end
endmodule
module ID_EX(
  input         clock,
  input         reset,
  input  [31:0] io_PC,
  input  [31:0] io_PC4,
  input  [31:0] io_Immediate,
  input  [31:0] io_rs1_in,
  input  [31:0] io_rs2_in,
  input  [4:0]  io_rd_sel_in,
  input  [2:0]  io_func3_in,
  input  [6:0]  io_func7_in,
  input         io_ctMemWr_in,
  input         io_ctMemRd_in,
  input         io_ctRegWr_in,
  input         io_ctMemToReg_in,
  input  [2:0]  io_ctAluOp_in,
  input  [1:0]  io_ctOpA_sel_in,
  input         io_ctOpB_sel_in,
  input  [4:0]  io_rs1_sel_in,
  input  [4:0]  io_rs2_sel_in,
  output [31:0] io_pc_out,
  output [31:0] io_pc4_out,
  output [31:0] io_rs1,
  output [31:0] io_rs2,
  output [31:0] io_Immediate_out,
  output [2:0]  io_func3_out,
  output [6:0]  io_func7_out,
  output [4:0]  io_rd_sel_out,
  output        io_MemWrite,
  output        io_MemRead,
  output        io_RegWrite,
  output        io_MemtoReg,
  output [2:0]  io_ALUoperation,
  output [1:0]  io_operand_A_sel,
  output        io_operand_B_sel,
  output [4:0]  io_rs1_sel_out,
  output [4:0]  io_rs2_sel_out
);
  reg [31:0] pcr; // @[ID_EX.scala 50:26]
  reg [31:0] _RAND_0;
  reg [31:0] pc4r; // @[ID_EX.scala 51:27]
  reg [31:0] _RAND_1;
  reg [31:0] rs1r; // @[ID_EX.scala 52:27]
  reg [31:0] _RAND_2;
  reg [31:0] rs2r; // @[ID_EX.scala 53:27]
  reg [31:0] _RAND_3;
  reg [31:0] immr; // @[ID_EX.scala 54:27]
  reg [31:0] _RAND_4;
  reg [4:0] rd_sel_r; // @[ID_EX.scala 55:31]
  reg [31:0] _RAND_5;
  reg [4:0] rs1_sel_r; // @[ID_EX.scala 56:32]
  reg [31:0] _RAND_6;
  reg [4:0] rs2_sel_r; // @[ID_EX.scala 57:32]
  reg [31:0] _RAND_7;
  reg [2:0] func3_r; // @[ID_EX.scala 59:30]
  reg [31:0] _RAND_8;
  reg [6:0] func7_r; // @[ID_EX.scala 60:30]
  reg [31:0] _RAND_9;
  reg  MemWr_r; // @[ID_EX.scala 61:30]
  reg [31:0] _RAND_10;
  reg  MemRd_r; // @[ID_EX.scala 62:30]
  reg [31:0] _RAND_11;
  reg  RegWr_r; // @[ID_EX.scala 64:30]
  reg [31:0] _RAND_12;
  reg  MemToReg_r; // @[ID_EX.scala 65:33]
  reg [31:0] _RAND_13;
  reg [2:0] AluOp_r; // @[ID_EX.scala 66:30]
  reg [31:0] _RAND_14;
  reg [1:0] OpA_sel_r; // @[ID_EX.scala 67:32]
  reg [31:0] _RAND_15;
  reg [1:0] OpB_sel_r; // @[ID_EX.scala 68:32]
  reg [31:0] _RAND_16;
  assign io_pc_out = pcr; // @[ID_EX.scala 94:15]
  assign io_pc4_out = pc4r; // @[ID_EX.scala 95:16]
  assign io_rs1 = rs1r; // @[ID_EX.scala 96:12]
  assign io_rs2 = rs2r; // @[ID_EX.scala 97:12]
  assign io_Immediate_out = immr; // @[ID_EX.scala 98:22]
  assign io_func3_out = func3_r; // @[ID_EX.scala 100:18]
  assign io_func7_out = func7_r; // @[ID_EX.scala 101:18]
  assign io_rd_sel_out = rd_sel_r; // @[ID_EX.scala 99:19]
  assign io_MemWrite = MemWr_r; // @[ID_EX.scala 105:17]
  assign io_MemRead = MemRd_r; // @[ID_EX.scala 106:16]
  assign io_RegWrite = RegWr_r; // @[ID_EX.scala 108:17]
  assign io_MemtoReg = MemToReg_r; // @[ID_EX.scala 109:17]
  assign io_ALUoperation = AluOp_r; // @[ID_EX.scala 110:21]
  assign io_operand_A_sel = OpA_sel_r; // @[ID_EX.scala 111:21]
  assign io_operand_B_sel = OpB_sel_r[0]; // @[ID_EX.scala 112:22]
  assign io_rs1_sel_out = rs1_sel_r; // @[ID_EX.scala 102:20]
  assign io_rs2_sel_out = rs2_sel_r; // @[ID_EX.scala 103:20]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pcr = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  pc4r = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  rs1r = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  rs2r = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  immr = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  rd_sel_r = _RAND_5[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  rs1_sel_r = _RAND_6[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  rs2_sel_r = _RAND_7[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  func3_r = _RAND_8[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  func7_r = _RAND_9[6:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  MemWr_r = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  MemRd_r = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  RegWr_r = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  MemToReg_r = _RAND_13[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  AluOp_r = _RAND_14[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  OpA_sel_r = _RAND_15[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  OpB_sel_r = _RAND_16[1:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      pcr <= 32'h0;
    end else begin
      pcr <= io_PC;
    end
    if (reset) begin
      pc4r <= 32'h0;
    end else begin
      pc4r <= io_PC4;
    end
    if (reset) begin
      rs1r <= 32'sh0;
    end else begin
      rs1r <= io_rs1_in;
    end
    if (reset) begin
      rs2r <= 32'sh0;
    end else begin
      rs2r <= io_rs2_in;
    end
    if (reset) begin
      immr <= 32'sh0;
    end else begin
      immr <= io_Immediate;
    end
    if (reset) begin
      rd_sel_r <= 5'h0;
    end else begin
      rd_sel_r <= io_rd_sel_in;
    end
    if (reset) begin
      rs1_sel_r <= 5'h0;
    end else begin
      rs1_sel_r <= io_rs1_sel_in;
    end
    if (reset) begin
      rs2_sel_r <= 5'h0;
    end else begin
      rs2_sel_r <= io_rs2_sel_in;
    end
    if (reset) begin
      func3_r <= 3'h0;
    end else begin
      func3_r <= io_func3_in;
    end
    if (reset) begin
      func7_r <= 7'h0;
    end else begin
      func7_r <= io_func7_in;
    end
    if (reset) begin
      MemWr_r <= 1'h0;
    end else begin
      MemWr_r <= io_ctMemWr_in;
    end
    if (reset) begin
      MemRd_r <= 1'h0;
    end else begin
      MemRd_r <= io_ctMemRd_in;
    end
    if (reset) begin
      RegWr_r <= 1'h0;
    end else begin
      RegWr_r <= io_ctRegWr_in;
    end
    if (reset) begin
      MemToReg_r <= 1'h0;
    end else begin
      MemToReg_r <= io_ctMemToReg_in;
    end
    if (reset) begin
      AluOp_r <= 3'h0;
    end else begin
      AluOp_r <= io_ctAluOp_in;
    end
    if (reset) begin
      OpA_sel_r <= 2'h0;
    end else begin
      OpA_sel_r <= io_ctOpA_sel_in;
    end
    if (reset) begin
      OpB_sel_r <= 2'h0;
    end else begin
      OpB_sel_r <= {{1'd0}, io_ctOpB_sel_in};
    end
  end
endmodule
module IF_DEC(
  input         clock,
  input         reset,
  input  [31:0] io_pc_in,
  input  [31:0] io_pc4_in,
  input  [31:0] io_data_in,
  output [31:0] io_pc_out,
  output [31:0] io_pc4_out,
  output [31:0] io_rdData
);
  reg [31:0] pc_reg; // @[IF_DEC.scala 14:25]
  reg [31:0] _RAND_0;
  reg [31:0] pc4_reg; // @[IF_DEC.scala 15:26]
  reg [31:0] _RAND_1;
  reg [31:0] inst_reg; // @[IF_DEC.scala 16:27]
  reg [31:0] _RAND_2;
  assign io_pc_out = pc_reg; // @[IF_DEC.scala 20:15]
  assign io_pc4_out = pc4_reg; // @[IF_DEC.scala 21:16]
  assign io_rdData = inst_reg; // @[IF_DEC.scala 22:15]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc_reg = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  pc4_reg = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  inst_reg = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      pc_reg <= 32'h0;
    end else begin
      pc_reg <= io_pc_in;
    end
    if (reset) begin
      pc4_reg <= 32'h0;
    end else begin
      pc4_reg <= io_pc4_in;
    end
    if (reset) begin
      inst_reg <= 32'h0;
    end else begin
      inst_reg <= io_data_in;
    end
  end
endmodule
module Jalr(
  input  [31:0] io_A,
  input  [31:0] io_B,
  output [31:0] io_x
);
  wire [32:0] _T_11; // @[Jalr.scala 15:28]
  wire [31:0] _T_12; // @[Jalr.scala 15:28]
  wire [31:0] ab; // @[Jalr.scala 15:28]
  wire [32:0] _GEN_0; // @[Jalr.scala 16:27]
  wire [32:0] _T_14; // @[Jalr.scala 16:27]
  wire [32:0] bc; // @[Jalr.scala 16:27]
  wire [31:0] _GEN_1; // @[Jalr.scala 17:21]
  assign _T_11 = $signed(io_A) + $signed(io_B); // @[Jalr.scala 15:28]
  assign _T_12 = $signed(io_A) + $signed(io_B); // @[Jalr.scala 15:28]
  assign ab = $signed(_T_12); // @[Jalr.scala 15:28]
  assign _GEN_0 = {{1{ab[31]}},ab}; // @[Jalr.scala 16:27]
  assign _T_14 = $signed(_GEN_0) & $signed(33'shfffffffe); // @[Jalr.scala 16:27]
  assign bc = $signed(_T_14); // @[Jalr.scala 16:27]
  assign _GEN_1 = bc[31:0]; // @[Jalr.scala 17:21]
  assign io_x = $signed(_GEN_1); // @[Jalr.scala 17:21]
endmodule
module Forwarding(
  input  [4:0] io_rs1_sel_id,
  input  [4:0] io_rs2_sel_id,
  input  [4:0] io_ex_mem_rd,
  input  [4:0] io_mem_wb_rd,
  input        io_ex_mem_regwrite,
  input        io_mem_wb_regwrite,
  output [1:0] io_forward_a,
  output [1:0] io_forward_b
);
  wire  _T_28; // @[Forwarding.scala 22:68]
  wire  _T_29; // @[Forwarding.scala 22:52]
  wire  _T_30; // @[Forwarding.scala 23:44]
  wire  _T_31; // @[Forwarding.scala 23:80]
  wire  _T_32; // @[Forwarding.scala 23:63]
  wire [1:0] _GEN_0; // @[Forwarding.scala 28:67]
  wire [1:0] _GEN_1; // @[Forwarding.scala 26:67]
  wire [1:0] _GEN_2; // @[Forwarding.scala 26:67]
  wire [1:0] _GEN_3; // @[Forwarding.scala 23:99]
  wire [1:0] _GEN_4; // @[Forwarding.scala 23:99]
  wire [1:0] _GEN_5; // @[Forwarding.scala 22:83]
  wire [1:0] _GEN_6; // @[Forwarding.scala 22:83]
  wire  _T_42; // @[Forwarding.scala 34:67]
  wire  _T_43; // @[Forwarding.scala 34:52]
  wire  _T_44; // @[Forwarding.scala 35:45]
  wire  _T_45; // @[Forwarding.scala 35:81]
  wire  _T_46; // @[Forwarding.scala 35:64]
  wire  _T_52; // @[Forwarding.scala 35:201]
  wire  _T_53; // @[Forwarding.scala 35:183]
  wire  _T_54; // @[Forwarding.scala 35:237]
  wire  _T_55; // @[Forwarding.scala 35:219]
  wire  _T_56; // @[Forwarding.scala 35:104]
  wire  _T_57; // @[Forwarding.scala 35:101]
  wire  _T_68; // @[Forwarding.scala 38:70]
  wire  _T_69; // @[Forwarding.scala 38:67]
  wire  _T_78; // @[Forwarding.scala 40:137]
  wire  _T_79; // @[Forwarding.scala 40:70]
  wire  _T_80; // @[Forwarding.scala 40:67]
  wire [1:0] _GEN_7; // @[Forwarding.scala 40:197]
  wire [1:0] _GEN_8; // @[Forwarding.scala 38:174]
  wire [1:0] _GEN_9; // @[Forwarding.scala 38:174]
  wire [1:0] _GEN_10; // @[Forwarding.scala 35:256]
  wire [1:0] _GEN_11; // @[Forwarding.scala 35:256]
  assign _T_28 = io_ex_mem_rd != 5'h0; // @[Forwarding.scala 22:68]
  assign _T_29 = io_ex_mem_regwrite & _T_28; // @[Forwarding.scala 22:52]
  assign _T_30 = io_ex_mem_rd == io_rs1_sel_id; // @[Forwarding.scala 23:44]
  assign _T_31 = io_ex_mem_rd == io_rs2_sel_id; // @[Forwarding.scala 23:80]
  assign _T_32 = _T_30 & _T_31; // @[Forwarding.scala 23:63]
  assign _GEN_0 = _T_31 ? 2'h2 : 2'h0; // @[Forwarding.scala 28:67]
  assign _GEN_1 = _T_30 ? 2'h2 : 2'h0; // @[Forwarding.scala 26:67]
  assign _GEN_2 = _T_30 ? 2'h0 : _GEN_0; // @[Forwarding.scala 26:67]
  assign _GEN_3 = _T_32 ? 2'h2 : _GEN_1; // @[Forwarding.scala 23:99]
  assign _GEN_4 = _T_32 ? 2'h2 : _GEN_2; // @[Forwarding.scala 23:99]
  assign _GEN_5 = _T_29 ? _GEN_3 : 2'h0; // @[Forwarding.scala 22:83]
  assign _GEN_6 = _T_29 ? _GEN_4 : 2'h0; // @[Forwarding.scala 22:83]
  assign _T_42 = io_mem_wb_rd != 5'h0; // @[Forwarding.scala 34:67]
  assign _T_43 = io_mem_wb_regwrite & _T_42; // @[Forwarding.scala 34:52]
  assign _T_44 = io_mem_wb_rd == io_rs1_sel_id; // @[Forwarding.scala 35:45]
  assign _T_45 = io_mem_wb_rd == io_rs2_sel_id; // @[Forwarding.scala 35:81]
  assign _T_46 = _T_44 & _T_45; // @[Forwarding.scala 35:64]
  assign _T_52 = io_rs1_sel_id == io_ex_mem_rd; // @[Forwarding.scala 35:201]
  assign _T_53 = _T_29 & _T_52; // @[Forwarding.scala 35:183]
  assign _T_54 = io_rs2_sel_id == io_ex_mem_rd; // @[Forwarding.scala 35:237]
  assign _T_55 = _T_53 & _T_54; // @[Forwarding.scala 35:219]
  assign _T_56 = ~ _T_55; // @[Forwarding.scala 35:104]
  assign _T_57 = _T_46 & _T_56; // @[Forwarding.scala 35:101]
  assign _T_68 = ~ _T_53; // @[Forwarding.scala 38:70]
  assign _T_69 = _T_44 & _T_68; // @[Forwarding.scala 38:67]
  assign _T_78 = _T_29 & _T_54; // @[Forwarding.scala 40:137]
  assign _T_79 = ~ _T_78; // @[Forwarding.scala 40:70]
  assign _T_80 = _T_45 & _T_79; // @[Forwarding.scala 40:67]
  assign _GEN_7 = _T_80 ? 2'h1 : _GEN_6; // @[Forwarding.scala 40:197]
  assign _GEN_8 = _T_69 ? 2'h1 : _GEN_5; // @[Forwarding.scala 38:174]
  assign _GEN_9 = _T_69 ? _GEN_6 : _GEN_7; // @[Forwarding.scala 38:174]
  assign _GEN_10 = _T_57 ? 2'h1 : _GEN_8; // @[Forwarding.scala 35:256]
  assign _GEN_11 = _T_57 ? 2'h1 : _GEN_9; // @[Forwarding.scala 35:256]
  assign io_forward_a = _T_43 ? _GEN_10 : _GEN_5; // @[Forwarding.scala 16:29 Forwarding.scala 20:30 Forwarding.scala 24:46 Forwarding.scala 27:46 Forwarding.scala 36:46 Forwarding.scala 39:46]
  assign io_forward_b = _T_43 ? _GEN_11 : _GEN_6; // @[Forwarding.scala 17:29 Forwarding.scala 21:30 Forwarding.scala 25:46 Forwarding.scala 29:46 Forwarding.scala 37:46 Forwarding.scala 41:46]
endmodule
module HazardDetect(
  input  [31:0] io_if_id_inst,
  input         io_if_id_memread,
  input         io_id_ex_memread,
  input  [4:0]  io_id_ex_rd_sel,
  input  [31:0] io_if_id_pc_in,
  input  [31:0] io_current_pc_in,
  output        io_inst_forward,
  output        io_pc_forward,
  output        io_ctrl_forward,
  output [31:0] io_inst_out,
  output [31:0] io_pc_out,
  output [31:0] io_current_pc_out,
  input  [4:0]  io_rs1_sel,
  input  [4:0]  io_rs2_sel,
  input         io_control_branch
);
  wire  _T_39; // @[HazardDetect.scala 24:69]
  wire  _T_40; // @[HazardDetect.scala 24:50]
  wire  _T_51; // @[HazardDetect.scala 40:40]
  wire  _T_58; // @[HazardDetect.scala 48:105]
  wire  _T_59; // @[HazardDetect.scala 48:85]
  wire  _T_60; // @[HazardDetect.scala 48:48]
  wire  _GEN_8; // @[HazardDetect.scala 40:68]
  assign _T_39 = io_id_ex_rd_sel == io_rs1_sel; // @[HazardDetect.scala 24:69]
  assign _T_40 = io_id_ex_memread & _T_39; // @[HazardDetect.scala 24:50]
  assign _T_51 = io_control_branch & io_id_ex_memread; // @[HazardDetect.scala 40:40]
  assign _T_58 = io_id_ex_rd_sel == io_rs2_sel; // @[HazardDetect.scala 48:105]
  assign _T_59 = _T_39 | _T_58; // @[HazardDetect.scala 48:85]
  assign _T_60 = io_id_ex_memread & _T_59; // @[HazardDetect.scala 48:48]
  assign _GEN_8 = _T_51 ? 1'h0 : _T_60; // @[HazardDetect.scala 40:68]
  assign io_inst_forward = io_if_id_memread ? _T_40 : _GEN_8; // @[HazardDetect.scala 25:41 HazardDetect.scala 32:41 HazardDetect.scala 41:33 HazardDetect.scala 49:33 HazardDetect.scala 57:33]
  assign io_pc_forward = io_if_id_memread ? _T_40 : _GEN_8; // @[HazardDetect.scala 26:39 HazardDetect.scala 33:39 HazardDetect.scala 42:31 HazardDetect.scala 50:31 HazardDetect.scala 58:31]
  assign io_ctrl_forward = io_if_id_memread ? _T_40 : _GEN_8; // @[HazardDetect.scala 27:41 HazardDetect.scala 34:41 HazardDetect.scala 43:33 HazardDetect.scala 51:33 HazardDetect.scala 59:33]
  assign io_inst_out = io_if_id_inst; // @[HazardDetect.scala 28:37 HazardDetect.scala 35:37 HazardDetect.scala 44:29 HazardDetect.scala 52:29 HazardDetect.scala 60:29]
  assign io_pc_out = io_if_id_pc_in; // @[HazardDetect.scala 29:35 HazardDetect.scala 36:35 HazardDetect.scala 45:27 HazardDetect.scala 53:27 HazardDetect.scala 61:27]
  assign io_current_pc_out = io_current_pc_in; // @[HazardDetect.scala 30:43 HazardDetect.scala 37:43 HazardDetect.scala 46:35 HazardDetect.scala 54:35 HazardDetect.scala 62:35]
endmodule
module branchlogic(
  input  [31:0] io_rs1_in,
  input  [31:0] io_rs2_in,
  input  [2:0]  io_func3_in,
  input         io_branch,
  output        io_output_x,
  output        io_branch2
);
  wire  _T_19; // @[branchlogic.scala 22:34]
  wire  _T_20; // @[branchlogic.scala 23:40]
  wire  _T_24; // @[branchlogic.scala 28:40]
  wire  _T_25; // @[branchlogic.scala 29:40]
  wire  _T_29; // @[branchlogic.scala 34:40]
  wire  _T_30; // @[branchlogic.scala 35:40]
  wire  _T_34; // @[branchlogic.scala 40:40]
  wire  _T_35; // @[branchlogic.scala 41:40]
  wire  _T_39; // @[branchlogic.scala 46:40]
  wire [31:0] _T_40; // @[branchlogic.scala 47:40]
  wire [31:0] _T_41; // @[branchlogic.scala 47:59]
  wire  _T_42; // @[branchlogic.scala 47:47]
  wire  _T_46; // @[branchlogic.scala 52:40]
  wire  _T_49; // @[branchlogic.scala 53:47]
  wire  _GEN_6; // @[branchlogic.scala 52:54]
  wire  _GEN_7; // @[branchlogic.scala 46:54]
  wire  _GEN_8; // @[branchlogic.scala 40:54]
  wire  _GEN_9; // @[branchlogic.scala 34:54]
  wire  _GEN_10; // @[branchlogic.scala 28:54]
  assign _T_19 = io_func3_in == 3'h0; // @[branchlogic.scala 22:34]
  assign _T_20 = $signed(io_rs1_in) == $signed(io_rs2_in); // @[branchlogic.scala 23:40]
  assign _T_24 = io_func3_in == 3'h1; // @[branchlogic.scala 28:40]
  assign _T_25 = $signed(io_rs1_in) != $signed(io_rs2_in); // @[branchlogic.scala 29:40]
  assign _T_29 = io_func3_in == 3'h4; // @[branchlogic.scala 34:40]
  assign _T_30 = $signed(io_rs1_in) < $signed(io_rs2_in); // @[branchlogic.scala 35:40]
  assign _T_34 = io_func3_in == 3'h5; // @[branchlogic.scala 40:40]
  assign _T_35 = $signed(io_rs1_in) >= $signed(io_rs2_in); // @[branchlogic.scala 41:40]
  assign _T_39 = io_func3_in == 3'h6; // @[branchlogic.scala 46:40]
  assign _T_40 = $unsigned(io_rs1_in); // @[branchlogic.scala 47:40]
  assign _T_41 = $unsigned(io_rs2_in); // @[branchlogic.scala 47:59]
  assign _T_42 = _T_40 < _T_41; // @[branchlogic.scala 47:47]
  assign _T_46 = io_func3_in == 3'h7; // @[branchlogic.scala 52:40]
  assign _T_49 = _T_40 >= _T_41; // @[branchlogic.scala 53:47]
  assign _GEN_6 = _T_46 ? _T_49 : 1'h0; // @[branchlogic.scala 52:54]
  assign _GEN_7 = _T_39 ? _T_42 : _GEN_6; // @[branchlogic.scala 46:54]
  assign _GEN_8 = _T_34 ? _T_35 : _GEN_7; // @[branchlogic.scala 40:54]
  assign _GEN_9 = _T_29 ? _T_30 : _GEN_8; // @[branchlogic.scala 34:54]
  assign _GEN_10 = _T_24 ? _T_25 : _GEN_9; // @[branchlogic.scala 28:54]
  assign io_output_x = _T_19 ? _T_20 : _GEN_10; // @[branchlogic.scala 17:21 branchlogic.scala 24:45 branchlogic.scala 26:44 branchlogic.scala 30:45 branchlogic.scala 32:44 branchlogic.scala 36:45 branchlogic.scala 38:44 branchlogic.scala 42:45 branchlogic.scala 44:44 branchlogic.scala 48:45 branchlogic.scala 50:44 branchlogic.scala 54:45 branchlogic.scala 56:44 branchlogic.scala 59:36]
  assign io_branch2 = io_branch; // @[branchlogic.scala 19:19]
endmodule
module branchforward(
  input  [4:0] io_id_ex_rd_sel,
  input        io_id_ex_memread,
  input        io_id_ex_regwrite,
  input        io_ex_mem_regwrite,
  input  [4:0] io_ex_mem_rd_sel,
  input        io_ex_mem_memread,
  input  [4:0] io_mem_wb_rd_sel,
  input        io_mem_wb_regwrite,
  input  [4:0] io_rs1_sel,
  input  [4:0] io_rs2_sel,
  input        io_ctrl_branch,
  output [3:0] io_forward_a,
  output [3:0] io_forward_b
);
  wire  _T_38; // @[branchforward.scala 28:28]
  wire  _T_40; // @[branchforward.scala 28:63]
  wire  _T_41; // @[branchforward.scala 28:43]
  wire  _T_42; // @[branchforward.scala 28:91]
  wire  _T_43; // @[branchforward.scala 28:71]
  wire  _T_44; // @[branchforward.scala 28:127]
  wire  _T_45; // @[branchforward.scala 28:107]
  wire  _T_62; // @[branchforward.scala 33:78]
  wire  _GEN_2; // @[branchforward.scala 31:115]
  wire  _GEN_3; // @[branchforward.scala 28:144]
  wire  _GEN_4; // @[branchforward.scala 28:144]
  wire  _T_65; // @[branchforward.scala 38:29]
  wire  _T_67; // @[branchforward.scala 38:65]
  wire  _T_68; // @[branchforward.scala 38:44]
  wire  _T_72; // @[branchforward.scala 39:44]
  wire  _T_74; // @[branchforward.scala 39:80]
  wire  _T_75; // @[branchforward.scala 39:9]
  wire  _T_76; // @[branchforward.scala 38:73]
  wire  _T_77; // @[branchforward.scala 40:27]
  wire  _T_78; // @[branchforward.scala 39:117]
  wire  _T_79; // @[branchforward.scala 40:64]
  wire  _T_80; // @[branchforward.scala 40:43]
  wire  _T_91; // @[branchforward.scala 46:44]
  wire  _T_92; // @[branchforward.scala 46:9]
  wire  _T_93; // @[branchforward.scala 45:80]
  wire  _T_95; // @[branchforward.scala 46:81]
  wire  _T_106; // @[branchforward.scala 52:9]
  wire  _T_107; // @[branchforward.scala 51:80]
  wire  _T_109; // @[branchforward.scala 52:81]
  wire  _T_115; // @[branchforward.scala 57:51]
  wire  _T_123; // @[branchforward.scala 57:80]
  wire  _T_125; // @[branchforward.scala 58:117]
  wire  _T_127; // @[branchforward.scala 59:43]
  wire  _T_140; // @[branchforward.scala 64:80]
  wire  _T_142; // @[branchforward.scala 65:81]
  wire  _T_148; // @[branchforward.scala 70:42]
  wire  _T_151; // @[branchforward.scala 70:77]
  wire  _T_157; // @[branchforward.scala 70:106]
  wire  _T_159; // @[branchforward.scala 71:81]
  wire [2:0] _GEN_5; // @[branchforward.scala 72:44]
  wire [2:0] _GEN_6; // @[branchforward.scala 66:44]
  wire [2:0] _GEN_7; // @[branchforward.scala 66:44]
  wire [2:0] _GEN_8; // @[branchforward.scala 59:81]
  wire [2:0] _GEN_9; // @[branchforward.scala 59:81]
  wire [2:0] _GEN_10; // @[branchforward.scala 53:44]
  wire [2:0] _GEN_11; // @[branchforward.scala 53:44]
  wire [2:0] _GEN_12; // @[branchforward.scala 47:44]
  wire [2:0] _GEN_13; // @[branchforward.scala 47:44]
  wire [2:0] _GEN_14; // @[branchforward.scala 40:81]
  wire [2:0] _GEN_15; // @[branchforward.scala 40:81]
  wire  _T_162; // @[branchforward.scala 79:29]
  wire  _T_173; // @[branchforward.scala 79:73]
  wire  _T_177; // @[branchforward.scala 83:45]
  wire  _T_179; // @[branchforward.scala 83:82]
  wire  _T_180; // @[branchforward.scala 83:9]
  wire  _T_181; // @[branchforward.scala 81:117]
  wire  _T_182; // @[branchforward.scala 84:27]
  wire  _T_183; // @[branchforward.scala 83:120]
  wire  _T_184; // @[branchforward.scala 84:64]
  wire  _T_185; // @[branchforward.scala 84:43]
  wire  _T_192; // @[branchforward.scala 90:46]
  wire  _T_201; // @[branchforward.scala 90:110]
  wire  _T_205; // @[branchforward.scala 94:47]
  wire  _T_206; // @[branchforward.scala 94:11]
  wire  _T_207; // @[branchforward.scala 92:83]
  wire  _T_209; // @[branchforward.scala 94:85]
  wire  _T_221; // @[branchforward.scala 100:80]
  wire  _T_226; // @[branchforward.scala 104:11]
  wire  _T_227; // @[branchforward.scala 102:83]
  wire  _T_229; // @[branchforward.scala 104:85]
  wire [2:0] _GEN_21; // @[branchforward.scala 105:46]
  wire [2:0] _GEN_23; // @[branchforward.scala 95:46]
  wire [2:0] _GEN_24; // @[branchforward.scala 95:46]
  wire [2:0] _GEN_25; // @[branchforward.scala 84:81]
  wire [2:0] _GEN_26; // @[branchforward.scala 84:81]
  wire  _T_299; // @[branchforward.scala 143:32]
  wire  _T_304; // @[branchforward.scala 145:40]
  wire  _T_307; // @[branchforward.scala 145:74]
  wire  _T_309; // @[branchforward.scala 145:102]
  wire [2:0] _GEN_27; // @[branchforward.scala 145:138]
  wire  _T_315; // @[branchforward.scala 150:41]
  wire  _T_318; // @[branchforward.scala 150:76]
  wire  _T_324; // @[branchforward.scala 150:105]
  wire  _T_326; // @[branchforward.scala 151:83]
  wire  _T_335; // @[branchforward.scala 157:83]
  wire  _T_341; // @[branchforward.scala 157:112]
  wire  _T_343; // @[branchforward.scala 158:85]
  wire [3:0] _GEN_28; // @[branchforward.scala 159:48]
  wire [3:0] _GEN_29; // @[branchforward.scala 152:46]
  wire  _T_358; // @[branchforward.scala 167:105]
  wire  _T_364; // @[branchforward.scala 169:83]
  wire  _T_366; // @[branchforward.scala 171:85]
  wire [3:0] _GEN_31; // @[branchforward.scala 172:46]
  wire [3:0] _GEN_32; // @[branchforward.scala 143:41]
  wire [2:0] _GEN_34; // @[branchforward.scala 26:34]
  assign _T_38 = io_id_ex_rd_sel != 5'h0; // @[branchforward.scala 28:28]
  assign _T_40 = io_id_ex_memread != 1'h1; // @[branchforward.scala 28:63]
  assign _T_41 = _T_38 & _T_40; // @[branchforward.scala 28:43]
  assign _T_42 = io_id_ex_rd_sel == io_rs1_sel; // @[branchforward.scala 28:91]
  assign _T_43 = _T_41 & _T_42; // @[branchforward.scala 28:71]
  assign _T_44 = io_id_ex_rd_sel == io_rs2_sel; // @[branchforward.scala 28:127]
  assign _T_45 = _T_43 & _T_44; // @[branchforward.scala 28:107]
  assign _T_62 = _T_41 & _T_44; // @[branchforward.scala 33:78]
  assign _GEN_2 = _T_43 ? 1'h0 : _T_62; // @[branchforward.scala 31:115]
  assign _GEN_3 = _T_45 ? 1'h1 : _T_43; // @[branchforward.scala 28:144]
  assign _GEN_4 = _T_45 ? 1'h1 : _GEN_2; // @[branchforward.scala 28:144]
  assign _T_65 = io_ex_mem_rd_sel != 5'h0; // @[branchforward.scala 38:29]
  assign _T_67 = io_ex_mem_memread != 1'h1; // @[branchforward.scala 38:65]
  assign _T_68 = _T_65 & _T_67; // @[branchforward.scala 38:44]
  assign _T_72 = _T_38 & _T_42; // @[branchforward.scala 39:44]
  assign _T_74 = _T_72 & _T_44; // @[branchforward.scala 39:80]
  assign _T_75 = ~ _T_74; // @[branchforward.scala 39:9]
  assign _T_76 = _T_68 & _T_75; // @[branchforward.scala 38:73]
  assign _T_77 = io_ex_mem_rd_sel == io_rs1_sel; // @[branchforward.scala 40:27]
  assign _T_78 = _T_76 & _T_77; // @[branchforward.scala 39:117]
  assign _T_79 = io_ex_mem_rd_sel == io_rs2_sel; // @[branchforward.scala 40:64]
  assign _T_80 = _T_78 & _T_79; // @[branchforward.scala 40:43]
  assign _T_91 = _T_38 & _T_44; // @[branchforward.scala 46:44]
  assign _T_92 = ~ _T_91; // @[branchforward.scala 46:9]
  assign _T_93 = _T_68 & _T_92; // @[branchforward.scala 45:80]
  assign _T_95 = _T_93 & _T_79; // @[branchforward.scala 46:81]
  assign _T_106 = ~ _T_72; // @[branchforward.scala 52:9]
  assign _T_107 = _T_68 & _T_106; // @[branchforward.scala 51:80]
  assign _T_109 = _T_107 & _T_77; // @[branchforward.scala 52:81]
  assign _T_115 = _T_65 & io_ex_mem_memread; // @[branchforward.scala 57:51]
  assign _T_123 = _T_115 & _T_75; // @[branchforward.scala 57:80]
  assign _T_125 = _T_123 & _T_77; // @[branchforward.scala 58:117]
  assign _T_127 = _T_125 & _T_79; // @[branchforward.scala 59:43]
  assign _T_140 = _T_115 & _T_92; // @[branchforward.scala 64:80]
  assign _T_142 = _T_140 & _T_79; // @[branchforward.scala 65:81]
  assign _T_148 = io_ctrl_branch & _T_65; // @[branchforward.scala 70:42]
  assign _T_151 = _T_148 & io_ex_mem_memread; // @[branchforward.scala 70:77]
  assign _T_157 = _T_151 & _T_106; // @[branchforward.scala 70:106]
  assign _T_159 = _T_157 & _T_77; // @[branchforward.scala 71:81]
  assign _GEN_5 = _T_159 ? 3'h4 : {{2'd0}, _GEN_3}; // @[branchforward.scala 72:44]
  assign _GEN_6 = _T_142 ? 3'h4 : {{2'd0}, _GEN_4}; // @[branchforward.scala 66:44]
  assign _GEN_7 = _T_142 ? {{2'd0}, _GEN_3} : _GEN_5; // @[branchforward.scala 66:44]
  assign _GEN_8 = _T_127 ? 3'h4 : _GEN_7; // @[branchforward.scala 59:81]
  assign _GEN_9 = _T_127 ? 3'h4 : _GEN_6; // @[branchforward.scala 59:81]
  assign _GEN_10 = _T_109 ? 3'h2 : _GEN_8; // @[branchforward.scala 53:44]
  assign _GEN_11 = _T_109 ? {{2'd0}, _GEN_4} : _GEN_9; // @[branchforward.scala 53:44]
  assign _GEN_12 = _T_95 ? 3'h2 : _GEN_11; // @[branchforward.scala 47:44]
  assign _GEN_13 = _T_95 ? {{2'd0}, _GEN_3} : _GEN_10; // @[branchforward.scala 47:44]
  assign _GEN_14 = _T_80 ? 3'h2 : _GEN_13; // @[branchforward.scala 40:81]
  assign _GEN_15 = _T_80 ? 3'h2 : _GEN_12; // @[branchforward.scala 40:81]
  assign _T_162 = io_mem_wb_rd_sel != 5'h0; // @[branchforward.scala 79:29]
  assign _T_173 = _T_162 & _T_75; // @[branchforward.scala 79:73]
  assign _T_177 = _T_65 & _T_77; // @[branchforward.scala 83:45]
  assign _T_179 = _T_177 & _T_79; // @[branchforward.scala 83:82]
  assign _T_180 = ~ _T_179; // @[branchforward.scala 83:9]
  assign _T_181 = _T_173 & _T_180; // @[branchforward.scala 81:117]
  assign _T_182 = io_mem_wb_rd_sel == io_rs1_sel; // @[branchforward.scala 84:27]
  assign _T_183 = _T_181 & _T_182; // @[branchforward.scala 83:120]
  assign _T_184 = io_mem_wb_rd_sel == io_rs2_sel; // @[branchforward.scala 84:64]
  assign _T_185 = _T_183 & _T_184; // @[branchforward.scala 84:43]
  assign _T_192 = io_mem_wb_regwrite & _T_162; // @[branchforward.scala 90:46]
  assign _T_201 = _T_192 & _T_92; // @[branchforward.scala 90:110]
  assign _T_205 = _T_65 & _T_79; // @[branchforward.scala 94:47]
  assign _T_206 = ~ _T_205; // @[branchforward.scala 94:11]
  assign _T_207 = _T_201 & _T_206; // @[branchforward.scala 92:83]
  assign _T_209 = _T_207 & _T_184; // @[branchforward.scala 94:85]
  assign _T_221 = _T_162 & _T_106; // @[branchforward.scala 100:80]
  assign _T_226 = ~ _T_177; // @[branchforward.scala 104:11]
  assign _T_227 = _T_221 & _T_226; // @[branchforward.scala 102:83]
  assign _T_229 = _T_227 & _T_182; // @[branchforward.scala 104:85]
  assign _GEN_21 = _T_229 ? 3'h3 : _GEN_14; // @[branchforward.scala 105:46]
  assign _GEN_23 = _T_209 ? 3'h3 : _GEN_15; // @[branchforward.scala 95:46]
  assign _GEN_24 = _T_209 ? _GEN_14 : _GEN_21; // @[branchforward.scala 95:46]
  assign _GEN_25 = _T_185 ? 3'h3 : _GEN_24; // @[branchforward.scala 84:81]
  assign _GEN_26 = _T_185 ? 3'h3 : _GEN_23; // @[branchforward.scala 84:81]
  assign _T_299 = io_ctrl_branch == 1'h0; // @[branchforward.scala 143:32]
  assign _T_304 = io_id_ex_regwrite & _T_38; // @[branchforward.scala 145:40]
  assign _T_307 = _T_304 & _T_40; // @[branchforward.scala 145:74]
  assign _T_309 = _T_307 & _T_42; // @[branchforward.scala 145:102]
  assign _GEN_27 = _T_309 ? 3'h6 : 3'h0; // @[branchforward.scala 145:138]
  assign _T_315 = io_ex_mem_regwrite & _T_65; // @[branchforward.scala 150:41]
  assign _T_318 = _T_315 & _T_67; // @[branchforward.scala 150:76]
  assign _T_324 = _T_318 & _T_106; // @[branchforward.scala 150:105]
  assign _T_326 = _T_324 & _T_77; // @[branchforward.scala 151:83]
  assign _T_335 = _T_315 & io_ex_mem_memread; // @[branchforward.scala 157:83]
  assign _T_341 = _T_335 & _T_106; // @[branchforward.scala 157:112]
  assign _T_343 = _T_341 & _T_77; // @[branchforward.scala 158:85]
  assign _GEN_28 = _T_343 ? 4'h9 : {{1'd0}, _GEN_27}; // @[branchforward.scala 159:48]
  assign _GEN_29 = _T_326 ? 4'h7 : _GEN_28; // @[branchforward.scala 152:46]
  assign _T_358 = _T_192 & _T_106; // @[branchforward.scala 167:105]
  assign _T_364 = _T_358 & _T_226; // @[branchforward.scala 169:83]
  assign _T_366 = _T_364 & _T_182; // @[branchforward.scala 171:85]
  assign _GEN_31 = _T_366 ? 4'h8 : _GEN_29; // @[branchforward.scala 172:46]
  assign _GEN_32 = _T_299 ? _GEN_31 : 4'h0; // @[branchforward.scala 143:41]
  assign _GEN_34 = io_ctrl_branch ? _GEN_26 : 3'h0; // @[branchforward.scala 26:34]
  assign io_forward_a = io_ctrl_branch ? {{1'd0}, _GEN_25} : _GEN_32; // @[branchforward.scala 22:18 branchforward.scala 29:22 branchforward.scala 32:22 branchforward.scala 42:22 branchforward.scala 55:22 branchforward.scala 61:22 branchforward.scala 74:22 branchforward.scala 86:22 branchforward.scala 107:24 branchforward.scala 116:22 branchforward.scala 137:24 branchforward.scala 146:24 branchforward.scala 154:24 branchforward.scala 161:26 branchforward.scala 174:24 branchforward.scala 184:24]
  assign io_forward_b = {{1'd0}, _GEN_34}; // @[branchforward.scala 23:18 branchforward.scala 30:22 branchforward.scala 34:22 branchforward.scala 43:22 branchforward.scala 49:22 branchforward.scala 62:22 branchforward.scala 68:22 branchforward.scala 87:22 branchforward.scala 97:24 branchforward.scala 117:22 branchforward.scala 127:24]
endmodule
module structdetect(
  input  [4:0] io_rs1_sel,
  input  [4:0] io_rs2_sel,
  input        io_mem_wb_regwrite,
  input  [4:0] io_mem_wb_rd_sel,
  output       io_forward_rs1,
  output       io_forward_rs2
);
  wire  _T_19; // @[structdetect.scala 16:56]
  wire  _T_25; // @[structdetect.scala 22:55]
  assign _T_19 = io_mem_wb_rd_sel == io_rs1_sel; // @[structdetect.scala 16:56]
  assign _T_25 = io_mem_wb_rd_sel == io_rs2_sel; // @[structdetect.scala 22:55]
  assign io_forward_rs1 = io_mem_wb_regwrite & _T_19; // @[structdetect.scala 17:20 structdetect.scala 19:20]
  assign io_forward_rs2 = io_mem_wb_regwrite & _T_25; // @[structdetect.scala 23:20 structdetect.scala 25:20]
endmodule
module Top2(
  input         clock,
  input         reset,
  output [31:0] io_instruction,
  output [31:0] io_reg_out,
  output        io_branch_stall
);
  wire [6:0] control_io_opcode; // @[Top2.scala 12:37]
  wire  control_io_MemoryWrite; // @[Top2.scala 12:37]
  wire  control_io_Branch2; // @[Top2.scala 12:37]
  wire  control_io_MemRead; // @[Top2.scala 12:37]
  wire  control_io_RegWrite; // @[Top2.scala 12:37]
  wire  control_io_MemtoReg; // @[Top2.scala 12:37]
  wire [2:0] control_io_ALUoperation; // @[Top2.scala 12:37]
  wire [1:0] control_io_operand_A_sel; // @[Top2.scala 12:37]
  wire  control_io_operand_B_sel; // @[Top2.scala 12:37]
  wire [1:0] control_io_extend_sel; // @[Top2.scala 12:37]
  wire [1:0] control_io_next_PC_sel; // @[Top2.scala 12:37]
  wire  register_clock; // @[Top2.scala 13:38]
  wire  register_io_regwrite; // @[Top2.scala 13:38]
  wire [4:0] register_io_rd_sel; // @[Top2.scala 13:38]
  wire [4:0] register_io_rs1_sel; // @[Top2.scala 13:38]
  wire [4:0] register_io_rs2_sel; // @[Top2.scala 13:38]
  wire [31:0] register_io_WriteData; // @[Top2.scala 13:38]
  wire [31:0] register_io_rs1; // @[Top2.scala 13:38]
  wire [31:0] register_io_rs2; // @[Top2.scala 13:38]
  wire [31:0] alu_io_A; // @[Top2.scala 14:33]
  wire [31:0] alu_io_B; // @[Top2.scala 14:33]
  wire [31:0] alu_io_x; // @[Top2.scala 14:33]
  wire [4:0] alu_io_Aluop; // @[Top2.scala 14:33]
  wire [2:0] alucontrol_io_Aluop; // @[Top2.scala 15:40]
  wire [6:0] alucontrol_io_Func7; // @[Top2.scala 15:40]
  wire [2:0] alucontrol_io_Func3; // @[Top2.scala 15:40]
  wire [4:0] alucontrol_io_control; // @[Top2.scala 15:40]
  wire [31:0] immediate_io_Instruction; // @[Top2.scala 16:39]
  wire [31:0] immediate_io_PC; // @[Top2.scala 16:39]
  wire [31:0] immediate_io_I_Immediate; // @[Top2.scala 16:39]
  wire [31:0] immediate_io_S_Immediate; // @[Top2.scala 16:39]
  wire [31:0] immediate_io_U_Immediate; // @[Top2.scala 16:39]
  wire [31:0] immediate_io_SB_Immediate; // @[Top2.scala 16:39]
  wire [31:0] immediate_io_UJ_Immediate; // @[Top2.scala 16:39]
  wire  PC_clock; // @[Top2.scala 17:30]
  wire  PC_reset; // @[Top2.scala 17:30]
  wire [31:0] PC_io_input; // @[Top2.scala 17:30]
  wire [31:0] PC_io_pc; // @[Top2.scala 17:30]
  wire [31:0] PC_io_pc4; // @[Top2.scala 17:30]
  wire  instmem_clock; // @[Top2.scala 18:35]
  wire [31:0] instmem_io_wrAddr; // @[Top2.scala 18:35]
  wire [31:0] instmem_io_rdData; // @[Top2.scala 18:35]
  wire  DataMemory_clock; // @[Top2.scala 19:38]
  wire [7:0] DataMemory_io_wrAddr; // @[Top2.scala 19:38]
  wire [31:0] DataMemory_io_wrData; // @[Top2.scala 19:38]
  wire  DataMemory_io_MemRead; // @[Top2.scala 19:38]
  wire [31:0] DataMemory_io_Data; // @[Top2.scala 19:38]
  wire  DataMemory_io_MemWrite; // @[Top2.scala 19:38]
  wire  mem_wb_clock; // @[Top2.scala 20:34]
  wire  mem_wb_reset; // @[Top2.scala 20:34]
  wire  mem_wb_io_Regwr; // @[Top2.scala 20:34]
  wire  mem_wb_io_MemtoReg; // @[Top2.scala 20:34]
  wire [4:0] mem_wb_io_Rd_sel; // @[Top2.scala 20:34]
  wire [31:0] mem_wb_io_data_mem_in; // @[Top2.scala 20:34]
  wire [31:0] mem_wb_io_Aluout; // @[Top2.scala 20:34]
  wire  mem_wb_io_Regwr_out; // @[Top2.scala 20:34]
  wire  mem_wb_io_MemtoReg_out; // @[Top2.scala 20:34]
  wire [4:0] mem_wb_io_Rd_sel_out; // @[Top2.scala 20:34]
  wire [31:0] mem_wb_io_data_mem_out; // @[Top2.scala 20:34]
  wire [31:0] mem_wb_io_Aluout_2; // @[Top2.scala 20:34]
  wire  ex_mem_clock; // @[Top2.scala 21:34]
  wire  ex_mem_reset; // @[Top2.scala 21:34]
  wire  ex_mem_io_Memwr; // @[Top2.scala 21:34]
  wire  ex_mem_io_Memrd; // @[Top2.scala 21:34]
  wire  ex_mem_io_Regwr; // @[Top2.scala 21:34]
  wire  ex_mem_io_MemtoReg; // @[Top2.scala 21:34]
  wire [31:0] ex_mem_io_Rs2; // @[Top2.scala 21:34]
  wire [4:0] ex_mem_io_Rd_sel; // @[Top2.scala 21:34]
  wire [31:0] ex_mem_io_Alu_out; // @[Top2.scala 21:34]
  wire  ex_mem_io_Memwr_out; // @[Top2.scala 21:34]
  wire  ex_mem_io_Memrd_out; // @[Top2.scala 21:34]
  wire  ex_mem_io_Regwr_out; // @[Top2.scala 21:34]
  wire  ex_mem_io_MemtoReg_out; // @[Top2.scala 21:34]
  wire [31:0] ex_mem_io_Rs2_out; // @[Top2.scala 21:34]
  wire [4:0] ex_mem_io_Rd_sel_out; // @[Top2.scala 21:34]
  wire [31:0] ex_mem_io_Alu_out2; // @[Top2.scala 21:34]
  wire  id_ex_clock; // @[Top2.scala 22:33]
  wire  id_ex_reset; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_PC; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_PC4; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_Immediate; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_rs1_in; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_rs2_in; // @[Top2.scala 22:33]
  wire [4:0] id_ex_io_rd_sel_in; // @[Top2.scala 22:33]
  wire [2:0] id_ex_io_func3_in; // @[Top2.scala 22:33]
  wire [6:0] id_ex_io_func7_in; // @[Top2.scala 22:33]
  wire  id_ex_io_ctMemWr_in; // @[Top2.scala 22:33]
  wire  id_ex_io_ctMemRd_in; // @[Top2.scala 22:33]
  wire  id_ex_io_ctRegWr_in; // @[Top2.scala 22:33]
  wire  id_ex_io_ctMemToReg_in; // @[Top2.scala 22:33]
  wire [2:0] id_ex_io_ctAluOp_in; // @[Top2.scala 22:33]
  wire [1:0] id_ex_io_ctOpA_sel_in; // @[Top2.scala 22:33]
  wire  id_ex_io_ctOpB_sel_in; // @[Top2.scala 22:33]
  wire [4:0] id_ex_io_rs1_sel_in; // @[Top2.scala 22:33]
  wire [4:0] id_ex_io_rs2_sel_in; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_pc_out; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_pc4_out; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_rs1; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_rs2; // @[Top2.scala 22:33]
  wire [31:0] id_ex_io_Immediate_out; // @[Top2.scala 22:33]
  wire [2:0] id_ex_io_func3_out; // @[Top2.scala 22:33]
  wire [6:0] id_ex_io_func7_out; // @[Top2.scala 22:33]
  wire [4:0] id_ex_io_rd_sel_out; // @[Top2.scala 22:33]
  wire  id_ex_io_MemWrite; // @[Top2.scala 22:33]
  wire  id_ex_io_MemRead; // @[Top2.scala 22:33]
  wire  id_ex_io_RegWrite; // @[Top2.scala 22:33]
  wire  id_ex_io_MemtoReg; // @[Top2.scala 22:33]
  wire [2:0] id_ex_io_ALUoperation; // @[Top2.scala 22:33]
  wire [1:0] id_ex_io_operand_A_sel; // @[Top2.scala 22:33]
  wire  id_ex_io_operand_B_sel; // @[Top2.scala 22:33]
  wire [4:0] id_ex_io_rs1_sel_out; // @[Top2.scala 22:33]
  wire [4:0] id_ex_io_rs2_sel_out; // @[Top2.scala 22:33]
  wire  if_id_clock; // @[Top2.scala 23:33]
  wire  if_id_reset; // @[Top2.scala 23:33]
  wire [31:0] if_id_io_pc_in; // @[Top2.scala 23:33]
  wire [31:0] if_id_io_pc4_in; // @[Top2.scala 23:33]
  wire [31:0] if_id_io_data_in; // @[Top2.scala 23:33]
  wire [31:0] if_id_io_pc_out; // @[Top2.scala 23:33]
  wire [31:0] if_id_io_pc4_out; // @[Top2.scala 23:33]
  wire [31:0] if_id_io_rdData; // @[Top2.scala 23:33]
  wire [31:0] JALR_io_A; // @[Top2.scala 24:32]
  wire [31:0] JALR_io_B; // @[Top2.scala 24:32]
  wire [31:0] JALR_io_x; // @[Top2.scala 24:32]
  wire [4:0] forward_io_rs1_sel_id; // @[Top2.scala 25:35]
  wire [4:0] forward_io_rs2_sel_id; // @[Top2.scala 25:35]
  wire [4:0] forward_io_ex_mem_rd; // @[Top2.scala 25:35]
  wire [4:0] forward_io_mem_wb_rd; // @[Top2.scala 25:35]
  wire  forward_io_ex_mem_regwrite; // @[Top2.scala 25:35]
  wire  forward_io_mem_wb_regwrite; // @[Top2.scala 25:35]
  wire [1:0] forward_io_forward_a; // @[Top2.scala 25:35]
  wire [1:0] forward_io_forward_b; // @[Top2.scala 25:35]
  wire [31:0] hazardDetection_io_if_id_inst; // @[Top2.scala 26:43]
  wire  hazardDetection_io_if_id_memread; // @[Top2.scala 26:43]
  wire  hazardDetection_io_id_ex_memread; // @[Top2.scala 26:43]
  wire [4:0] hazardDetection_io_id_ex_rd_sel; // @[Top2.scala 26:43]
  wire [31:0] hazardDetection_io_if_id_pc_in; // @[Top2.scala 26:43]
  wire [31:0] hazardDetection_io_current_pc_in; // @[Top2.scala 26:43]
  wire  hazardDetection_io_inst_forward; // @[Top2.scala 26:43]
  wire  hazardDetection_io_pc_forward; // @[Top2.scala 26:43]
  wire  hazardDetection_io_ctrl_forward; // @[Top2.scala 26:43]
  wire [31:0] hazardDetection_io_inst_out; // @[Top2.scala 26:43]
  wire [31:0] hazardDetection_io_pc_out; // @[Top2.scala 26:43]
  wire [31:0] hazardDetection_io_current_pc_out; // @[Top2.scala 26:43]
  wire [4:0] hazardDetection_io_rs1_sel; // @[Top2.scala 26:43]
  wire [4:0] hazardDetection_io_rs2_sel; // @[Top2.scala 26:43]
  wire  hazardDetection_io_control_branch; // @[Top2.scala 26:43]
  wire [31:0] branchlogic_io_rs1_in; // @[Top2.scala 27:39]
  wire [31:0] branchlogic_io_rs2_in; // @[Top2.scala 27:39]
  wire [2:0] branchlogic_io_func3_in; // @[Top2.scala 27:39]
  wire  branchlogic_io_branch; // @[Top2.scala 27:39]
  wire  branchlogic_io_output_x; // @[Top2.scala 27:39]
  wire  branchlogic_io_branch2; // @[Top2.scala 27:39]
  wire [4:0] branchforward_io_id_ex_rd_sel; // @[Top2.scala 28:41]
  wire  branchforward_io_id_ex_memread; // @[Top2.scala 28:41]
  wire  branchforward_io_id_ex_regwrite; // @[Top2.scala 28:41]
  wire  branchforward_io_ex_mem_regwrite; // @[Top2.scala 28:41]
  wire [4:0] branchforward_io_ex_mem_rd_sel; // @[Top2.scala 28:41]
  wire  branchforward_io_ex_mem_memread; // @[Top2.scala 28:41]
  wire [4:0] branchforward_io_mem_wb_rd_sel; // @[Top2.scala 28:41]
  wire  branchforward_io_mem_wb_regwrite; // @[Top2.scala 28:41]
  wire [4:0] branchforward_io_rs1_sel; // @[Top2.scala 28:41]
  wire [4:0] branchforward_io_rs2_sel; // @[Top2.scala 28:41]
  wire  branchforward_io_ctrl_branch; // @[Top2.scala 28:41]
  wire [3:0] branchforward_io_forward_a; // @[Top2.scala 28:41]
  wire [3:0] branchforward_io_forward_b; // @[Top2.scala 28:41]
  wire [4:0] structdetect_io_rs1_sel; // @[Top2.scala 29:40]
  wire [4:0] structdetect_io_rs2_sel; // @[Top2.scala 29:40]
  wire  structdetect_io_mem_wb_regwrite; // @[Top2.scala 29:40]
  wire [4:0] structdetect_io_mem_wb_rd_sel; // @[Top2.scala 29:40]
  wire  structdetect_io_forward_rs1; // @[Top2.scala 29:40]
  wire  structdetect_io_forward_rs2; // @[Top2.scala 29:40]
  wire [9:0] _T_20; // @[Top2.scala 44:44]
  wire  _T_29; // @[Top2.scala 91:49]
  wire  _T_31; // @[Top2.scala 94:56]
  wire  _T_33; // @[Top2.scala 97:56]
  wire  _T_35; // @[Top2.scala 100:56]
  wire  _T_37; // @[Top2.scala 103:56]
  wire  _T_39; // @[Top2.scala 106:56]
  wire  _T_41; // @[Top2.scala 109:55]
  wire  _T_43; // @[Top2.scala 112:56]
  wire  _T_45; // @[Top2.scala 115:56]
  wire  _T_47; // @[Top2.scala 118:56]
  wire  _T_49; // @[Top2.scala 121:56]
  wire [31:0] _GEN_0; // @[Top2.scala 121:71]
  wire [31:0] _GEN_1; // @[Top2.scala 121:71]
  wire [31:0] _GEN_2; // @[Top2.scala 118:71]
  wire [31:0] _GEN_3; // @[Top2.scala 118:71]
  wire [31:0] _GEN_4; // @[Top2.scala 115:71]
  wire [31:0] _GEN_5; // @[Top2.scala 115:71]
  wire [31:0] _GEN_6; // @[Top2.scala 112:71]
  wire [31:0] _GEN_7; // @[Top2.scala 112:71]
  wire [31:0] _GEN_8; // @[Top2.scala 109:70]
  wire [31:0] _GEN_9; // @[Top2.scala 109:70]
  wire [31:0] _GEN_10; // @[Top2.scala 106:71]
  wire [31:0] _GEN_11; // @[Top2.scala 106:71]
  wire [31:0] _GEN_12; // @[Top2.scala 103:71]
  wire [31:0] _GEN_13; // @[Top2.scala 103:71]
  wire [31:0] _GEN_14; // @[Top2.scala 100:71]
  wire [31:0] _GEN_15; // @[Top2.scala 100:71]
  wire [31:0] _GEN_16; // @[Top2.scala 97:71]
  wire [31:0] _GEN_17; // @[Top2.scala 97:71]
  wire [31:0] _GEN_18; // @[Top2.scala 94:71]
  wire [31:0] _GEN_19; // @[Top2.scala 94:71]
  wire  _T_51; // @[Top2.scala 131:49]
  wire  _T_53; // @[Top2.scala 133:56]
  wire  _T_55; // @[Top2.scala 135:56]
  wire  _T_57; // @[Top2.scala 137:56]
  wire  _T_59; // @[Top2.scala 139:56]
  wire  _T_61; // @[Top2.scala 141:56]
  wire [31:0] _GEN_22; // @[Top2.scala 141:71]
  wire [31:0] _GEN_23; // @[Top2.scala 139:71]
  wire [31:0] _GEN_24; // @[Top2.scala 137:71]
  wire [31:0] _GEN_25; // @[Top2.scala 135:71]
  wire [31:0] _GEN_26; // @[Top2.scala 133:71]
  wire  _T_63; // @[Top2.scala 155:43]
  wire  _T_65; // @[Top2.scala 156:54]
  wire  _T_67; // @[Top2.scala 157:62]
  wire [31:0] _GEN_28; // @[Top2.scala 157:69]
  wire [31:0] _GEN_29; // @[Top2.scala 156:61]
  wire  _T_69; // @[Top2.scala 161:49]
  wire [31:0] _GEN_30; // @[Top2.scala 161:56]
  wire  _T_73; // @[Top2.scala 182:54]
  wire [31:0] _GEN_32; // @[Top2.scala 182:66]
  wire [31:0] _GEN_33; // @[Top2.scala 182:66]
  wire  _T_75; // @[Top2.scala 191:52]
  wire  _T_77; // @[Top2.scala 194:53]
  wire  _T_79; // @[Top2.scala 195:64]
  wire  _T_81; // @[Top2.scala 195:98]
  wire  _T_82; // @[Top2.scala 195:72]
  wire [31:0] _T_83; // @[Top2.scala 196:82]
  wire  _T_88; // @[Top2.scala 201:65]
  wire  _T_90; // @[Top2.scala 201:93]
  wire  _T_91; // @[Top2.scala 201:73]
  wire [31:0] _GEN_35; // @[Top2.scala 201:101]
  wire [31:0] _GEN_36; // @[Top2.scala 201:101]
  wire [31:0] _GEN_37; // @[Top2.scala 201:101]
  wire [31:0] _GEN_38; // @[Top2.scala 201:101]
  wire [31:0] _GEN_39; // @[Top2.scala 195:107]
  wire [31:0] _GEN_40; // @[Top2.scala 195:107]
  wire [31:0] _GEN_41; // @[Top2.scala 195:107]
  wire [31:0] _GEN_42; // @[Top2.scala 195:107]
  wire  _GEN_43; // @[Top2.scala 195:107]
  wire  _T_98; // @[Top2.scala 214:60]
  wire [31:0] _T_99; // @[Top2.scala 215:74]
  wire  _T_104; // @[Top2.scala 219:60]
  wire [31:0] _T_105; // @[Top2.scala 220:59]
  wire  _T_110; // @[Top2.scala 224:59]
  wire  _T_114; // @[Top2.scala 227:60]
  wire [31:0] _GEN_44; // @[Top2.scala 227:67]
  wire [31:0] _GEN_45; // @[Top2.scala 225:61]
  wire [31:0] _GEN_46; // @[Top2.scala 224:70]
  wire [31:0] _GEN_47; // @[Top2.scala 219:73]
  wire [31:0] _GEN_48; // @[Top2.scala 219:73]
  wire [31:0] _GEN_49; // @[Top2.scala 219:73]
  wire [31:0] _GEN_50; // @[Top2.scala 219:73]
  wire [31:0] _GEN_51; // @[Top2.scala 214:73]
  wire [31:0] _GEN_52; // @[Top2.scala 214:73]
  wire [31:0] _GEN_53; // @[Top2.scala 214:73]
  wire [31:0] _GEN_54; // @[Top2.scala 214:73]
  wire [31:0] _GEN_55; // @[Top2.scala 194:65]
  wire [31:0] _GEN_56; // @[Top2.scala 194:65]
  wire [31:0] _GEN_57; // @[Top2.scala 194:65]
  wire [31:0] _GEN_58; // @[Top2.scala 194:65]
  wire  _GEN_59; // @[Top2.scala 194:65]
  wire  _T_116; // @[Top2.scala 234:54]
  wire  _T_133; // @[Top2.scala 277:50]
  wire  _T_137; // @[Top2.scala 284:50]
  wire [31:0] _GEN_76; // @[Top2.scala 286:65]
  wire  _T_141; // @[Top2.scala 317:46]
  wire [31:0] _T_142; // @[Top2.scala 318:54]
  wire  _T_144; // @[Top2.scala 319:51]
  wire [31:0] _T_145; // @[Top2.scala 320:51]
  wire  _T_147; // @[Top2.scala 321:51]
  wire  _T_149; // @[Top2.scala 322:52]
  wire  _T_151; // @[Top2.scala 324:58]
  wire  _T_153; // @[Top2.scala 326:58]
  wire [31:0] _GEN_78; // @[Top2.scala 326:71]
  wire [31:0] _GEN_79; // @[Top2.scala 324:71]
  wire [31:0] _GEN_80; // @[Top2.scala 322:65]
  wire [31:0] _GEN_81; // @[Top2.scala 321:63]
  wire [31:0] _GEN_82; // @[Top2.scala 319:62]
  wire  _T_155; // @[Top2.scala 334:45]
  wire  _T_157; // @[Top2.scala 336:51]
  wire  _T_159; // @[Top2.scala 338:56]
  wire  _T_161; // @[Top2.scala 340:57]
  wire [31:0] _GEN_84; // @[Top2.scala 340:69]
  wire [31:0] _GEN_85; // @[Top2.scala 338:67]
  wire [31:0] _GEN_86; // @[Top2.scala 336:62]
  wire  _T_163; // @[Top2.scala 345:52]
  wire [31:0] _GEN_87; // @[Top2.scala 352:71]
  wire [31:0] _GEN_88; // @[Top2.scala 352:71]
  wire [31:0] _GEN_89; // @[Top2.scala 349:71]
  wire [31:0] _GEN_90; // @[Top2.scala 349:71]
  wire [31:0] _GEN_91; // @[Top2.scala 346:64]
  wire [31:0] _GEN_92; // @[Top2.scala 346:64]
  wire [31:0] _GEN_93; // @[Top2.scala 345:64]
  wire [31:0] _GEN_94; // @[Top2.scala 345:64]
  wire  _T_173; // @[Top2.scala 392:45]
  wire  _T_175; // @[Top2.scala 395:51]
  wire [31:0] _GEN_97; // @[Top2.scala 395:58]
  control control ( // @[Top2.scala 12:37]
    .io_opcode(control_io_opcode),
    .io_MemoryWrite(control_io_MemoryWrite),
    .io_Branch2(control_io_Branch2),
    .io_MemRead(control_io_MemRead),
    .io_RegWrite(control_io_RegWrite),
    .io_MemtoReg(control_io_MemtoReg),
    .io_ALUoperation(control_io_ALUoperation),
    .io_operand_A_sel(control_io_operand_A_sel),
    .io_operand_B_sel(control_io_operand_B_sel),
    .io_extend_sel(control_io_extend_sel),
    .io_next_PC_sel(control_io_next_PC_sel)
  );
  reg_32 register ( // @[Top2.scala 13:38]
    .clock(register_clock),
    .io_regwrite(register_io_regwrite),
    .io_rd_sel(register_io_rd_sel),
    .io_rs1_sel(register_io_rs1_sel),
    .io_rs2_sel(register_io_rs2_sel),
    .io_WriteData(register_io_WriteData),
    .io_rs1(register_io_rs1),
    .io_rs2(register_io_rs2)
  );
  alu alu ( // @[Top2.scala 14:33]
    .io_A(alu_io_A),
    .io_B(alu_io_B),
    .io_x(alu_io_x),
    .io_Aluop(alu_io_Aluop)
  );
  ALU_control alucontrol ( // @[Top2.scala 15:40]
    .io_Aluop(alucontrol_io_Aluop),
    .io_Func7(alucontrol_io_Func7),
    .io_Func3(alucontrol_io_Func3),
    .io_control(alucontrol_io_control)
  );
  ImmediateGeneration immediate ( // @[Top2.scala 16:39]
    .io_Instruction(immediate_io_Instruction),
    .io_PC(immediate_io_PC),
    .io_I_Immediate(immediate_io_I_Immediate),
    .io_S_Immediate(immediate_io_S_Immediate),
    .io_U_Immediate(immediate_io_U_Immediate),
    .io_SB_Immediate(immediate_io_SB_Immediate),
    .io_UJ_Immediate(immediate_io_UJ_Immediate)
  );
  PC PC ( // @[Top2.scala 17:30]
    .clock(PC_clock),
    .reset(PC_reset),
    .io_input(PC_io_input),
    .io_pc(PC_io_pc),
    .io_pc4(PC_io_pc4)
  );
  InstructionMemory instmem ( // @[Top2.scala 18:35]
    .clock(instmem_clock),
    .io_wrAddr(instmem_io_wrAddr),
    .io_rdData(instmem_io_rdData)
  );
  DataMemory DataMemory ( // @[Top2.scala 19:38]
    .clock(DataMemory_clock),
    .io_wrAddr(DataMemory_io_wrAddr),
    .io_wrData(DataMemory_io_wrData),
    .io_MemRead(DataMemory_io_MemRead),
    .io_Data(DataMemory_io_Data),
    .io_MemWrite(DataMemory_io_MemWrite)
  );
  MEM_WB mem_wb ( // @[Top2.scala 20:34]
    .clock(mem_wb_clock),
    .reset(mem_wb_reset),
    .io_Regwr(mem_wb_io_Regwr),
    .io_MemtoReg(mem_wb_io_MemtoReg),
    .io_Rd_sel(mem_wb_io_Rd_sel),
    .io_data_mem_in(mem_wb_io_data_mem_in),
    .io_Aluout(mem_wb_io_Aluout),
    .io_Regwr_out(mem_wb_io_Regwr_out),
    .io_MemtoReg_out(mem_wb_io_MemtoReg_out),
    .io_Rd_sel_out(mem_wb_io_Rd_sel_out),
    .io_data_mem_out(mem_wb_io_data_mem_out),
    .io_Aluout_2(mem_wb_io_Aluout_2)
  );
  EX_MEM ex_mem ( // @[Top2.scala 21:34]
    .clock(ex_mem_clock),
    .reset(ex_mem_reset),
    .io_Memwr(ex_mem_io_Memwr),
    .io_Memrd(ex_mem_io_Memrd),
    .io_Regwr(ex_mem_io_Regwr),
    .io_MemtoReg(ex_mem_io_MemtoReg),
    .io_Rs2(ex_mem_io_Rs2),
    .io_Rd_sel(ex_mem_io_Rd_sel),
    .io_Alu_out(ex_mem_io_Alu_out),
    .io_Memwr_out(ex_mem_io_Memwr_out),
    .io_Memrd_out(ex_mem_io_Memrd_out),
    .io_Regwr_out(ex_mem_io_Regwr_out),
    .io_MemtoReg_out(ex_mem_io_MemtoReg_out),
    .io_Rs2_out(ex_mem_io_Rs2_out),
    .io_Rd_sel_out(ex_mem_io_Rd_sel_out),
    .io_Alu_out2(ex_mem_io_Alu_out2)
  );
  ID_EX id_ex ( // @[Top2.scala 22:33]
    .clock(id_ex_clock),
    .reset(id_ex_reset),
    .io_PC(id_ex_io_PC),
    .io_PC4(id_ex_io_PC4),
    .io_Immediate(id_ex_io_Immediate),
    .io_rs1_in(id_ex_io_rs1_in),
    .io_rs2_in(id_ex_io_rs2_in),
    .io_rd_sel_in(id_ex_io_rd_sel_in),
    .io_func3_in(id_ex_io_func3_in),
    .io_func7_in(id_ex_io_func7_in),
    .io_ctMemWr_in(id_ex_io_ctMemWr_in),
    .io_ctMemRd_in(id_ex_io_ctMemRd_in),
    .io_ctRegWr_in(id_ex_io_ctRegWr_in),
    .io_ctMemToReg_in(id_ex_io_ctMemToReg_in),
    .io_ctAluOp_in(id_ex_io_ctAluOp_in),
    .io_ctOpA_sel_in(id_ex_io_ctOpA_sel_in),
    .io_ctOpB_sel_in(id_ex_io_ctOpB_sel_in),
    .io_rs1_sel_in(id_ex_io_rs1_sel_in),
    .io_rs2_sel_in(id_ex_io_rs2_sel_in),
    .io_pc_out(id_ex_io_pc_out),
    .io_pc4_out(id_ex_io_pc4_out),
    .io_rs1(id_ex_io_rs1),
    .io_rs2(id_ex_io_rs2),
    .io_Immediate_out(id_ex_io_Immediate_out),
    .io_func3_out(id_ex_io_func3_out),
    .io_func7_out(id_ex_io_func7_out),
    .io_rd_sel_out(id_ex_io_rd_sel_out),
    .io_MemWrite(id_ex_io_MemWrite),
    .io_MemRead(id_ex_io_MemRead),
    .io_RegWrite(id_ex_io_RegWrite),
    .io_MemtoReg(id_ex_io_MemtoReg),
    .io_ALUoperation(id_ex_io_ALUoperation),
    .io_operand_A_sel(id_ex_io_operand_A_sel),
    .io_operand_B_sel(id_ex_io_operand_B_sel),
    .io_rs1_sel_out(id_ex_io_rs1_sel_out),
    .io_rs2_sel_out(id_ex_io_rs2_sel_out)
  );
  IF_DEC if_id ( // @[Top2.scala 23:33]
    .clock(if_id_clock),
    .reset(if_id_reset),
    .io_pc_in(if_id_io_pc_in),
    .io_pc4_in(if_id_io_pc4_in),
    .io_data_in(if_id_io_data_in),
    .io_pc_out(if_id_io_pc_out),
    .io_pc4_out(if_id_io_pc4_out),
    .io_rdData(if_id_io_rdData)
  );
  Jalr JALR ( // @[Top2.scala 24:32]
    .io_A(JALR_io_A),
    .io_B(JALR_io_B),
    .io_x(JALR_io_x)
  );
  Forwarding forward ( // @[Top2.scala 25:35]
    .io_rs1_sel_id(forward_io_rs1_sel_id),
    .io_rs2_sel_id(forward_io_rs2_sel_id),
    .io_ex_mem_rd(forward_io_ex_mem_rd),
    .io_mem_wb_rd(forward_io_mem_wb_rd),
    .io_ex_mem_regwrite(forward_io_ex_mem_regwrite),
    .io_mem_wb_regwrite(forward_io_mem_wb_regwrite),
    .io_forward_a(forward_io_forward_a),
    .io_forward_b(forward_io_forward_b)
  );
  HazardDetect hazardDetection ( // @[Top2.scala 26:43]
    .io_if_id_inst(hazardDetection_io_if_id_inst),
    .io_if_id_memread(hazardDetection_io_if_id_memread),
    .io_id_ex_memread(hazardDetection_io_id_ex_memread),
    .io_id_ex_rd_sel(hazardDetection_io_id_ex_rd_sel),
    .io_if_id_pc_in(hazardDetection_io_if_id_pc_in),
    .io_current_pc_in(hazardDetection_io_current_pc_in),
    .io_inst_forward(hazardDetection_io_inst_forward),
    .io_pc_forward(hazardDetection_io_pc_forward),
    .io_ctrl_forward(hazardDetection_io_ctrl_forward),
    .io_inst_out(hazardDetection_io_inst_out),
    .io_pc_out(hazardDetection_io_pc_out),
    .io_current_pc_out(hazardDetection_io_current_pc_out),
    .io_rs1_sel(hazardDetection_io_rs1_sel),
    .io_rs2_sel(hazardDetection_io_rs2_sel),
    .io_control_branch(hazardDetection_io_control_branch)
  );
  branchlogic branchlogic ( // @[Top2.scala 27:39]
    .io_rs1_in(branchlogic_io_rs1_in),
    .io_rs2_in(branchlogic_io_rs2_in),
    .io_func3_in(branchlogic_io_func3_in),
    .io_branch(branchlogic_io_branch),
    .io_output_x(branchlogic_io_output_x),
    .io_branch2(branchlogic_io_branch2)
  );
  branchforward branchforward ( // @[Top2.scala 28:41]
    .io_id_ex_rd_sel(branchforward_io_id_ex_rd_sel),
    .io_id_ex_memread(branchforward_io_id_ex_memread),
    .io_id_ex_regwrite(branchforward_io_id_ex_regwrite),
    .io_ex_mem_regwrite(branchforward_io_ex_mem_regwrite),
    .io_ex_mem_rd_sel(branchforward_io_ex_mem_rd_sel),
    .io_ex_mem_memread(branchforward_io_ex_mem_memread),
    .io_mem_wb_rd_sel(branchforward_io_mem_wb_rd_sel),
    .io_mem_wb_regwrite(branchforward_io_mem_wb_regwrite),
    .io_rs1_sel(branchforward_io_rs1_sel),
    .io_rs2_sel(branchforward_io_rs2_sel),
    .io_ctrl_branch(branchforward_io_ctrl_branch),
    .io_forward_a(branchforward_io_forward_a),
    .io_forward_b(branchforward_io_forward_b)
  );
  structdetect structdetect ( // @[Top2.scala 29:40]
    .io_rs1_sel(structdetect_io_rs1_sel),
    .io_rs2_sel(structdetect_io_rs2_sel),
    .io_mem_wb_regwrite(structdetect_io_mem_wb_regwrite),
    .io_mem_wb_rd_sel(structdetect_io_mem_wb_rd_sel),
    .io_forward_rs1(structdetect_io_forward_rs1),
    .io_forward_rs2(structdetect_io_forward_rs2)
  );
  assign _T_20 = PC_io_pc[11:2]; // @[Top2.scala 44:44]
  assign _T_29 = branchforward_io_forward_a == 4'h0; // @[Top2.scala 91:49]
  assign _T_31 = branchforward_io_forward_a == 4'h1; // @[Top2.scala 94:56]
  assign _T_33 = branchforward_io_forward_a == 4'h2; // @[Top2.scala 97:56]
  assign _T_35 = branchforward_io_forward_a == 4'h3; // @[Top2.scala 100:56]
  assign _T_37 = branchforward_io_forward_a == 4'h4; // @[Top2.scala 103:56]
  assign _T_39 = branchforward_io_forward_a == 4'h5; // @[Top2.scala 106:56]
  assign _T_41 = branchforward_io_forward_a == 4'h6; // @[Top2.scala 109:55]
  assign _T_43 = branchforward_io_forward_a == 4'h7; // @[Top2.scala 112:56]
  assign _T_45 = branchforward_io_forward_a == 4'h8; // @[Top2.scala 115:56]
  assign _T_47 = branchforward_io_forward_a == 4'h9; // @[Top2.scala 118:56]
  assign _T_49 = branchforward_io_forward_a == 4'ha; // @[Top2.scala 121:56]
  assign _GEN_0 = _T_49 ? $signed(register_io_WriteData) : $signed(register_io_rs1); // @[Top2.scala 121:71]
  assign _GEN_1 = register_io_rs1; // @[Top2.scala 121:71]
  assign _GEN_2 = _T_47 ? $signed(DataMemory_io_Data) : $signed(_GEN_0); // @[Top2.scala 118:71]
  assign _GEN_3 = _T_47 ? $signed(register_io_rs1) : $signed(_GEN_1); // @[Top2.scala 118:71]
  assign _GEN_4 = _T_45 ? $signed(register_io_WriteData) : $signed(_GEN_2); // @[Top2.scala 115:71]
  assign _GEN_5 = _T_45 ? $signed(register_io_rs1) : $signed(_GEN_3); // @[Top2.scala 115:71]
  assign _GEN_6 = _T_43 ? $signed(ex_mem_io_Alu_out2) : $signed(_GEN_4); // @[Top2.scala 112:71]
  assign _GEN_7 = _T_43 ? $signed(register_io_rs1) : $signed(_GEN_5); // @[Top2.scala 112:71]
  assign _GEN_8 = _T_41 ? $signed(alu_io_x) : $signed(_GEN_6); // @[Top2.scala 109:70]
  assign _GEN_9 = _T_41 ? $signed(register_io_rs1) : $signed(_GEN_7); // @[Top2.scala 109:70]
  assign _GEN_10 = _T_39 ? $signed(register_io_WriteData) : $signed(_GEN_9); // @[Top2.scala 106:71]
  assign _GEN_11 = _T_39 ? $signed(register_io_rs1) : $signed(_GEN_8); // @[Top2.scala 106:71]
  assign _GEN_12 = _T_37 ? $signed(DataMemory_io_Data) : $signed(_GEN_10); // @[Top2.scala 103:71]
  assign _GEN_13 = _T_37 ? $signed(register_io_rs1) : $signed(_GEN_11); // @[Top2.scala 103:71]
  assign _GEN_14 = _T_35 ? $signed(register_io_WriteData) : $signed(_GEN_12); // @[Top2.scala 100:71]
  assign _GEN_15 = _T_35 ? $signed(register_io_rs1) : $signed(_GEN_13); // @[Top2.scala 100:71]
  assign _GEN_16 = _T_33 ? $signed(ex_mem_io_Alu_out2) : $signed(_GEN_14); // @[Top2.scala 97:71]
  assign _GEN_17 = _T_33 ? $signed(register_io_rs1) : $signed(_GEN_15); // @[Top2.scala 97:71]
  assign _GEN_18 = _T_31 ? $signed(alu_io_x) : $signed(_GEN_16); // @[Top2.scala 94:71]
  assign _GEN_19 = _T_31 ? $signed(register_io_rs1) : $signed(_GEN_17); // @[Top2.scala 94:71]
  assign _T_51 = branchforward_io_forward_b == 4'h0; // @[Top2.scala 131:49]
  assign _T_53 = branchforward_io_forward_b == 4'h1; // @[Top2.scala 133:56]
  assign _T_55 = branchforward_io_forward_b == 4'h2; // @[Top2.scala 135:56]
  assign _T_57 = branchforward_io_forward_b == 4'h3; // @[Top2.scala 137:56]
  assign _T_59 = branchforward_io_forward_b == 4'h4; // @[Top2.scala 139:56]
  assign _T_61 = branchforward_io_forward_b == 4'h5; // @[Top2.scala 141:56]
  assign _GEN_22 = _T_61 ? $signed(register_io_WriteData) : $signed(register_io_rs2); // @[Top2.scala 141:71]
  assign _GEN_23 = _T_59 ? $signed(DataMemory_io_Data) : $signed(_GEN_22); // @[Top2.scala 139:71]
  assign _GEN_24 = _T_57 ? $signed(register_io_WriteData) : $signed(_GEN_23); // @[Top2.scala 137:71]
  assign _GEN_25 = _T_55 ? $signed(ex_mem_io_Alu_out2) : $signed(_GEN_24); // @[Top2.scala 135:71]
  assign _GEN_26 = _T_53 ? $signed(alu_io_x) : $signed(_GEN_25); // @[Top2.scala 133:71]
  assign _T_63 = control_io_extend_sel == 2'h1; // @[Top2.scala 155:43]
  assign _T_65 = control_io_operand_A_sel == 2'h3; // @[Top2.scala 156:54]
  assign _T_67 = control_io_operand_B_sel; // @[Top2.scala 157:62]
  assign _GEN_28 = _T_67 ? $signed(immediate_io_U_Immediate) : $signed(32'sh0); // @[Top2.scala 157:69]
  assign _GEN_29 = _T_65 ? $signed(_GEN_28) : $signed(32'sh0); // @[Top2.scala 156:61]
  assign _T_69 = control_io_extend_sel == 2'h2; // @[Top2.scala 161:49]
  assign _GEN_30 = _T_69 ? $signed(immediate_io_S_Immediate) : $signed(immediate_io_I_Immediate); // @[Top2.scala 161:56]
  assign _T_73 = hazardDetection_io_inst_forward; // @[Top2.scala 182:54]
  assign _GEN_32 = _T_73 ? hazardDetection_io_inst_out : instmem_io_rdData; // @[Top2.scala 182:66]
  assign _GEN_33 = _T_73 ? hazardDetection_io_current_pc_out : PC_io_pc; // @[Top2.scala 182:66]
  assign _T_75 = hazardDetection_io_pc_forward; // @[Top2.scala 191:52]
  assign _T_77 = control_io_next_PC_sel == 2'h1; // @[Top2.scala 194:53]
  assign _T_79 = branchlogic_io_output_x; // @[Top2.scala 195:64]
  assign _T_81 = branchlogic_io_branch2; // @[Top2.scala 195:98]
  assign _T_82 = _T_79 & _T_81; // @[Top2.scala 195:72]
  assign _T_83 = $unsigned(immediate_io_SB_Immediate); // @[Top2.scala 196:82]
  assign _T_88 = control_io_Branch2; // @[Top2.scala 201:65]
  assign _T_90 = id_ex_io_MemRead; // @[Top2.scala 201:93]
  assign _T_91 = _T_88 & _T_90; // @[Top2.scala 201:73]
  assign _GEN_35 = _T_91 ? _T_83 : PC_io_pc4; // @[Top2.scala 201:101]
  assign _GEN_36 = _T_91 ? 32'h0 : _GEN_33; // @[Top2.scala 201:101]
  assign _GEN_37 = _T_91 ? 32'h0 : PC_io_pc4; // @[Top2.scala 201:101]
  assign _GEN_38 = _T_91 ? 32'h0 : _GEN_32; // @[Top2.scala 201:101]
  assign _GEN_39 = _T_82 ? _T_83 : _GEN_35; // @[Top2.scala 195:107]
  assign _GEN_40 = _T_82 ? 32'h0 : _GEN_36; // @[Top2.scala 195:107]
  assign _GEN_41 = _T_82 ? 32'h0 : _GEN_37; // @[Top2.scala 195:107]
  assign _GEN_42 = _T_82 ? 32'h0 : _GEN_38; // @[Top2.scala 195:107]
  assign _GEN_43 = _T_82 ? 1'h0 : _T_91; // @[Top2.scala 195:107]
  assign _T_98 = control_io_next_PC_sel == 2'h2; // @[Top2.scala 214:60]
  assign _T_99 = $unsigned(immediate_io_UJ_Immediate); // @[Top2.scala 215:74]
  assign _T_104 = control_io_next_PC_sel == 2'h3; // @[Top2.scala 219:60]
  assign _T_105 = $unsigned(JALR_io_x); // @[Top2.scala 220:59]
  assign _T_110 = control_io_next_PC_sel == 2'h0; // @[Top2.scala 224:59]
  assign _T_114 = id_ex_io_MemRead == 1'h0; // @[Top2.scala 227:60]
  assign _GEN_44 = _T_114 ? PC_io_pc4 : 32'h0; // @[Top2.scala 227:67]
  assign _GEN_45 = _T_90 ? if_id_io_pc4_out : _GEN_44; // @[Top2.scala 225:61]
  assign _GEN_46 = _T_110 ? _GEN_45 : 32'h0; // @[Top2.scala 224:70]
  assign _GEN_47 = _T_104 ? _T_105 : _GEN_46; // @[Top2.scala 219:73]
  assign _GEN_48 = _T_104 ? 32'h0 : _GEN_33; // @[Top2.scala 219:73]
  assign _GEN_49 = _T_104 ? 32'h0 : PC_io_pc4; // @[Top2.scala 219:73]
  assign _GEN_50 = _T_104 ? 32'h0 : _GEN_32; // @[Top2.scala 219:73]
  assign _GEN_51 = _T_98 ? _T_99 : _GEN_47; // @[Top2.scala 214:73]
  assign _GEN_52 = _T_98 ? 32'h0 : _GEN_48; // @[Top2.scala 214:73]
  assign _GEN_53 = _T_98 ? 32'h0 : _GEN_49; // @[Top2.scala 214:73]
  assign _GEN_54 = _T_98 ? 32'h0 : _GEN_50; // @[Top2.scala 214:73]
  assign _GEN_55 = _T_77 ? _GEN_39 : _GEN_51; // @[Top2.scala 194:65]
  assign _GEN_56 = _T_77 ? _GEN_40 : _GEN_52; // @[Top2.scala 194:65]
  assign _GEN_57 = _T_77 ? _GEN_41 : _GEN_53; // @[Top2.scala 194:65]
  assign _GEN_58 = _T_77 ? _GEN_42 : _GEN_54; // @[Top2.scala 194:65]
  assign _GEN_59 = _T_77 ? _GEN_43 : 1'h0; // @[Top2.scala 194:65]
  assign _T_116 = hazardDetection_io_ctrl_forward; // @[Top2.scala 234:54]
  assign _T_133 = structdetect_io_forward_rs1; // @[Top2.scala 277:50]
  assign _T_137 = structdetect_io_forward_rs2; // @[Top2.scala 284:50]
  assign _GEN_76 = register_io_rs2; // @[Top2.scala 286:65]
  assign _T_141 = id_ex_io_operand_A_sel == 2'h2; // @[Top2.scala 317:46]
  assign _T_142 = $signed(id_ex_io_pc4_out); // @[Top2.scala 318:54]
  assign _T_144 = id_ex_io_operand_A_sel == 2'h1; // @[Top2.scala 319:51]
  assign _T_145 = $signed(id_ex_io_pc_out); // @[Top2.scala 320:51]
  assign _T_147 = id_ex_io_operand_A_sel == 2'h0; // @[Top2.scala 321:51]
  assign _T_149 = forward_io_forward_a == 2'h0; // @[Top2.scala 322:52]
  assign _T_151 = forward_io_forward_a == 2'h1; // @[Top2.scala 324:58]
  assign _T_153 = forward_io_forward_a == 2'h2; // @[Top2.scala 326:58]
  assign _GEN_78 = _T_153 ? $signed(ex_mem_io_Alu_out2) : $signed(32'sh0); // @[Top2.scala 326:71]
  assign _GEN_79 = _T_151 ? $signed(register_io_WriteData) : $signed(_GEN_78); // @[Top2.scala 324:71]
  assign _GEN_80 = _T_149 ? $signed(id_ex_io_rs1) : $signed(_GEN_79); // @[Top2.scala 322:65]
  assign _GEN_81 = _T_147 ? $signed(_GEN_80) : $signed(32'sh0); // @[Top2.scala 321:63]
  assign _GEN_82 = _T_144 ? $signed(_T_145) : $signed(_GEN_81); // @[Top2.scala 319:62]
  assign _T_155 = id_ex_io_operand_B_sel; // @[Top2.scala 334:45]
  assign _T_157 = forward_io_forward_b == 2'h1; // @[Top2.scala 336:51]
  assign _T_159 = forward_io_forward_b == 2'h2; // @[Top2.scala 338:56]
  assign _T_161 = forward_io_forward_b == 2'h0; // @[Top2.scala 340:57]
  assign _GEN_84 = id_ex_io_rs2; // @[Top2.scala 340:69]
  assign _GEN_85 = _T_159 ? $signed(ex_mem_io_Alu_out2) : $signed(_GEN_84); // @[Top2.scala 338:67]
  assign _GEN_86 = _T_157 ? $signed(register_io_WriteData) : $signed(_GEN_85); // @[Top2.scala 336:62]
  assign _T_163 = id_ex_io_operand_B_sel == 1'h0; // @[Top2.scala 345:52]
  assign _GEN_87 = _T_159 ? $signed(ex_mem_io_Alu_out2) : $signed(32'sh0); // @[Top2.scala 352:71]
  assign _GEN_88 = _T_159 ? $signed(ex_mem_io_Alu_out2) : $signed(id_ex_io_rs2); // @[Top2.scala 352:71]
  assign _GEN_89 = _T_157 ? $signed(register_io_WriteData) : $signed(_GEN_87); // @[Top2.scala 349:71]
  assign _GEN_90 = _T_157 ? $signed(register_io_WriteData) : $signed(_GEN_88); // @[Top2.scala 349:71]
  assign _GEN_91 = _T_161 ? $signed(id_ex_io_rs2) : $signed(_GEN_89); // @[Top2.scala 346:64]
  assign _GEN_92 = _T_161 ? $signed(id_ex_io_rs2) : $signed(_GEN_90); // @[Top2.scala 346:64]
  assign _GEN_93 = _T_163 ? $signed(_GEN_91) : $signed(32'sh0); // @[Top2.scala 345:64]
  assign _GEN_94 = _T_163 ? $signed(_GEN_92) : $signed(id_ex_io_rs2); // @[Top2.scala 345:64]
  assign _T_173 = mem_wb_io_MemtoReg_out; // @[Top2.scala 392:45]
  assign _T_175 = mem_wb_io_MemtoReg_out == 1'h0; // @[Top2.scala 395:51]
  assign _GEN_97 = _T_175 ? $signed(mem_wb_io_Aluout_2) : $signed(32'sh0); // @[Top2.scala 395:58]
  assign io_instruction = if_id_io_rdData; // @[Top2.scala 50:31]
  assign io_reg_out = _T_173 ? $signed(mem_wb_io_data_mem_out) : $signed(32'sh0); // @[Top2.scala 32:27 Top2.scala 394:35]
  assign io_branch_stall = _T_75 ? 1'h0 : _GEN_59; // @[Top2.scala 40:32 Top2.scala 202:64]
  assign control_io_opcode = if_id_io_rdData[6:0]; // @[Top2.scala 53:34]
  assign register_clock = clock;
  assign register_io_regwrite = mem_wb_io_Regwr_out; // @[Top2.scala 69:37]
  assign register_io_rd_sel = mem_wb_io_Rd_sel_out; // @[Top2.scala 68:35]
  assign register_io_rs1_sel = if_id_io_rdData[19:15]; // @[Top2.scala 66:36]
  assign register_io_rs2_sel = if_id_io_rdData[24:20]; // @[Top2.scala 67:36]
  assign register_io_WriteData = _T_173 ? $signed(mem_wb_io_data_mem_out) : $signed(_GEN_97); // @[Top2.scala 391:39 Top2.scala 393:46 Top2.scala 396:46]
  assign alu_io_A = _T_141 ? $signed(_T_142) : $signed(_GEN_82); // @[Top2.scala 38:25 Top2.scala 318:34 Top2.scala 320:33 Top2.scala 323:42 Top2.scala 325:42 Top2.scala 327:42]
  assign alu_io_B = _T_155 ? $signed(id_ex_io_Immediate_out) : $signed(_GEN_93); // @[Top2.scala 39:25 Top2.scala 335:34 Top2.scala 347:42 Top2.scala 350:42 Top2.scala 353:42]
  assign alu_io_Aluop = alucontrol_io_control; // @[Top2.scala 301:29]
  assign alucontrol_io_Aluop = id_ex_io_ALUoperation; // @[Top2.scala 298:36]
  assign alucontrol_io_Func7 = id_ex_io_func7_out; // @[Top2.scala 299:36]
  assign alucontrol_io_Func3 = id_ex_io_func3_out; // @[Top2.scala 300:36]
  assign immediate_io_Instruction = if_id_io_rdData; // @[Top2.scala 54:42]
  assign immediate_io_PC = if_id_io_pc_out; // @[Top2.scala 55:32]
  assign PC_clock = clock;
  assign PC_reset = reset;
  assign PC_io_input = _T_75 ? hazardDetection_io_pc_out : _GEN_55; // @[Top2.scala 36:28 Top2.scala 192:37 Top2.scala 196:53 Top2.scala 203:61 Top2.scala 208:52 Top2.scala 215:45 Top2.scala 220:46 Top2.scala 226:52 Top2.scala 228:52]
  assign instmem_clock = clock;
  assign instmem_io_wrAddr = {{22'd0}, _T_20}; // @[Top2.scala 44:34]
  assign DataMemory_clock = clock;
  assign DataMemory_io_wrAddr = ex_mem_io_Alu_out2[9:2]; // @[Top2.scala 380:37]
  assign DataMemory_io_wrData = ex_mem_io_Rs2_out; // @[Top2.scala 381:37]
  assign DataMemory_io_MemRead = ex_mem_io_Memrd_out; // @[Top2.scala 382:38]
  assign DataMemory_io_MemWrite = ex_mem_io_Memwr_out; // @[Top2.scala 383:39]
  assign mem_wb_clock = clock;
  assign mem_wb_reset = reset;
  assign mem_wb_io_Regwr = ex_mem_io_Regwr_out; // @[Top2.scala 63:32]
  assign mem_wb_io_MemtoReg = ex_mem_io_MemtoReg_out; // @[Top2.scala 388:35]
  assign mem_wb_io_Rd_sel = ex_mem_io_Rd_sel_out; // @[Top2.scala 62:33]
  assign mem_wb_io_data_mem_in = DataMemory_io_Data; // @[Top2.scala 386:38]
  assign mem_wb_io_Aluout = ex_mem_io_Alu_out2; // @[Top2.scala 387:33]
  assign ex_mem_clock = clock;
  assign ex_mem_reset = reset;
  assign ex_mem_io_Memwr = id_ex_io_MemWrite; // @[Top2.scala 292:32]
  assign ex_mem_io_Memrd = id_ex_io_MemRead; // @[Top2.scala 293:32]
  assign ex_mem_io_Regwr = id_ex_io_RegWrite; // @[Top2.scala 60:32]
  assign ex_mem_io_MemtoReg = id_ex_io_MemtoReg; // @[Top2.scala 294:35]
  assign ex_mem_io_Rs2 = _T_155 ? $signed(_GEN_86) : $signed(_GEN_94); // @[Top2.scala 295:30 Top2.scala 337:47 Top2.scala 339:46 Top2.scala 341:46 Top2.scala 348:46 Top2.scala 351:46 Top2.scala 354:46]
  assign ex_mem_io_Rd_sel = id_ex_io_rd_sel_out; // @[Top2.scala 61:33]
  assign ex_mem_io_Alu_out = alu_io_x; // @[Top2.scala 358:34]
  assign id_ex_clock = clock;
  assign id_ex_reset = reset;
  assign id_ex_io_PC = if_id_io_pc_out; // @[Top2.scala 261:28]
  assign id_ex_io_PC4 = if_id_io_pc4_out; // @[Top2.scala 262:29]
  assign id_ex_io_Immediate = _T_63 ? $signed(_GEN_29) : $signed(_GEN_30); // @[Top2.scala 35:35 Top2.scala 158:59 Top2.scala 162:43 Top2.scala 164:43]
  assign id_ex_io_rs1_in = _T_133 ? $signed(register_io_WriteData) : $signed(_GEN_1); // @[Top2.scala 263:32 Top2.scala 278:41 Top2.scala 280:41]
  assign id_ex_io_rs2_in = _T_137 ? $signed(register_io_WriteData) : $signed(_GEN_76); // @[Top2.scala 264:32 Top2.scala 285:41 Top2.scala 287:40]
  assign id_ex_io_rd_sel_in = if_id_io_rdData[11:7]; // @[Top2.scala 59:35]
  assign id_ex_io_func3_in = if_id_io_rdData[14:12]; // @[Top2.scala 265:34]
  assign id_ex_io_func7_in = if_id_io_rdData[31:25]; // @[Top2.scala 266:34]
  assign id_ex_io_ctMemWr_in = _T_116 ? 1'h0 : control_io_MemoryWrite; // @[Top2.scala 235:45 Top2.scala 245:45]
  assign id_ex_io_ctMemRd_in = _T_116 ? 1'h0 : control_io_MemRead; // @[Top2.scala 236:45 Top2.scala 246:45]
  assign id_ex_io_ctRegWr_in = _T_116 ? 1'h0 : control_io_RegWrite; // @[Top2.scala 58:36 Top2.scala 238:45 Top2.scala 248:45]
  assign id_ex_io_ctMemToReg_in = _T_116 ? 1'h0 : control_io_MemtoReg; // @[Top2.scala 239:48 Top2.scala 249:48]
  assign id_ex_io_ctAluOp_in = _T_116 ? 3'h0 : control_io_ALUoperation; // @[Top2.scala 240:45 Top2.scala 250:45]
  assign id_ex_io_ctOpA_sel_in = _T_116 ? 2'h0 : control_io_operand_A_sel; // @[Top2.scala 241:47 Top2.scala 251:47]
  assign id_ex_io_ctOpB_sel_in = _T_116 ? 1'h0 : control_io_operand_B_sel; // @[Top2.scala 242:47 Top2.scala 252:47]
  assign id_ex_io_rs1_sel_in = if_id_io_rdData[19:15]; // @[Top2.scala 267:36]
  assign id_ex_io_rs2_sel_in = if_id_io_rdData[24:20]; // @[Top2.scala 268:36]
  assign if_id_clock = clock;
  assign if_id_reset = reset;
  assign if_id_io_pc_in = _T_75 ? _GEN_33 : _GEN_56; // @[Top2.scala 47:31 Top2.scala 184:38 Top2.scala 197:56 Top2.scala 204:64 Top2.scala 216:48 Top2.scala 221:49]
  assign if_id_io_pc4_in = _T_75 ? PC_io_pc4 : _GEN_57; // @[Top2.scala 48:32 Top2.scala 198:57 Top2.scala 205:65 Top2.scala 217:49 Top2.scala 222:50]
  assign if_id_io_data_in = _T_75 ? _GEN_32 : _GEN_58; // @[Top2.scala 49:33 Top2.scala 183:40 Top2.scala 186:40 Top2.scala 199:58 Top2.scala 206:66 Top2.scala 218:50 Top2.scala 223:51]
  assign JALR_io_A = _T_29 ? $signed(register_io_rs1) : $signed(_GEN_19); // @[Top2.scala 37:26 Top2.scala 93:35 Top2.scala 96:35 Top2.scala 99:35 Top2.scala 102:35 Top2.scala 105:35 Top2.scala 108:35 Top2.scala 110:35 Top2.scala 113:35 Top2.scala 116:35 Top2.scala 119:35 Top2.scala 122:35 Top2.scala 126:35]
  assign JALR_io_B = immediate_io_I_Immediate; // @[Top2.scala 147:27]
  assign forward_io_rs1_sel_id = id_ex_io_rs1_sel_out; // @[Top2.scala 303:38]
  assign forward_io_rs2_sel_id = id_ex_io_rs2_sel_out; // @[Top2.scala 304:38]
  assign forward_io_ex_mem_rd = ex_mem_io_Rd_sel_out; // @[Top2.scala 305:37]
  assign forward_io_mem_wb_rd = mem_wb_io_Rd_sel_out; // @[Top2.scala 306:37]
  assign forward_io_ex_mem_regwrite = ex_mem_io_Regwr_out; // @[Top2.scala 307:43]
  assign forward_io_mem_wb_regwrite = mem_wb_io_Regwr_out; // @[Top2.scala 308:43]
  assign hazardDetection_io_if_id_inst = if_id_io_rdData; // @[Top2.scala 168:47]
  assign hazardDetection_io_if_id_memread = control_io_MemRead; // @[Top2.scala 169:50]
  assign hazardDetection_io_id_ex_memread = id_ex_io_MemRead; // @[Top2.scala 170:50]
  assign hazardDetection_io_id_ex_rd_sel = id_ex_io_rd_sel_out; // @[Top2.scala 171:49]
  assign hazardDetection_io_if_id_pc_in = if_id_io_pc4_out; // @[Top2.scala 172:48]
  assign hazardDetection_io_current_pc_in = if_id_io_pc_out; // @[Top2.scala 173:50]
  assign hazardDetection_io_rs1_sel = if_id_io_rdData[19:15]; // @[Top2.scala 174:43]
  assign hazardDetection_io_rs2_sel = if_id_io_rdData[24:20]; // @[Top2.scala 175:43]
  assign hazardDetection_io_control_branch = control_io_Branch2; // @[Top2.scala 176:50]
  assign branchlogic_io_rs1_in = _T_29 ? $signed(register_io_rs1) : $signed(_GEN_18); // @[Top2.scala 92:47 Top2.scala 95:47 Top2.scala 98:47 Top2.scala 101:47 Top2.scala 104:47 Top2.scala 107:47 Top2.scala 111:47 Top2.scala 114:47 Top2.scala 117:47 Top2.scala 120:47 Top2.scala 123:47 Top2.scala 125:47]
  assign branchlogic_io_rs2_in = _T_51 ? $signed(register_io_rs2) : $signed(_GEN_26); // @[Top2.scala 132:47 Top2.scala 134:47 Top2.scala 136:47 Top2.scala 138:47 Top2.scala 140:47 Top2.scala 142:47 Top2.scala 144:47]
  assign branchlogic_io_func3_in = if_id_io_rdData[14:12]; // @[Top2.scala 85:41]
  assign branchlogic_io_branch = control_io_Branch2; // @[Top2.scala 86:38]
  assign branchforward_io_id_ex_rd_sel = id_ex_io_rd_sel_out; // @[Top2.scala 73:47]
  assign branchforward_io_id_ex_memread = id_ex_io_MemRead; // @[Top2.scala 74:48]
  assign branchforward_io_id_ex_regwrite = id_ex_io_RegWrite; // @[Top2.scala 75:48]
  assign branchforward_io_ex_mem_regwrite = ex_mem_io_Regwr_out; // @[Top2.scala 78:49]
  assign branchforward_io_ex_mem_rd_sel = ex_mem_io_Rd_sel_out; // @[Top2.scala 76:48]
  assign branchforward_io_ex_mem_memread = ex_mem_io_Memrd; // @[Top2.scala 79:49]
  assign branchforward_io_mem_wb_rd_sel = mem_wb_io_Rd_sel_out; // @[Top2.scala 77:48]
  assign branchforward_io_mem_wb_regwrite = mem_wb_io_Regwr_out; // @[Top2.scala 81:49]
  assign branchforward_io_rs1_sel = if_id_io_rdData[19:15]; // @[Top2.scala 82:42]
  assign branchforward_io_rs2_sel = if_id_io_rdData[24:20]; // @[Top2.scala 83:42]
  assign branchforward_io_ctrl_branch = control_io_Branch2; // @[Top2.scala 84:46]
  assign structdetect_io_rs1_sel = if_id_io_rdData[19:15]; // @[Top2.scala 272:41]
  assign structdetect_io_rs2_sel = if_id_io_rdData[24:20]; // @[Top2.scala 273:41]
  assign structdetect_io_mem_wb_regwrite = mem_wb_io_Regwr_out; // @[Top2.scala 275:49]
  assign structdetect_io_mem_wb_rd_sel = mem_wb_io_Rd_sel_out; // @[Top2.scala 274:47]
endmodule
