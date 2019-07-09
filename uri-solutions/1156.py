s = 0
i = 1
j = 1

while True:
    if i == 39:
        break
    s += i/j
    i += 2
    j *= 2

print('{:.{prec}f}'.format(s, prec=2))
