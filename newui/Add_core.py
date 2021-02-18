import re
from pathlib import Path
import os
path1=Path().absolute() 
print(path1)
path1=str(path1)
path=re.sub("/newui","",path1)
print(path)
use=path
use2=path+'/newui'
print(use)
print(use2)

def set_core(text):
    os.chdir(use2)
    F=open("Core.txt","r")
    b=F.readlines()
    for i in b:
        s=i.split(',')
        b=s[-1].replace("\n","")
        s.remove(s[-1])
        s.append(b)
        #For Chisel Core
        if text==s[0] and s[1]=="Chisel":
        # Changing path of Script 3
            Script3=open(use+"/script3.sh","rt")
            data=Script3.read()
            cd=re.search("cd.*/.*",data)
            sbt=re.search("Launcher.*-",data)
            sbt1=sbt[0].replace("Launcher ","")
            sbt1=sbt1.replace(" --backend-","")
            top=re.search("examples.*",s[2])
            top=re.search("/.*/",top[0])
            top=re.search("\D.*",top[0])
            top1=top[0].replace("/","")
            path=re.search("/home.*/test_run_dir",s[2])
            path1=path[0].replace("/test_run_dir","")
            data=data.replace(cd[0],"cd "+path1)
            data=data.replace(sbt1,top1)
            Script3.close()
            Script3=open(use+"/script3.sh","wt")
            Script3.write(data)
            Script3.close()
            print("xxxxxxxxx Path of Script 3 is changed xxxxxxxxxxxxxx")
        # Changing path of Script 8
            Script8=open(use+"/script8.sh","rt")
            data1=Script8.read()
            cd1=re.search("cd.*/.*",data1)
            cp=re.search("cp.*",data1)
            vcd=re.search("/home.*examples/",s[2])
            vcd1=vcd[0]+top1
            cp1=cp[0].replace(sbt1+".vcd",top1+".vcd")
            data1=data1.replace(cd1[0],"cd "+vcd1)
            data1=data1.replace(cp[0],cp1)
            Script8.close()
            Script8=open(use+"/script8.sh","wt")
            Script8.write(data1)
            Script8.close()
            print("xxxxxxxxx Path of Script 8 is changed xxxxxxxxxxxxxx")
        # Changing path for machine code file
            print(s[-1])
            ins=open(s[-1],"rt")
            lightw=open(use2+"/LightW.py","rt")
            data2=lightw.read()
            data3=ins.read()
            instruct=re.search("/home.*txt",data3)
            machine=re.search('def read_MachineCode.*' '\n.*',data2)
            machine=re.search('/home.*txt',machine[0])
            data3=data3.replace(instruct[0],machine[0])
            ins.close()
            ins=open(s[-1],"wt")
            ins.write(data3)
            ins.close()
            print("xxxxxxxxx Path of Intruction Memory is changed xxxxxxxxxxx")
        # Changing path for automation
            auto=open(use+"/automate.py","rt")
            autoread=auto.read()
            autofind=re.search("/home.*txt",autoread)
            autoread=autoread.replace(autofind[0],vcd1+"/check.txt")
            auto.close()
            auto=open(use+"/automate.py","wt")
            auto.write(autoread)
            auto.close()
            print("xxxxxxxxx Path of Automate.py is changed xxxxxxxxxxx")
            return int(1)
        if text==s[0] and s[1]=="Verilog":
            # Changing in Verilog_run.sh
            verilog=open(use+"/Verilog-run.sh","rt")
            veriread=verilog.read()
            veri=re.search("cd.*/.*",veriread)
            vericore=s[2].split("/")
            vericore.remove(vericore[0])
            vericore1=vericore[:-1]
            vericore2=""
            for i in vericore1:
                vericore2=vericore2+"/"+i
            veriread=veriread.replace(veri[0],"cd "+vericore2)
            verilog.close()
            #verilog=open(use+"/Verilog-run.sh","wt")
            #verilog.write(veriread)
            #verilog.close()
            print("xxxxxxxxx Path of Verilog-run.sh is changed xxxxxxxxxxx")
            #Changing in script9.sh
            script9=open(use+"/script9.sh","rt")
            script9read=script9.read()
            script9s=re.search("cd.*/.*",script9read)
            script9s1=re.search("-l.*vcd",script9read)
            script9s2=script9s1[0].replace("-l ","")
            script9read=script9read.replace(script9s[0],"cd "+vericore2)
            script9read=script9read.replace(script9s2,vericore[-1])
            script9.close()
            
            script9=open(use+"/script9.sh","wt")
            script9.write(script9read)
            script9.close()
            print("xxxxxxxxx Path of Script9.sh is changed xxxxxxxxxxx")
            #Changing in automateverilog.py
            automatev=open(use+"/automate_verilog.py","rt")
            autovread=automatev.read()
            autovs=re.search("/home.*txt",autovread)
            autovread=autovread.replace(autovs[0],vericore2+"/check2.txt")
            automatev.close()
            automatev=open(use+"/automate_verilog.py","wt")
            automatev.write(autovread)
            automatev.close()
            print("xxxxxxxxx Path of Automate_Verilog.py is changed xxxxxxxxxxx")
            return int(2)
