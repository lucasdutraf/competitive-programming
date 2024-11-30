from itertools import permutations

while True:
    line = input().strip()

    if line == "#":
        break

    for index, perm in enumerate(sorted(set(permutations(line)))):
        word = "".join(perm)

        if word == line:
            print(f"          {index + 1}")
            break
