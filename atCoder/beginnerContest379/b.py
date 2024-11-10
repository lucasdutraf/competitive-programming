n, k = map(int, input().strip().split())

teeth = input()

h, s = 0, 0

for elem in teeth:
    if elem == "O":
        h += 1

        if h == k:
            s += 1
            h = 0
    else:
        h = 0


print(s)
