import re
a=open("code_check","r")
b=[]
for x in a:
    z=re.search('^b.*T$',x)
    if z:
        dec=list(x[1:33])
        value=0
        for i in range(len(dec)):
            digit=dec.pop()
            if digit == '1':
                value=value+pow(2,i)
        b.append(value)
print(b)
a.close()
