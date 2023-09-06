#include <stdio.h>

int main() {

  int i, j, k, size;
  int array[100];

  printf("Enter the size of array: ");
  scanf("%d", &size);
  printf("Enter the values of array: ");
  for (i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (i = 0; i < size - 1; i++) {
    for (j = i + 1; j < size; j++) {
      if (array[i] == array[j]) {
        for (k = j; k < size - 1; k++) {
          array[k] = array[k + 1];
        }
        size -= 1;
      }
    }
  }

  printf("New array: ");
  for (i = 0; i < size; i++)
    printf("%d ", array[i]);

  return 0;
}
