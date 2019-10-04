ina = input()

fin = ina[0]

if len(ina) == 1:
    print(ina.swapcase())
else:
    frest = ina[1:]
    if fin.isupper() and frest.isupper():
        print(ina.swapcase())
    elif fin.islower() and frest.isupper():
        print(ina.swapcase())
    else:
        print(ina)
