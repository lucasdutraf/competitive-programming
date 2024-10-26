matrix_size = 8

compromised_lines = set()
compromised_columns = set()

for index in range(matrix_size):
    line = input()
    if "#" in line:
        compromised_lines.add(index)
        for ins in range(len(line)):
            if line[ins] == "#":
                compromised_columns.add(ins)


removed_elem_lines = len(compromised_lines) * 8
removed_elem_columns = len(compromised_columns) * (8 - len(compromised_lines))

removed_elem = removed_elem_columns + removed_elem_lines

if removed_elem > 0:
    print(64 - removed_elem)
else:
    print(64)

