# alph = 'abcdefghijklmnopqrstuvwxyz'
# alph = set(alph)

text = input().lower().replace(" ", "")
text = set(text)

if(len(text) == 26):
    print('panagram\n')
else:
    print('not panagram\n')

