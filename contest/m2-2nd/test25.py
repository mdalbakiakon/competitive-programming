n = int(input().strip())
text = input().strip().lower()
alphs = set('abcdefghijklmnopqrstuvwxyz')

for a in alphs:
    if a not in text:
        print("NO")
        exit()

print("YES")