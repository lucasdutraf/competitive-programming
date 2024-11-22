n, k = map(int, input().split())
s = input()

ans = list()

start, end = -1, -1

for index in range(n):
    if start < 0 and s[index] == "1":
        start = index
        # print(f"start found, index: {start}")

    if start >= 0 and s[index] == "0" and s[index - 1] == "1":
        end = index - 1
        # print(f"end found, index: {end}")
        l = (end - start) + 1
        ans.append([[start, end], l])
        start, end = -1, -1

if start >= 0 and s[-1]:
    end = n - 1
    l = (end - start) + 1
    ans.append([[start, end], l])

mod_group = k - 1
follow_group = mod_group - 1

mod_group_place = ans[mod_group]
follow_group_place = ans[follow_group]

follow_group_last_index = follow_group_place[0][1]
mod_group_first_index, mod_group_last_index, mod_group_size = (
    mod_group_place[0][0],
    mod_group_place[0][1],
    mod_group_place[1],
)

resultant_string = ""

for index in range(n):
    if index > follow_group_last_index and mod_group_size > 0:
        resultant_string += "1"
        mod_group_size -= 1
    elif index >= mod_group_first_index and index <= mod_group_last_index:
        resultant_string += "0"
    else:
        resultant_string += s[index]


print(resultant_string)
# print(ans)
