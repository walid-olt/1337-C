#include <assert.h>
#include <stddef.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
void merge(int *arr, int *left, int left_size, int *right, int right_size) {
  int i = 0, j = 0, k = 0;

  while (i < left_size && j < right_size) {
    if (left[i] <= right[j]) {
      arr[k++] = left[i++];
    } else {
      arr[k++] = right[j++];
    }
  }

  while (i < left_size)
    arr[k++] = left[i++];
  while (j < right_size)
    arr[k++] = right[j++];
}
void mergeSort(int *arr, int size) {
  if (size < 2)
    return;

  int mid_idx = size / 2;
  int left_half[mid_idx];
  int right_half[size - mid_idx];

  for (int i = 0; i < mid_idx; i++) {
    left_half[i] = arr[i];
  }
  for (int i = mid_idx; i < size; i++) {
    right_half[i - mid_idx] = arr[i];
  }

  mergeSort(left_half, ARRAY_SIZE(left_half));
  mergeSort(right_half, ARRAY_SIZE(right_half));
  merge(arr, left_half, ARRAY_SIZE(left_half), right_half,
        ARRAY_SIZE(right_half));
};
;

void ft_sort_int_tab(int *tab, int size) {
  /*
   * merge sort  because why not 🫩
   */
  mergeSort(tab, size);
}

int main(void) {
  int arr[] = {101, 4, 1, 5, 7, 1, 2, 8, 3, 9, 0};
  int size = sizeof(arr) / sizeof(int);
  ft_sort_int_tab(arr, size);
  assert(arr[0] == 0 && arr[size - 1] == 101);
  return 0;
}
