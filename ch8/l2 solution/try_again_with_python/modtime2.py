import os
from ntpath import getmtime


x = []
y = {}

for i in os.listdir():
    y[i] = os.path.getmtime(i)

print(y)



    

