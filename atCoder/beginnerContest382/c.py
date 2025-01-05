n, m = map(int, input().split())
person = list(map(int, input().split()))
gourmet_level = list(map(int, input().split()))

pointer_a, pointer_b = 0, 0
result = list()

while m > 0:  # O(m) * O(n) -> binary search (O(log n)) = O(m log n)
    if gourmet_level[pointer_b] >= person[pointer_a]:
        person_spot = pointer_a + 1
        result.append(person_spot)
        pointer_b += 1
        pointer_a = 0
        m -= 1
    else:
        pointer_a += 1

        if pointer_a >= n:
            result.append(-1)
            pointer_a = 0
            pointer_b += 1
            m -= 1

for elem in result:  # O(m)
    print(elem)