def default_core(text):
    if text=="Chisel":
        Script_3=open(use+"/script3.sh","rt")
        Script_8=open(use+"/script8.sh","rt")
        auto1=open(use+"/automate.py","rt")
        data=Script_3.read()
        data1=Script_8.read()
        data2=auto1.read()
        cd="cd "+path+"/5-stage-Pipelined-CPU/RV32i"
        sbt="test:runMain datapath.Launcher Top2 --backend-name verilator"
        cd1='cd '+path+'/5-stage-Pipelined-CPU/RV32i/test_run_dir/examples/Top2'
        cp="cp -l Top2.vcd check.txt"
        auto=path+'/5-stage-Pipelined-CPU/RV32i/test_run_dir/examples/Top2/check.txt'
    #Changing the path of Script_3
        cd_3=re.search("cd.*/.*",data)
        sbt_3=re.search("test.*verilator",data)
        data=data.replace(cd_3[0],cd)
        data=data.replace(sbt_3[0],sbt)
        Script_3.close()
        Script_3=open(use+"/script3.sh","wt")
        Script_3.write(data)
        Script_3.close()
    #Changing the path of Script_8
        cd_8=re.search("cd.*/.*",data1)
        cp_8=re.search("cp.*txt",data1)
        print(cp_8)
        data1=data1.replace(cd_8[0],cd1)
        data1=data1.replace(cp_8[0],cp)
        Script_8.close()
        Script_8=open(use+"/script8.sh","wt")
        Script_8.write(data1)
        Script_8.close()
    #Changing the path of automate.py
        autofind=re.search("/home.*txt",data2)
        data2=data2.replace(autofind[0],auto)
        auto1.close()
        auto1=open(use+"/automate.py","wt")
        auto1.write(data2)
        auto1.close()
        print("xxxxxxxxxxxxxx Default Core Chisel is Setup xxxxxxxxxxxxxxxxxxx")
        return int(1)
    elif text=="BuraqSV32i":
        Verilogrun=open(use+"/Verilog-run.sh","rt")
        script9=open(use+"/script9.sh","rt")
        automatev=open(use+"/automate_verilog.py","rt")
        Verilogrunr=Verilogrun.read()
        script9r=script9.read()
        automatevr=automatev.read()
        cd="cd "+use+"/Buraq_Core_SV32I_5SP"
        cp="cp -l RISCV_SSC.vcd check2.txt"
        check2="/home/monis/Desktop/Burq/Buraq_Core_SV32I_5SP/check2.txt"
        #Changing the path of Verilogrun.sh
        Verilogrunrs=re.search("cd.*/.*",Verilogrunr)
        Verilogrunr=Verilogrunr.replace(Verilogrunrs[0],cd)
        Verilogrun.close()
        Verilogrun=open(use+"/Verilog-run.sh","wt")
        Verilogrun.write(Verilogrunr)
        Verilogrun.close()
        #Changing the path of script9.sh
        script9rs=re.search("cd.*/.*",script9r)
        script9rs1=re.search("cp.*",script9r)
        script9r=script9r.replace(script9rs[0],cd)
        script9r=script9r.replace(script9rs1[0],cp)
        script9.close()
        script9=open(use+"/script9.sh","wt")
        script9.write(script9r)
        script9.close()
        #Changing the path of Automateverilog.py
        automatevrs=re.search("/home.*txt",automatevr)
        automatevr=automatevr.replace(automatevrs[0],check2)
        automatev.close()
        automate=open(use+"/automate_verilog.py","wt")
        automate.write(automatevr)
        automate.close()
        print("xxxxxxxxxxxxxx Default Verilog Core is Setup xxxxxxxxxxxxxxxxxxx")
        return int(2)
    	
    	
