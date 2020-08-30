import re
a=open("/home/monis/learning-journey/5-stage-Pipelined-CPU/RV32i/test_run_dir/examples/Top2/check.txt","r")
b=[]
for x in a:
    z=re.search('^b.*B!$',x)
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
                print(right)
    elif right==[]:
        print("The Regression Test Has Been Passed With Flying Colours")
        break
