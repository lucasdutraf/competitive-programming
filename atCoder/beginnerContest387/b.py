from collections import Counter

n = int(input().strip())

total_i, total_j = 9, 9

numbers = list()

total_sum = 0

for i in range(1, total_i + 1):
    for j in range(1, total_j + 1):
        numbers.append(i * j)
        total_sum += i * j

unique_numbers = Counter(numbers)

if n in unique_numbers:
    times_appeared = unique_numbers[n]
    print(total_sum - (n * times_appeared))
else:
    print(total_sum)
