import re
import os
file=open("/home/monis/learning-journey/test.c", "r")
b=file.read()
file.close()
c=re.findall('printf.*;',b)
replace=re.sub(r'printf.*;','',b)
file2=open("/home/monis/learning-journey/test.c", "w")
file2.write(replace)
file2.close()
