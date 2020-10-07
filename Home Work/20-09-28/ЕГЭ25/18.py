from array import *
from math import *

for i in range(143146, 143215):
    a = [1, 0, 0, 0, 0, i]
    n = 1
    for k in range(2, int(sqrt(i))):
        if i % k == 0:
            a[n] = k
            n += 1
        if n > 3:
            break
    if n == 3 and int(sqrt(i)) * int(sqrt(i)) != i:
        print(i)
        a[3] = int(i / a[2])
        a[4] = int(i / a[1])
        for k in range(0, 6):
            print(a[k])