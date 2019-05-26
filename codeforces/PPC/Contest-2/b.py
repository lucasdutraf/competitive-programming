def main():
    a = list(map(int,input().split()))
    m,n = a
    evento = list(map(int,input().split()))
    soma = 0
    min = 0

    for i in range(n):
        soma += evento[i]
        if soma < min:
            min = soma
    min = abs(min)
    if min > m:
        print('-1')
    else:
        print(min)

main()
