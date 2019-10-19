s=input()
ss=int(input())
n=[]
m=len(s)
for i in range(0,m):
    for j in range(i+1,m+1):
        k=s[i:j]
        n.append(k)
print(n)
b=['a','e','i','o','u']
bb=[]
for jj in n:
    v=0
    for jjj in jj:
        for a in b:
            if jjj==a:
                v+=1
    bb.append(v)
print(bb)
zz=0
for cc in bb:
    if cc==ss:
        zz=zz+cc
print(zz)
    
        
        
    
