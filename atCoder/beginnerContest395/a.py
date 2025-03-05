n = int(input().strip())
nums = list(map(int, input().strip().split()))

max_num = 0
is_strictly_increasing = True

for elem in nums:
    if elem > max_num:
        max_num = elem
    else:
        is_strictly_increasing = False
        break

if is_strictly_increasing:
    print("Yes")
else:
    print("No")
