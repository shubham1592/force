import re
k=['a','e','i','o','u']
n=str(input())
c=0
for i in n:
    for z in range(0,5):
        j=k[z]
        if i==j:
            c+=1
print(c)
            
    
            
    
