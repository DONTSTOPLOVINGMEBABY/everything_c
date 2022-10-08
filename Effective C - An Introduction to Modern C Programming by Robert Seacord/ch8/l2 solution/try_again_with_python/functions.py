from shutil import copy
import os, sys



def deleteFiles():
 
    for i in items_to_delete:
        os.remove(i)
        print("Deleted: ", i, end="")
    
    print("")


def copyFiles():

    for i in items_to_copy:
        copy(i, secondary_directory)
        print("Copied {} to {}".format(i, secondary_directory))



def replace_modified_files():



    for i in items_to_check_status:

        master_path = ""
        secondary_path2 = ""

        master_path = os.path.join(master_path, master_directory, i)
        secondary_path2 = os.path.join(secondary_path2, secondary_directory, i)

        master_file = os.path.getmtime(master_path)
        secondary_file = os.path.getmtime(secondary_path2)

        if (master_file > secondary_file):
            print("Copied {} to {}".format(master_path, secondary_path2))
            copy(master_path, secondary_path2)

        elif (master_file < secondary_file):
            print("Copied {} to {}".format(secondary_path2, master_path))
            copy(secondary_path2, master_path)


def create_list_of_master_files():
    global master_directory_list 
    master_directory_list = os.listdir(master_directory)


def create_list_of_secondary_files():
    global secondary_directory_list 
    secondary_directory_list = os.listdir(secondary_directory)
    

def make_list_of_items_to_delete():
    global items_to_delete
    items_to_delete = []
    for i in secondary_directory_list:
        path=""
        if i not in master_directory_list:
            items_to_delete.append(os.path.join(path, secondary_directory, i))


def make_list_of_items_to_copy():
    global items_to_copy
    items_to_copy = []
    for i in master_directory_list: 
        path =""
        if i not in secondary_directory_list:
            items_to_copy.append(os.path.join(path, master_directory, i))

def make_list_of_items_to_compare_time_modification():
    global items_to_check_status
    items_to_check_status = [] 
    for i in master_directory_list:
        if i in secondary_directory_list:
            items_to_check_status.append(i)



def set_directory_names_global():
    global master_directory
    global secondary_directory
    master_directory = sys.argv[1]
    secondary_directory = sys.argv[2]


def check_for_two_command_arguments():
    if len(sys.argv) != 3:
        print("Requires three command line arguments")
        sys.exit(1)
    

def run():
    check_for_two_command_arguments()
    set_directory_names_global()

def exit_routine():
    print("Deleted Items: ", items_to_delete)
    print("Copied from {} to {}: {}".format(master_directory, secondary_directory, items_to_copy))


run()