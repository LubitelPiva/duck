from array import *
from math import *

for i in range(190201, 190230):
    a = [i, 0, 0, 1]
    n = 1
    for k in range(2, int(sqrt(i))):
        if i % k == 0:
            a[2] = k
            n += 1
        if n > 2:
            break
    if n == 2 and int(sqrt(i)) * int(sqrt(i)) != i:
        print(i)
        a[1] = int(i / a[2])
        for k in range(0, 4):
            print(a[k])