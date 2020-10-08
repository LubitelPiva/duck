import math
import array

a = [0, 0, 0, 0, 0, 0]
for i in range(143146, 143215):
    a[0] = 1
    a[5] = i
    n = 0
    q = 1
    for k in range(2, math.sqrt(i)):
        if i % k == 0:
            a[q] = k
            q += 1
        if q > 3:
            break
    if q == 3:
        print(i)
        a[3] = i / a[2]
        a[4] = i / a[1]
        for m in range(0, 6):
            print(a[m])
