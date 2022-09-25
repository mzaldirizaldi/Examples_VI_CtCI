def reverse(array):
    i = 0
    while (i < int(len(array) / 2)):
        other = len(array) - i - 1
        temp = array[i]
        array[i] = array[other]
        array[other] = temp
        i = i+1
        print(str(array[i]) + "," + str(array[other]))

array = [1,2,3,4,5,6,7]
reverse(array)