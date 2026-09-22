string1 = input().strip()
string2 = input().strip()

if(string2 == string1[::-1]):
    print("YES")
else:
    print("NO")