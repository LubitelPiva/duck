def a(b):
    if ((b[0] == 'B' or b[0] == 'C' or b[0] == 'D') and (b[1] == 'B' or b[1] == 'D' or b[1] == 'E') and (b[2] == 'B' or b[2] == 'C' or b[2] == 'E') and b[0] != b[1] and b[1] != b[2]):
        return 1
    else:
        return 0

f = open('k7c-1.txt', 'r')
text = f.readline()
size = len(text)
i = 0
n = 0
while i < size - 3:
    word = text[i] + text[i + 1] + text[i + 2]
    n += a(word)
    i += 1
print(n)