s = input().split("|")

res = list()

for index in range(1, len(s) - 1):
    res.append(str(len(s[index])))

output = " ".join(res)

print(output)
