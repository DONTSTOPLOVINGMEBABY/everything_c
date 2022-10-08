master = -12


def square(number):
    print("This is a pure function") 
    new_num = number * number 
    return new_num 



def notpure(number):
    global master 
    master += 2
    if master > number:
        return master * master  
    else:
        return number * number 



func_call_number = 0 
for i in range(20):
    print("pure: {}, notpure: {}, both called with: {}, master: {}".format(square(func_call_number), notpure(func_call_number), i, master))
    func_call_number += 1
