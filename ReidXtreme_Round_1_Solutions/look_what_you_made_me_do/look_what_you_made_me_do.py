def check(year,dates):
    monthList=["JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"]
    dates-=500
    if dates<=31:
        month=0
        day=dates
    elif dates<=60:
        month=1
        day=dates-31
    elif dates<=91:
        month=2
        day=dates-60
    elif dates<=121:
        month=3
        day=dates-91
    elif dates<=152:
        month=4
        day=dates-121
    elif dates<=182:
        month=5
        day=dates-152
    elif dates<=213:
        month=6
        day=dates-182
    elif dates<=244:
        month=7
        day=dates-213
    elif dates<=274:
        month=8
        day=dates-244
    elif dates<=305:
        month=9
        day=dates-274
    elif dates<=335:
        month=10
        day=dates-305
    else:
        month=11
        day=dates-335
    return year+monthList[month]+str(day)

N=int(input())
givenBD=input()
flag=1
for i in range(N):
    line=input()
    nic=line.split(" ")[0]
    if(len(nic)==10):
        year="19"+nic[0:2]
        dates=int(nic[2:5])
    else:
        year=nic[0:4]
        dates=int(nic[4:7])
    if dates>=500:
        targetBD=check(year,dates)
        if givenBD==targetBD:
            print(line)
            flag=0
    else:
        continue
if(flag):
    print("SORRY!HER FB IS LYING")

