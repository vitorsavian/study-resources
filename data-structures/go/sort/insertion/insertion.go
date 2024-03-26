package insertion

func InsertionSortInt(arr []int) []int {

	for i := 0; i < len(arr); i++ {
		value := arr[i]

		j := i - 1

		for j >= 0 && arr[j] > value {
			arr[j+1] = arr[j]
			j = j - 1
		}

		arr[j+1] = value

	}

	return arr
}

func InsertionInvertSortInt(arr []int) []int {

	for i := 0; i < len(arr); i++ {
		value := arr[i]

		j := i - 1

		for j >= 0 && arr[j] < value {
			arr[j+1] = arr[j]
			j = j - 1
		}

		arr[j+1] = value

	}

	return arr
}
