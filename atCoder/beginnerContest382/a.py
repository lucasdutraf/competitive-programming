from collections import Counter

n, d = map(int, input().split())
s = input()

cookie_counter = Counter(s)

cookies = cookie_counter["@"]

empty_boxes_d_days = cookie_counter["."] + d

print(empty_boxes_d_days)
