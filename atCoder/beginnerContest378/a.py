from collections import defaultdict

balls = input().strip().split()

histogram = defaultdict(int)

repeated = 0

for elem in balls:
    histogram[elem] += 1

    if histogram[elem] == 2:
        repeated += 1
        histogram[elem] = 0

print(repeated)
