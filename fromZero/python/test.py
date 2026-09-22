n = int(input())
givenList = []

for _ in range(n):
    givenList.append(input())

givenList = givenList[::-1]

for item in givenList:
    print(item)

    