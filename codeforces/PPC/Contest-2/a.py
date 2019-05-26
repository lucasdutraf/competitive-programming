def main():
    n_chars = int(input())
    chars = input()
    n_s = int(input())
    ans = []
    for i in range(n_s):
        flag = 0
        a = input()
        for char in chars:
            if char in a or char.capitalize() in a:
                ans.append('Mensagem #{}: Carlos'.format(i+1))
                break
            elif char == chars[-1]:
                flag += 1
        if flag > 0:
            ans.append('Mensagem #{}: Beto ou Carlos'.format(i+1))
    for x in ans:
        print(x)

main()
