n = int(input('enter a number'))
for i in range(n,1,-1):
    for j in range(1,i):
        print(" ",end="")
    for k in range(1,n,1):
        print("*",end="")
    print( )

