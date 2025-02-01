n, target = map(int, input().strip().split())

foods = list()

for _ in range(n):
    vitamin, units, calories = map(int, input().strip().split())
    foods.append((vitamin, units, calories))
