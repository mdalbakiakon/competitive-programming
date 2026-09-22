n = int(input().strip())

for _ in range(n):
    
    text = input().strip()
    x = len(text)//2
    
    if len(set(text[0:x])) > 1:
        print("YES\n")
    else:
        print("NO\n")