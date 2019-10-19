s=input()
a='qwertyuiopasdfghjklzxcvbnm'
b=[]
tr=[]
for li in s:
    tr.append(li)
for k in a:
    for l in tr:
        if k==l:
            b.append(k)
print(b)
