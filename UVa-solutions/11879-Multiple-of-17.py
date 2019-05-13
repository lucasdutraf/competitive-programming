import sys
a = []
xs = input()
for x in xs:
    a.append(int(x))
if a % 17 == 0:
    print('1')
else:
    print('0')
