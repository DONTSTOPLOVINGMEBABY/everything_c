import psutil 



tupe = psutil.virtual_memory()

first = tupe[0] - tupe[3]
first /= (1000 * 1000 * 1000) 



print(first)

print(tupe) 
