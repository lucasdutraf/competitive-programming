def solve(n, progression):
    if n == 2:
        return True

    first, second = progression[0], progression[1]

    ratio = second / first

    for idx, elem in enumerate(progression):
        if idx + 1 < n and elem * ratio != progression[idx + 1]:
            return False

    return True


n = int(input().strip())
progression = list(map(int, input().strip().split()))

s = solve(n, progression)

if s:
    print("Yes")
else:
    print("No")
