import sys, os














''' DELETE ITEMS FROM THE LIST

directory = sys.argv[1] 
file_list = os.listdir(directory) 
pathnames = [] 


path =""

for i in file_list:
    pathnames.append(os.path.join(path, directory, i))




print(file_list)
print(pathnames) 
os.remove(pathnames[3])
file_list = os.listdir(directory) 
print(file_list)


'''