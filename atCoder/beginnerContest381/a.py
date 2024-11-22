def sol(n: int, s: str):
    if n % 2 == 0:
        return False
    else:
        if s == "/":
            return True

        first_condition = ((n + 1) / 2) - 1
        second_condition = (n + 1) / 2
        third_condition = ((n + 1) / 2) + 1

        for index in range(n):
            if index <= first_condition - 1:
                if s[index] != "1":
                    return False
            elif index == second_condition - 1:
                if s[index] != "/":
                    return False
            elif index >= third_condition - 1:
                if s[index] != "2":
                    return False

        return True


n = int(input())
s = input()

if sol(n, s):
    print("Yes")
else:
    print("No")
