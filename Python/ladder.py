n=int(input())
a=1
b=n-1
for i in range(1,n+1):
    print(end=' '*b);print('*'*a)
    a+=1
    b-=1
