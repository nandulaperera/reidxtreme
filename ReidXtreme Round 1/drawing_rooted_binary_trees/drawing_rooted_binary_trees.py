def printTree(prefix,word,letter,level):
    global i,occur
    split = word.split(letter)
    i+=1
    level+=1
    occur+=[[letter,level]]
    #print(word,letter,split,i,level)
    if(len(word)==1 or i>=len(prefix)):
        return
    if(split[0]!=''):
        printTree(prefix,split[0],prefix[i],level)
    if(len(split)==2 and split[1]!=''):
        printTree(prefix,split[1],prefix[i],level)

while True:
    try:
        infix = input()
        if(infix==""):
            break
        prefix = input()    

        i=0

        occur=[]

        printTree(prefix,infix,prefix[0],0)

        occur = sorted(occur,key=lambda x: x[1])

        levels = occur[len(occur)-1][1]
        temp = 1
        count = 0
        s=[" "]*len(prefix)
        while(temp <= levels):
            if(occur[count][1]!= temp):
                print(*s, sep='')
                s=[" "]*len(prefix)
                temp += 1
            index=infix.find(occur[count][0])
            s[index]=occur[count][0]
            count+=1
            if(count==len(prefix)):
                print(*s, sep='')
                break
    except:
        break
    
