stringList = input().strip().split("+")
stringList.sort()
if len(stringList) <= 1:
    print("".join(stringList))
else:
    final = "+".join(stringList)
    print(final)
