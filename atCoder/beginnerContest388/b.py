from collections import defaultdict

number_of_snakes, length_increaser = map(int, input().strip().split())

snake_data = defaultdict(list)

for _ in range(number_of_snakes):
    thickness, length = map(int, input().strip().split())

    for i in range(1, length_increaser + 1):
        weight = thickness * (length + i)
        snake_data[i].append(weight)

for key in snake_data:
    snake_data[key].sort(reverse=True)
    print(snake_data[key][0])
