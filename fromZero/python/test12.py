n, k = map(int, input().split())

myList = []

for _ in range(n):
    val = input().strip()
    myList.append(val)

myList = myList[0:k]
myList.sort()

for i in range(k):
    print(myList[i] + "\n")