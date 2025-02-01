seq = list(map(int, input().strip().split()))

swap_op = 0

pointer = 0

while pointer < len(seq):
    if pointer + 1 < len(seq) and seq[pointer] > seq[pointer + 1]:
        swap_op += 1
        temp = seq[pointer]
        seq[pointer] = seq[pointer + 1]
        seq[pointer + 1] = temp
        pointer += 2
    else:
        pointer += 1


if swap_op == 1 and seq == [1, 2, 3, 4, 5]:
    res = "Yes"
else:
    res = "No"

print(res)
