t = int(input().strip())

finalList = []

for _ in range(t):
    find = ""
    for _ in range(8):
        text = input().strip()
        find += text.replace(".","")
    finalList.append(find)

for word in finalList:
    print(f'{word}\n')