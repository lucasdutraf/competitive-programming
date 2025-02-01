n, q = map(int, input().strip().split())

pigeons = dict()
nests = [0] * (n + 1)

more_than_one = 0

for nest in range(1, n + 1):
    pigeons[nest] = nest
    nests[nest] = 1


for _ in range(q):
    query = input().strip()

    if query == "2":
        print(more_than_one)
    else:
        query_type, pigeon_number, target_nest = map(int, query.split(" "))

        pigeon_current_nest = pigeons[pigeon_number]

        if nests[pigeon_current_nest] > 1 and nests[pigeon_current_nest] - 1 <= 1:
            more_than_one -= 1

        nests[pigeon_current_nest] -= 1
        pigeons[pigeon_number] = target_nest
        nests[target_nest] += 1

        if nests[target_nest] == 2:
            more_than_one += 1
