print("-----------Function Point Analysis-----------")

table = ["user input","user output","user inquiries","No.of files","external factor"]

simple = [3,4,3,7,5]

avg = [4,5,4,10,7]

comp = [6,7,6,15,10]

ufc=0      #initialize kelai

inputlist = []

for i in range(5):

     print(table[i],":",end="")

     x=int(input())

     inputlist.append(x)

     

caf=1.07

print("\nWeighting factor:\n1.simple\n2.average\n3.complex")

wf = int (input("select weighting factor:"))

if(wf==1):

    for i in range(5):

        ufc = ufc+(simple[i]*inputlist[i])

elif(wf==2):

    for i in range(5):

        ufc = ufc+(avg[i]*inputlist[i]) 

elif(wf==3):

    for i in range(5):

        ufc = ufc+(comp[i]*inputlist[i])    

print("caf:",caf)

print("ufc:",ufc)

fp=caf*ufc

print("function point:",fp)
