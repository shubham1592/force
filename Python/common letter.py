a=str(input())
b=str(input())
c=0
d=0
h=len(a)
g=len(b)
for s in a:
    for k in b:
        if(s==k):
            c=c+1
        else:
            d=d+1
if(h>g):
    d=d//h
if(g>h):
    d=d//g
else:
    d=d//h
print(c,',',d)
