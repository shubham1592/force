import re
j=input()
if re.match('\+?[0-9]*[\.][0-9]+$',j)or re.match('\-?[0-9]*[\.][0-9]+$',j):
    print('valid')
else:
    print('invalid')
    

    
