from collections import Counter


def sol(s):
    size_s = len(s)
    if size_s % 2 != 0:
        return False
    else:
        c = Counter(s)

        for elem in c.values():
            if elem != 2:
                return False

        for index in range(size_s):
            if index <= (size_s / 2) - 1:
                formula = ((2 * index) - 1) - 1
                if s[formula] != s[formula + 1]:
                    return False

        return True


s = input()

if sol(s):
    print("Yes")
else:
    print("No")
