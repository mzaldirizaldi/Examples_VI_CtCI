def pairs(array):
    i = 0
    while (i < len(array)):
        j = 0
        while (j < len(array)):
            print(str(array[i]) + ", " + str(array[j]))
            j += 1
        i += 1

array = [1,2,3,4,5]
pairs(array)