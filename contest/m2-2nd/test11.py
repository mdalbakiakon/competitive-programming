text = input().strip().lower()

vowels = set('aeiou')

filtered = ""

for s in text:
    if s in vowels:
        continue
    else:
        filtered += f".{s}"

print(filtered + "\n")
