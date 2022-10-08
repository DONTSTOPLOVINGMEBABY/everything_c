from contextvars import copy_context
from shutil import copy, copyfile


file1 = "a_file2.txt"
directory = "a_file.txt"

copy(file1, directory) 


