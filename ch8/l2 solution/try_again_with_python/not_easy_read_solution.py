from shutil import copy
from time import ctime
import sys 
import os 


def delete(items_to_delete):
 
    for i in items_to_delete:
        os.remove(i)
        print("Deleted: ", i, end="")
    
    print("")


def copyFile(secondary_directory, items_to_copy):

    for i in items_to_copy:
        copy(i, secondary_directory)
        print("Copied {} to {}".format(i, secondary_directory))


def check_mod_time(master_directory, secondary_directory, items_to_check_status):

    for i in items_to_check_status:

        master_path = ""
        secondary_path2 = ""

        master_path = os.path.join(master_path, master_directory, i)
        secondary_path2 = os.path.join(secondary_path2, secondary_directory, i)

        master_file = os.path.getmtime(master_path)
        secondary_file = os.path.getmtime(secondary_path2)

        if (master_file >= secondary_file):
            continue

        elif (master_file > secondary_file):
            print("Copied {} to {}".format(master_path, secondary_path2))
            copy(master_path, secondary_path2)

        elif (master_file < secondary_file):
            print("Copied {} to {}".format(secondary_path2, master_path))
            copy(secondary_path2, master_path)



master_directory = sys.argv[1]
secondary_directory = sys.argv[2] 

print(master_directory, secondary_directory) 


master_directory_list = os.listdir(master_directory)
secondary_directory_list = os.listdir(secondary_directory)



items_to_delete = [] 
items_to_copy = [] 
items_to_check_status = [] 



for i in secondary_directory_list:
    path=""
    if i not in master_directory_list:
        items_to_delete.append(os.path.join(path, secondary_directory, i)) 

for i in master_directory_list: 
    path =""
    if i not in secondary_directory_list:
        items_to_copy.append(os.path.join(path, master_directory, i))
    
for i in master_directory_list:
    if i in secondary_directory_list:
        items_to_check_status.append(i)





print(master_directory_list)
print(secondary_directory_list)
print("Delete:", items_to_delete) 
print("Copy:", items_to_copy)
print("Check Status:", items_to_check_status) 

delete(items_to_delete)
copyFile(secondary_directory, items_to_copy)
check_mod_time(master_directory, secondary_directory, items_to_check_status)
print("Master Directory:", os.listdir(master_directory))
print("Secondary Directory:", os.listdir(secondary_directory)) 