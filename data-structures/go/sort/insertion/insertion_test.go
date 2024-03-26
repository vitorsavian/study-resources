package insertion_test

import (
	"datastructure/sort/insertion"
	"fmt"
	"reflect"
	"testing"
)

func Test_InsertionSortInt(t *testing.T) {
	tests := []struct {
		param []int
		want  []int
	}{
		{
			param: []int{2, 5, 1, 0, 10, 25, 50, 90, 85, 77, 66, 44},
			want:  []int{0, 1, 2, 5, 10, 25, 44, 50, 66, 77, 85, 90},
		},
	}

	for _, v := range tests {
		sortedArr := insertion.InsertionSortInt(v.param)
		if reflect.DeepEqual(v.want, sortedArr) {
			return
		}

		for i, value := range v.want {
			fmt.Printf("[%d]: %d", i, value)
			fmt.Println()
		}

		for i, value := range sortedArr {
			fmt.Printf("[%d]: %d", i, value)
			fmt.Println()
		}

		t.Errorf("Error in the test")
	}

}
