import re
import os
#For Chisel-Based Core
file=open("/home/monis/Desktop/Burq/test.c", "r")
b=file.read()
file.close()
c=re.findall('printf.*;',b)
replace=re.sub(r'printf.*;','',b)
file2=open("/home/monis/Desktop/Burq/test.c", "w")
file2.write(replace)
file2.close()

#For System-Verilog Based Core

file3=open("/home/monis/Desktop/Burq/Buraq_Core_SV32I_5SP/test.c", "r")
b1=file3.read()
file3.close()
c1=re.findall('printf.*;',b1)
replace1=re.sub(r'printf.*;','',b1)
file23=open("/home/monis/Desktop/Burq/Buraq_Core_SV32I_5SP/test.c", "w")
file23.write(replace1)
file23.close()
