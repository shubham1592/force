F=int(input("Enter  no. of floors"))
H=int(input("Enter Ht."))
D=int(input("Enter Diameter"))
N=int(input("Enter no. of pipes"))
J=[]
for x in range(1,N+1):
    L=[]
    for y in range(0,2):
        n=int(input("d,l"))
        L.append(n)
    J.append(L)
M=[]
for k in range(0,N):
    if J[k][0]==D:
        M.append(J[k][1])
a=0
for b in range(0,len(M)):
    a=a+M[b]
print("Cost is:",a)


    
   
        
        
