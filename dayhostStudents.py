L=[]
n=int(input("Enter number of students:"))
for i in range(n):
    name=input("Enter name:")
    regno=input("Enter regno:")
    status=input("Enter dayscholar/hosteller:")
    status.lower()
    L.append(name)
    L.append(regno)
    L.append(status)
print(L)
s=""
for i in L:
    s+=i+" "
f=open("Details.txt",'w')
f.write(s)
f.close()
s2=""
s3=""
for i in range(2,len(L),3):
    if L[i]=="hosteller":
        s2+=L[i-2]+" "
        f=open("Hosteller.txt",'w')
        f.write(s2)
        f.close()
    else:
        s3+=L[i-2]+" "
        f=open("Dayscholar.txt",'w')
        f.write(s3)
        f.close()
