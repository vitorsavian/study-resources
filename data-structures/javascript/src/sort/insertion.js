function insertionSort(array) {
  for (let index = 1; index < array.length; index++) {
    value = array[index]

    previousValue = index - 1

    while (previousValue >= 0 && array[previousValue] > value) {
      array[previousValue + 1] = array[previousValue]
      previousValue = previousValue - 1
    }

    array[previousValue + 1] = value
  }
}

function insertionInvertSort(array) {
  for (let index = 1; index < array.length; index++) {
    value = array[index]

    previousValue = index - 1

    while (previousValue >= 0 && array[previousValue] < value) {
      array[previousValue + 1] = array[previousValue]
      previousValue = previousValue - 1
    }

    array[previousValue + 1] = value
  }
}

let arr = [1, 3, 4, 10, 25, 11, 5, 2]
let arrInvert = [1, 3, 4, 10, 25, 11, 5, 2]

insertionSort(arr)
insertionInvertSort(arrInvert)

console.log(arr)
console.log(arrInvert)
