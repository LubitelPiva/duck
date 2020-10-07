f = open('k7b-5.txt', 'r')
text = f.readline()
search_word = "CA"
n = len(text)
i = 0
size = 0
m = 0
while i < n - 2:
    word = text[i] + text[i + 1]
    while i < n - 2 and word == search_word:
        i += 2
        size += 2
        word = text[i] + text[i + 1]
    if (size > m):
        m = size
    size = 0
    i += 1
print(m)