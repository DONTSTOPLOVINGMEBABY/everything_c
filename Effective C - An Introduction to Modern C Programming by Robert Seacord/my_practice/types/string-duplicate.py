string1 = "An abnormally long string" 
string2 = [None] * len(string1)  

ctr = 0 
ctr2 = len(string1) - 1  

while (ctr2 >= 0) :
    string2[ctr] = string1[ctr2] 
    ctr2 -= 1
    ctr += 1 

print(string1) 
print(string2)
     

