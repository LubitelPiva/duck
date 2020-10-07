def a(b):
    if ((b[0] == 'A' or b[0] == 'C' or b[0] == 'E') and (b[1] == 'A' or b[1] == 'D' or b[1] == 'F') and (b[2] == 'B' or b[2] == 'A' or b[2] == 'F') and b[0] != b[1] and b[1] != b[2]):
        return 1
    else:
        return 0

f = open('k7c-2.txt', 'r')
text = f.readline()
size = len(text)
i = 0
n = 0
while i < size - 3:
    word = text[i] + text[i + 1] + text[i + 2]
    n += a(word)
    i += 1
print(n)