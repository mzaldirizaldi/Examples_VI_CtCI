def permutation(str, prefix):
    if (len(str) == 0):
        print(prefix)
    else:
        i = 0
        while (i < len(str)):
            rem = str[0:i] + str[i + 1:]
            permutation(rem, prefix + str[i])
            i += 1

str = "Lucy"
permutation(str, "")