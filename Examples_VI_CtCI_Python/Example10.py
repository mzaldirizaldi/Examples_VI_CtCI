import math

def prime(n):
    x = 2
    while (x <= math.sqrt(n)):
        if (n % x == 0):
            print(str(n) + " is not a prime number")
            return False
        x += 1
    print(str(n) + " is a prime number")
    return True

n = 4
#n = 5
prime(n)