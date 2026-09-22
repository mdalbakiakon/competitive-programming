from collections import Counter

n, k = map(int, input().strip().split(" "))

scoreRes = list(map(int, input().strip().split(" ")))

lowScore = scoreRes[k-1]

count = Counter(scoreRes)

valid = 0

for key, _ in count.items():
    if key > 0 and key >= lowScore:
        valid += count[key]

print(valid)
