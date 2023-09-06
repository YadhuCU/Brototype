#include <stdio.h>

int main() {

  int size;

  printf("Enter the size of array: ");
  scanf("%d", &size);

  int array[size];

  printf("Enter the values of array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (int i = 0; i < size - 1; i++) {
    for (int j = i; j < size; j++) {
      if (array[i] > array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  printf("Enter the values of array: ");
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  return 0;
}
