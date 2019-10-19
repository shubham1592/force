j=int(input())
jj=int(input())
k=[]
for x in range(2,j):
    if j%x==0:
        k.append(x)
kk=[]
for y in range(2,jj):
    if jj%y==0:
        kk.append(y)
c=0
for z in k:
    c=c+z
cc=0
for zz in kk:
    cc=cc+zz
if c>cc:
    print('j dominanat')
else:
    print('jj dominanat')

         
