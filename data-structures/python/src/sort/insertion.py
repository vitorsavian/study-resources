def insertionSort(array):
    for index in range(1, len(array)):
        value = array[index]
        previousValue = index - 1
        while previousValue >= 0 and array[previousValue] > value:
            array[previousValue + 1] = array[previousValue]
            previousValue = previousValue - 1
        array[previousValue + 1] = value
    return


arr = [5, 3, 11, 2]
insertionSort(arr)

print(arr)
