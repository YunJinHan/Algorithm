r = list(map(int,input().split()))
ex = list(map(int,input().split()))

if(r[2] == ex[2]):
    if(r[1] <= ex[1] ):
        if((r[0] - ex[0]) > 0):
            print((r[0] - ex[0])*15)
        else:
            print(0)
    else:
        print((r[1] - ex[1])*500)
elif(r[2] < ex[2]):
    print(0)
else:
    print(10000)