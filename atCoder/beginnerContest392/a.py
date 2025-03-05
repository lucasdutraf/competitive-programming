a, b, c = map(int, input().strip().split())

if a * b == c or b * c == a or c * a == b:
    print("Yes")
else:
    print("No")
