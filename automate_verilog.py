import re
a=open("/home/monis/Desktop/Burq/Buraq_Core_SV32I_5SP/check2.txt","r")
b=[]
for x in a:
    z=re.search('^b.*P$',x)
    if z:
        dec=list(x[1:33])
        value=0
        for i in range(len(dec)):
            digit=dec.pop()
            if digit == '1':
                value=value+pow(2,i)
        b.append(value)
a.close()
right=[]
temp=[]
temp2=""
c1=open("output.txt","r")
for i in c1.read():
    if i!=' ':
        if int(i) in range(0,10):
            temp.append(i)
    elif i==' ':
        for j in range(len(temp)):
            if temp==[]:
                break
            elif len(temp)==1:
                temp2=temp[j]
            elif len(temp)>1:
                temp2=temp[j]+temp[j+1]
            right.append(temp2)
            temp=[]
            temp2=""
count=len(right)
count2=0
for i in b:
    if right!=[]:
        for j in right:
            if int(j)==int(i):
                right.pop(0)
                
    elif right==[]:
        print(right,"No values left to check")
        print("The Regression Test Has Been Passed With Flying Colours")
        break
if right!=[]:
    print(b)
    print(right,"These are the values that were not present on the Core")
    print("The Core has some problem That indicates Some issue with checking")