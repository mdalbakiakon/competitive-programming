n = int(input().strip())

mylist = []

for _ in range(n):
    l = int(input().strip())
    text = input().strip()
    small = min(text)
    textRev = text[::-1]
    index = textRev.find(small)
    realIndex = len(text) - index - 1
    if(realIndex == 0):
        mylist.append(text)
    else:
        newText = text[realIndex] + text[0:realIndex] + text[realIndex+1: ]
        mylist.append(newText)

for w in mylist:
    print(w)
    