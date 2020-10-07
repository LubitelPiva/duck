N = int(input())
maxx = []
maxplus = []

for i in range(37):
    maxx.append(0)
    maxplus.append(0)

for i in range(N):
    a = int(input())
    if a % 7 == 0 and maxplus[a % 37] < a:
        maxplus[a % 37] = a
    if a % 7 != 0 and maxx[a % 37] < a:
        maxx[a % 37] = a

maxsum = [0, 0]
for i in range(37):
    for k in range(37):
        if maxsum[0] + maxsum[1] < maxx[i] + maxplus[k] and (maxx[i] + maxplus[k]) % 37 != 0:
            maxsum[0] = maxx[i]
            maxsum[1] = maxplus[k]
print(str(maxsum[0]) + ' ' + str(maxsum[1]))