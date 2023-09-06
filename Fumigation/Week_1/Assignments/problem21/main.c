#include <stdio.h>

int main() {

  int size, i, array[100], result[100];

  printf("Enter the array limit: ");
  scanf("%d", &size);

  printf("Enter the values of array : ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < size - 1; i++) {
    result[i] = array[i] * array[i + 1];
  }

  printf("Output: ");
  for (i = 0; i < size - 1; i++) {
    printf("%d ", result[i]);
  }

  return 0;
}
