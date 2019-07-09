n = int(input())
odd = 0

for i in range(0, n):
    a, b = input().split()
    a = int(a)
    b = int(b)
    c = 0
    odd = 0
    while c < b:
        if a % 2 != 0:
            odd += a
            c += 1
        a += 1
    print(odd)
