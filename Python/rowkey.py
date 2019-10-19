s=str(input())
x='qwertyuiop'
y='asdfghjkl'
z='zxcvbnm'
k=len(s)
c=0
cc=0
ccc=0
for a in s:
    for q in x:
        if q==a:
            c+=1
    for w in y:
        if w==a:
            cc+=1
    for e in z:
        if e==a:
            ccc+=1
if c==k or cc==k or ccc==k:
    print('yes')
else:
    print('no')


    


            
        
            
