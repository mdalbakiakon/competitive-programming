n = int(input().strip())

result = []

def foundSame(tokens):
    return len(set(tokens)) != len(tokens) 
    
def operation(tokens, operationCount):
    tokens = sorted(tokens)
    tokens[2] = tokens[2] - 1
    tokens[0] = tokens[0] + 1
    operationCount += 1
    
    getResult = foundSame(tokens)
    if(getResult):
        result.append(operationCount)
        return
    else:
        operation(tokens, operationCount)
    

for _ in range(n):
    tokens = list(map(int, input().split(" ")))
    
    operationCount = 0
    
    if(foundSame(tokens)):
        result.append(operationCount)
    else:
        operation(tokens, operationCount)

for item in result:
    print(item)
    
    