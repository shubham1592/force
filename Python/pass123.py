import re
s=str(input())
k=len(s)
if k>=8:
    if re.match('[a-z]','s[0]') or re.match('[A-Z]','s[0]'):
        if re.search('[a-z][A-Z]',s)and re.search('[0-9]',s):
            print('valid')
        else:
            print('invalid')
    else:
        print('invalid')
else:
    print('invalid')
    
