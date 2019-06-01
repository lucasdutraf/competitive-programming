a = input().strip()
yes = 0
if "1111111" in a:
    yes += 1
else:
    yes += 0
if "0000000" in a:
    yes += 1
else:
    yes += 0
if yes > 0:
    print("YES")
else:
    print("NO")
