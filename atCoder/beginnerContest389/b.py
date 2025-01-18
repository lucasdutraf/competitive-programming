from math import factorial

fac = int(input().strip())


for i in range(1000000000000):
    if factorial(i) == fac:
        print(i)
        break
