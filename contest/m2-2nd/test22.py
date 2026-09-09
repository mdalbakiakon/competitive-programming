test = int(input().strip())

result = []

for _ in range(test):
    a, b, c = map(int, input().strip().split(" "))
    
    if(a==b):
        result.append(c)
    if(a==c):
        result.append(b)
    else:
        result.append(a)


for r in result:
    print(r)