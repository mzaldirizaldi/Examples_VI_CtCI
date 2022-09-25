def allFib(n):
    memo = [0] * (n + 1)
    i = 0
    while (i <= n):
        print(str(i) + ": " + str(fib(i, memo)))
        i += 1

def fib(n, memo):
    if (n <= 0):
        return 0
    elif (n == 1):
        return 1
    elif (memo[n] > 0):
        return memo[n]
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo)
    return memo[n]

n = 20
allFib(n)