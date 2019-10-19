import re
a='qwertyuiopasdfghjklzxcvbnm'
s=input()
v=input()
b=[]
j=[]
tr=[]
ti=[]
for li in s:
    tr.append(li)
for ki in v:
    ti.append(ki)
for k in a:
    for l in tr:
        if k==l:
            b.append(k)
for q in a:
    for m in ti:
        if q==m:
            v.append(k)
print(b)
print(v)
c=0
for kk in b:
    for jj in v:
        if kk==jj:
            c+=1
print(c)
            
    
        
        
