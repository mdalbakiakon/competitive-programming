text = input().strip()

upCount = 0
lowCount = 0

for w in text:
    if w.isupper():
        upCount += 1
    else:
        lowCount += 1

if upCount > lowCount:
    print(text.upper())
else:
    print(text.lower())        