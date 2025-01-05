n = int(input().strip())

amount_of_water = 0

track = list()

for times in range(n):
    t, v = map(int, input().split())

    if amount_of_water <= 0:
        amount_of_water += v
        track.append(t)
    else:
        time_elapsed = t - track[-1]
        current_amount = amount_of_water - time_elapsed

        if current_amount <= 0:
            current_amount = 0

        amount_of_water = v + current_amount
        track.append(t)

print(amount_of_water)
