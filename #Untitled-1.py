#Untitled-1.py
#
# Author: LMXAB3KS
# Date: 07-July-2023

import math

a = 2.5 #increment
list = []
while a <=50:
    list.append(a)
    print(a)    #printing all increments
    a = a + 2.5
print(list) #all the increments saved to list 

print(sum(map(float,list))) #printing all the increments i.e net weight
