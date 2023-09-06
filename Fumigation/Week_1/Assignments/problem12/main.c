#include <stdio.h>

int main() {

  int i, j, sizeOfArray, temp;
  int array[100];

  printf("Enter the size of an array: ");
  scanf("%d", &sizeOfArray);

  printf("Enter the values of array: ");
  for (i = 0; i < sizeOfArray; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < sizeOfArray - 1; i++) {
    for (j = i + 1; j < sizeOfArray; j++) {
      if (array[i] < array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  printf("Sorted array.");
  for (i = 0; i < sizeOfArray; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
