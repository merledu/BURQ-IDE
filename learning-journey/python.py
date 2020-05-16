import re
myfile = open("/home/monis/learning-journey/test.txt", "rt+") # open test.txt for reading text
contents = myfile.read()
searchObj = re.search( r'<main>:.*?ret', contents,re.I|re.M|re.X|re.U|re.S)
myfile.close()
if searchObj:
    
    hello=searchObj.group()
    #print(hello)
else:
    print ("Nothing found!!")
text_file = open("/home/monis/learning-journey/machine.txt", "w+")
n = text_file.write(hello)
text_file.close()

myfile = open("/home/monis/learning-journey/machine.txt", "rt+") # open test.txt for reading text
contents = myfile.read()
contents = re.sub("<.*?>", "*", contents)
patterns= [r'\w\w\w\w\w\w\w\w']

    
for p in patterns:
    match= re.findall(p, contents)
    #print(match)
    str1 = " " 
    
    # return string   
    a=str1.join(match)
    a=re.sub(" ", "\n", a)     
text_file = open("/home/monis/learning-journey/machinecode.txt", "w+")
n = text_file.write(a)
text_file.close()
