s = input().split("^")
l = s[0]
r = s[1]

l = l[::-1]
l_v = 0
r_v = 0

for index in range(0, len(l)):
    if l[index] != "=":
        l_v += int(l[index]) * (index + 1)

for index in range(0, len(r)):
    if r[index] != "=":
        r_v += int(r[index]) * (index + 1)


if l_v == r_v:
    print("balance")
elif l_v > r_v:
    print("left")
else:
    print("right")
    