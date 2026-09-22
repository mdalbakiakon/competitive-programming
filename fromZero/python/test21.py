test = int(input().strip())

result = []

for _ in range(test):
    
    a, b, c = map(int, (input().strip().split(" ")))
    
    summ = a + b
    subb = a - b
    if (summ == c):
        result.append("+")
    else:
        result.append("-")

for s in result:
    print(s)