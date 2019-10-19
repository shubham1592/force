a=int(input())
while(a>0):
    n=a%10
    if(a%n==0):
        print(n)
    a=a//10


