#include <stdio.h>

/*
Write a program to find multiples of 3 and insert
its double after that element
*/

int main() {

  int size, array[100];

  printf("Enter the size of array: ");
  scanf("%d", &size);

  printf("Enter the size of array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  // 1 2, 3, 4, 5

  for (int i = 0; i < size; i++) {
    if (array[i] % 3 == 0) {
      for (int j = size; j > i + 1; j--) {
        array[j] = array[j - 1];
      }
      array[i + 1] = array[i] * 2;
      size++;
      i++;
    }
  }

  printf("Array: ");
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  return 0;
}
