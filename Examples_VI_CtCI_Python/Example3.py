def unordPairs(array) :
    i = 0
    while (i < len(array)) :
        j = i + 1
        while (j < len(array)) :
            print(str(array[i]) + "," + str(array[j]))
            j += 1
        i += 1

array = [1,2,3,4,5,6,7]
unordPairs(array)