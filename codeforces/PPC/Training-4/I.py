ins = input().strip()
if ins.isupper():
    print(ins.lower())
elif (not ins[1:] or ins[1:].isupper()) and ins[0].islower():
    print(ins.capitalize())
else:
    print(ins)
