import time
import random

alist = []
for i in range(100000):
        alist.append(random.randint(0,100))

def bubbleSort(alist):
    for passnum in range(len(alist)-1,0,-1):
        for i in range(passnum):
            if alist[i]>alist[i+1]:
                temp = alist[i]
                alist[i] = alist[i+1]
                alist[i+1] = temp



baslama = time.time()
bubbleSort(alist)
bitis = time.time()
print(alist) 
print(bitis-baslama)
