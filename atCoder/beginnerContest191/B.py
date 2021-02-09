n,x = map(int, input().split())
a = list(map(int, input().split()))
res = []
for elem in a:
  if elem != x:
        res.append(elem)
print(*res)
    