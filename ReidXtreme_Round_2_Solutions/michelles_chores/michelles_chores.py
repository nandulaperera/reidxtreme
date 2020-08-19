x=input()
x=x.split(" ")
dataArr=[]
flag="YES"
for i in range(0,int(x[1])):
    pair=input()
    pair=pair.split(" ")
    dataArr.append(pair)
seq=input()
seqArr=seq.split(" ")
for i in  range(0,len(seqArr)):
    if flag=="NO":
        break
    for j in dataArr:
        if j[1]==seqArr[i]:
            if j[0] in seqArr[0:i]:
                continue
            else:
                flag="NO"
                break
print(flag)            

    
    
