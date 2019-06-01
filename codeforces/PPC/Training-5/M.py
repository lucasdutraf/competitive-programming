a = input().strip()
vec = ["A", "O", "Y", "E", "U", "I", "a", "o", "y", "e", "u", "i"]
b = ""
for elem in vec:
    if elem in a:
        a = a.replace(elem, "")
a = a.lower()
o = []
for elem in a:
    o.append('.' + str(elem))

print(''.join(map(str, o)))
