import re
file = open("/home/monis/Desktop/Burq/meralog.txt", "r")
assembly = file.read()
file.close()
x = re.findall("    [0-9] |   [1-9999][0-9999] ",assembly)
d=[]
for i in x:
    if x!=[]:
        if i!="|":
            d.append(i)
            print(d[-1])
    else:
        print("No errors")

error_line=int(d[-1])-1

