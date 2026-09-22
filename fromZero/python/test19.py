x = int(input().strip())
pure = x // 5
extra = x - (5 * pure)

if extra != 0:
    extra = 1
    
print(pure + extra)
