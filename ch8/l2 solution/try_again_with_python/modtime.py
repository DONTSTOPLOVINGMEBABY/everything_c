import os
from ntpath import getmtime
from time import ctime



dict1 = {} 
lisp = [] 






for i in os.listdir():
    mod_time = getmtime(i)  
    dict1[i] = mod_time
    print(i, ctime(mod_time))


for i in dict1:
    file = i 
    for j in dict1:
        if dict1[file] > dict1[j]:
            print("{} is newer than {}".format(file, j))
            print(getmtime(file), getmtime(j))





'''
for i in os.listdir():
    p = getmtime(i)
    dict1[i] = p
    lisp.append(p)
    print(i, p, ctime(p))
'''

