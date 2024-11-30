n = int(input().strip())
stones = input().strip()

stones_removed = 0

for index in range(n):
    if index > 0 and stones[index] == stones[index - 1]:
        stones_removed += 1

print(stones_removed)
