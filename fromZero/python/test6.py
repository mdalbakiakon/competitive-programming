vowel= set('aeiou')

text1 = input().lower()
text2 = input().lower()
text3 = input().lower()

totalText = [text1, text2, text3]

expectedList = [5,7,5]
foundList = []

count = 0

for alph in text1:
    if alph in vowel:
        count+=1

foundList.append(count)
    
count = 0

for alph in text2:
    if alph in vowel:
        count+=1

foundList.append(count)

count = 0

for alph in text3:
    if alph in vowel:
        count+=1

foundList.append(count)

if(foundList == expectedList):
    print('YES\n')
else:
    print('NO\n')
