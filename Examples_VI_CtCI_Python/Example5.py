def unordPairs2arr(arrayA, arrayB):
    i = 0
    while (i < len(arrayA)):
        j = 0
        while (j < len(arrayB)):
            k = 0
            while (k < 100000):
                print(str(arrayA[i]) + "," + str(arrayB[j]))
                k += 1
            j += 1
        i += 1

arrayA = [1, 2, 3, 4, 5]
arrayB = [1, 2, 3, 4, 5]
unordPairs2arr(arrayA, arrayB)