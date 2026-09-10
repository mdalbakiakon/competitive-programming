k, n, w = map(int, input().strip().split(" "))

moneyNeed = 0

for i in range(1, w+1):
    moneyNeed += i*k

if(moneyNeed - n) <= 0:
    print(0)
else:
    print(moneyNeed - n)