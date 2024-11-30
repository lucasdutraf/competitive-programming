n, a, b = map(int, input().split())
c = input().split()

c_size = len(c)

res = a + b

for index in range(c_size):
    if int(c[index]) == res:
        print(index + 1)

        break
