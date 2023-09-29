def RevText(filename):
    f=open(filename,'r')
    s1=f.read()
    L=s1.split()
    print(L)
    s2=''
    for i in L:
        if i[0]=='I':
            i=i[::-1]
            s2+=i+" "
        else:
            s2+=i+" "
    print(s2)


def main():
    filename=input("Enter filename you want to read with 'txt' extension:")
    RevText(filename)
if __name__=="__main__":
    main()

        
