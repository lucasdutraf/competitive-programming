n = int(input().strip())
a = list(map(int, input().strip().split()))

window = dict()
smallest_window = float("inf")

for index, elem in enumerate(a):
    if elem not in window:
        window[elem] = index
    else:
        window_size = (index - window[elem]) + 1
        window[elem] = index
        smallest_window = min(smallest_window, window_size)


if smallest_window == float("inf"):
    print("-1")
else:
    print(smallest_window)
