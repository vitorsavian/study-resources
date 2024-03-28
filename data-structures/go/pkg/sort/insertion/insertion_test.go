package insertion_test

import (
	"datastructure/pkg/sort/insertion"
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

		t.Errorf("Error in the test")
	}

}

func Test_InsertionInvertSortInt(t *testing.T) {
	tests := []struct {
		param []int
		want  []int
	}{
		{
			param: []int{2, 5, 1, 0, 10, 25, 50, 90, 85, 77, 66, 44},
			want:  []int{90, 85, 77, 66, 50, 44, 25, 10, 5, 2, 1, 0},
		},
	}

	for _, v := range tests {
		sortedArr := insertion.InsertionInvertSortInt(v.param)
		if reflect.DeepEqual(v.want, sortedArr) {
			return
		}

		t.Errorf("Error in the test of inversion")
	}

}
