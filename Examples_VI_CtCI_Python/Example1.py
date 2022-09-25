def foo(array):
    sum = 0
    product = 1
    i = 0
    while (i < len(array)):
        sum += array[i]
        i += 1
    i = 0
    while (i < len(array)):
        product *= array[i]
        i += 1
    print(str(sum) + ", " + str(product))

array = [1,2,3,4,5]
foo(array)