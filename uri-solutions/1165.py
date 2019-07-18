def Sieve(n):
    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):
        if (prime[p] == True):
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1
    if prime[n]:
        print("{} eh primo".format(n))
    else:
        print("{} nao eh primo".format(n))

if __name__ == '__main__':
    t = int(input())
    for i in range(0, t):
        n = int(input())
        Sieve(n)
