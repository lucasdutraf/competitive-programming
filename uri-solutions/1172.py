res = []
for i in range(0, 10):
    x = int(input())
    if x <= 0:
        res.append(1)
    else:
        res.append(x)

for i in range(0, 10):
    print("X[{}] = {}".format(i, res[i]))
