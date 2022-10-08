import pandas as pd
import sys 
import psutil 
import copy

beginning_memory = psutil.virtual_memory() 
beginning_memory = (beginning_memory[0] - beginning_memory[3]) / 1000000000 

print("\n\n\nHello! Current memory usage by the system prior to beginning the program: {} gb".format(beginning_memory)) 

big_list = [] 

the_file = open("AMC.csv") 
the_frame = pd.DataFrame(the_file) 


file_in_bytes = sys.getsizeof(the_file) 
file_in_kb = file_in_bytes / 1000 


frame_in_bytes = sys.getsizeof(the_frame)
frame_in_kb = frame_in_bytes / 1000 


print("The date frame is In bytes {}, in kb {}".format(frame_in_bytes, frame_in_kb)) 
print("The file is {} in bytes, in kb {}".format(file_in_bytes, file_in_kb)) 

for i in range(220000):
    cpy = copy.deepcopy(the_frame) 
    big_list.append(cpy) 


print("Finished with deepcopy procedures") 

ending_memory = psutil.virtual_memory() 
ending_memory = (ending_memory[0] - ending_memory[3]) / 1000000000
print("Thanks for taking a look at us! The ending memory was {} gb\n\n\n".format(ending_memory))
