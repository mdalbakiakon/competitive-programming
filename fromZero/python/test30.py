n = int(input().strip())
text = list(input().strip())

count = 0

for i in range(len(text)-1):
    if text[i] == text[i+1]:
        count += 1

print(count)