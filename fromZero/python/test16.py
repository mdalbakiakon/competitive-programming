n = int(input().strip())

myList = []

for _ in range(n):
    text = input().strip()
    text.replace("10", "", 1)
    myList.append(text)

for item in myList:
    print(item)

