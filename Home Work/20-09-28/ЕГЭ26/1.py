from array import *

f = open('27-1.txt', 'r')
first = map(int, f.readline().split())
date = array('i', [])
for i in range(int(first[1])):

    date.append(int(f.readline()))

date = sorted(list(map(int, data)))
sum = 0
for i in range(int(first[1])):
    if sum + int(date[i]) <= int(first[0]):
        sum += int(date[i])
        k = i
    else:
        break

q = 0
maxx = int(date[k])
for i in range(int(first[1]) - 1, k - 1):
    if sum - int(date[q]) + int(date[i]) <= int(first[0]):
        sum -= int(date[1]) + int(date[i])
        if maxx < int(date[i]):
            maxx = int(date[i])
        q += 1
    else:
        break
print(k + 1)
print(maxx)
