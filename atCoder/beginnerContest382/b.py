n, d = map(int, input().split())
s = list(input())

for index in range(n - 1, -1, -1):
    if d > 0:
        if s[index] == "@":
            s[index] = "."
            d -= 1

print("".join(s))
