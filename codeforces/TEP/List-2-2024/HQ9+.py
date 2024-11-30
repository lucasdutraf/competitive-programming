def sol(s: str) -> bool:
    commands = ["H", "Q", "9"]

    for command in commands:
        if command in s:
            return True

    return False


s = input()

if sol(s):
    print("YES")
else:
    print("NO")
