def deletion(textList):
    stack = []
    
    for char in textList:
        if stack and stack[-1] == char:
            stack.pop()
        else:
            stack.append(char)
            
    return "".join(stack)


textList = list(input().strip())
reduced = deletion(textList)

if not reduced:
    print("Empty String")
else:
    print(reduced)
