from pathlib import Path
path1=Path().absolute()
path1=str(path1)
verilog_run=open(path1+"/Verilog-run.sh","rt")
data=verilog_run.read()
print(data)
