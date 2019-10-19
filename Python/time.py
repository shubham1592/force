t=input()
s=t.split(',')
s1=[]
i=int(s[0])
i1=int(s[1])
i2=int(s[2])
if s[3]=='am':
    if i2>59:
        i1+=1
    if i1>59:
        i+=1
    if i==12:
        i=00
    s1[0]=i
    s1[1]=i1
    s1[2]=i2
if s[3]=='pm':
    i=i+12
    if i2>59:
        i1+=1
    if i1>59:
        i+=1
    if i==12:
        i=00
    s1[0]=i
    s1[1]=i1
    s1[2]=i2
print('Time in 24 hr format:',s1)
    
    
