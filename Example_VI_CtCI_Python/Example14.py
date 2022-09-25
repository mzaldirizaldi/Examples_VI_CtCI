def allFib(n):
    i = 0
    while (i <= n):
        print(str(i) + ": " + str(fib(i)))
        i += 1

def fib(n):
    if (n <= 0):
        return 0
    elif (n == 1):
        return 1
    return fib(n - 1) + fib(n - 2)

n = 20
allFib(n)