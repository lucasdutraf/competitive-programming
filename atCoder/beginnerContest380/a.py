from collections import Counter

n = input()

n_count = Counter(n)

ones = n_count.get("1")
two = n_count.get("2")
three = n_count.get("3")

if ones == 1 and two == 2 and three == 3:
    print("Yes")
else:
    print("No")
