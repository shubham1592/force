h=int(input('h'))
for x in range(1,h+1):
    for y in range(h,x,-1):
        print(" ",end="")
    for z in range(1,x+1,1):
        print(z,end="")
    for a in range(x,1,-1):
        print((a-1),end='')
    print()
