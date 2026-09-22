n = int(input().strip())
mag = []
for _ in range(n):
    mag.append(input().strip())

count = 1
for i in range(1, n):
    if mag[i] != mag[i-1]:
        count += 1

print(count)