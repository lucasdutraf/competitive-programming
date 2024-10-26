matrix_size, knights = input().strip().split()

matrix_size = int(matrix_size)
knights = int(knights)

knights_placed = set()

for _ in range(knights):
    i, j = input().strip().split()

    i, j = int(i), int(j)

    knights_placed.add((i, j))

    if i + 2 < matrix_size and j + 1 < matrix_size:
        knights_placed.add((i + 2, j + 1))

    if i + 1 < matrix_size and j + 2 < matrix_size:
        knights_placed.add((i + 1, j + 2))

    if i - 1 > 0 and j + 2 < matrix_size:
        knights_placed.add((i - 1, j + 2))

    if i - 2 > 0 and j + 1 < matrix_size:
        knights_placed.add((i - 2, j + 1))

    if i - 2 > 0 and j - 1 > 0:
        knights_placed.add((i - 2, j - 1))

    if i - 1 > 0 and j - 2 > 0:
        knights_placed.add((i - 1, j - 2))

    if i + 1 < matrix_size and j - 2 > 0:
        knights_placed.add((i + 1, j - 2))

    if i + 2 < matrix_size and j - 1 > 0:
        knights_placed.add((i + 2, j - 1))

all_squares = matrix_size * matrix_size

res = all_squares - len(knights_placed)

print(res)

# Placed on square
# (i+2,j+1) -
# Placed on square
# (i+1,j+2) -
# Placed on square
# (i−1,j+2) -
# Placed on square
# (i−2,j+1) -
# Placed on square
# (i−2,j−1) -
# Placed on square
# (i−1,j−2) -
# Placed on square
# (i+1,j−2) -
# Placed on square
# (i+2,j−1) -

