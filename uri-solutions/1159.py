while True:
    times = 0
    total = 0
    x = int(input())
    if x == 0:
        break
    while times < 5:
        if x % 2 == 0:
            total += x
            times += 1
        x += 1
    print(total)
