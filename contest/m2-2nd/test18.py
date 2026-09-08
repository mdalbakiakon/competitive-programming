n = int(input().strip())

count = 0

for _ in range(n):
    sureList = input().strip().split(" ")
    if(sureList.count("1") >= 2):
        count += 1

print(count)