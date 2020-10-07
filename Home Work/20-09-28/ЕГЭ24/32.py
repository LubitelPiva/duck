f = open('k7b-6.txt', 'r')
text = f.readline()
search_word = "DAF"
n = len(text)
i = 0
size = 0
m = 0
while i < n - 3:
    word = text[i] + text[i + 1] + text[i + 2]
    while i < n - 3 and word == search_word:
        i += 3
        size += 3
        word = text[i] + text[i + 1] + text[i + 2]
    if (size > m):
        m = size
    size = 0
    i += 1
print(m)