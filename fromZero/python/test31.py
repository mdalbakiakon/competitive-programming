number = set(input().strip())
luckySet = set('47')

for n in number:
    if n not in luckySet:
        print("NO")
        exit()

print("YES")
