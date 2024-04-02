def insertionSort(array):
    for index in range(1, len(array)):
        value = array[index]
        previousIndex = index - 1
        while previousIndex >= 0 and array[previousIndex] > value:
            array[previousIndex + 1] = array[previousIndex]
            previousIndex = previousIndex - 1
        array[previousIndex + 1] = value
    return


def insertionInvertSort(array):
    for index in range(1, len(array)):
        value = array[index]
        previousIndex = index - 1
        while previousIndex >= 0 and array[previousIndex] < value:
            array[previousIndex + 1] = array[previousIndex]
            previousIndex = previousIndex - 1
        array[previousIndex + 1] = value
    return


arr = [5, 3, 11, 2]
insertionSort(arr)

print(arr)
