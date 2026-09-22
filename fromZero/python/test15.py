t = int(input().strip())

allList = []

for _ in range(t):
    n = int(input().strip())
    
    genString = ""
    
    if 3 <= n < 28:
        genString = "aa"
        rest = n - 2
        genString += chr(rest + 96)
    
    if 28 <= n <= 78:
        z_need = n // 26
        genString = 'z' * z_need
        rest = n - z_need * 26   
        
        if z_need == 1:
            genString = "a"
            genString += chr(rest + 96)
        
        if z_need == 2:
            genString += chr(rest + 96)
    
    genString = "".join(sorted(genString))   
    allList.append(genString)

for s in allList:     
    print(s)