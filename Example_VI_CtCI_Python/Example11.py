def factorial(n):
    factorial = 1
    i = 1
    while (i <= n):
        factorial *= i
        i += 1
    print(factorial)
    return factorial

n = 5
factorial(n)
