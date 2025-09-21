#include <stdio.h>
#include <stdlib.h>

int main() {

  int *arr;

  arr = (int *)calloc(5, sizeof(int));
  if (arr == NULL) {
    printf("Failed to rallocate. ");
    free(arr);
    return 1;
  }

  arr[0] = 1;

  for (int i = 1; i < 5; i++) {
    arr[i] = arr[i - 1] + 2;
  }

  printf("Now elements in arary: ");

  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  printf("\nReallocating for to store even numbers.\n");

  int *tmp = (int *)realloc(arr, 6 * sizeof(int));
  if (tmp == NULL) {
    printf("Failed to rallocate. ");
    free(arr);
    return 1;
  } else {
    arr = tmp;
  }

  for (int i = 0; i < 6; i++) {
    if (i == 0) {
      arr[i] = 2;
      continue;
    }
    arr[i] = arr[i-1] + 2;
  }

  printf("Now elements in arary: ");
  for (int i = 0; i < 6; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  free(arr);
}
