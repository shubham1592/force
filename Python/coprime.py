import re
n=int(input())
m=int(input())
l=[]
p=[]
for x in (1,n):
    if n%x==0:
        l.append(x)
for y in (1,m):
    if n%x==0:
        p.append(y)
c=0
for j in l:
    for k in p:
        if j==k:
            c+=1
if c==1:
    print('coprime')
else:
    print('non coprime')

        
