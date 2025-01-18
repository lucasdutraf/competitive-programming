queries = int(input().strip())

removed_snakes = 0
head_index = 0

snakes = list()

for _ in range(queries): # O(Q)
    query = input().strip()
    query_type = query[0]


    if query_type == "1":
        snake_length = int(query.split()[1])
        s = (snake_length, head_index)
        snakes.append(s) # O(1)
        head_index += snake_length
    elif query_type == "2":
        removed_snake = snakes.pop(0)
        removed_snakes += removed_snake[0]

    elif query_type == "3":
        snake_position = int(query.split()[1]) - 1
        s = snakes[snake_position]

        print(s[1] - removed_snakes)
