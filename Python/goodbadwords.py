import sys
s=str(input())
j='qwertyuiopasdfghjklzxcvbnm'
for x in range(0,len(s)):
    c=1
    ch=s[x]
    c=s.count(ch)
    if c>1:
        print('bad')
        sys.exit(0)
print('good')
        
        


    
