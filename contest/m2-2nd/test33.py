number = input().strip()
finalSet = set(number)

if(len(finalSet) == 2 and "4" in finalSet and "7" in finalSet):
    print("YES")
else:
    print("NO")
