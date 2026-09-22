year = int(input().strip())

while True:
    year += 1
    setYear = set(str(year))
    if(len(setYear) == 4):
        break

print(year)    