from collections import Counter

testCase = int(input())

for _ in range(testCase):

    howLong = int(input())
    text = input()

    count = Counter(text)
    if count["A"] > count["B"]:
        print("A")
    else:
        print("B")
