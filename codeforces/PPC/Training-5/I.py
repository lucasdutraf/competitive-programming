a = input().strip()
b = a.replace("WUB", " ").strip().split(" ")
c = []
for elem in b:
    if elem != "":
        c.append(elem)
print(' '.join(map(str, c)))
