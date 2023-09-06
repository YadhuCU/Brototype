#include <stdio.h>

int main() {

  int array1[100], array2[100];
  int size, temp;
  int i;

  printf("Enter the size of the arrays: ");
  scanf("%d", &size);

  printf("Enter the values of Array 1: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array1[i]);
  }

  printf("Enter the values of Array 2: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array2[i]);
  }

  for (i = 0; i < size; i++) {
    temp = array1[i];
    array1[i] = array2[i];
    array2[i] = temp;
  }

  printf("Arrays after swaping: \n");

  printf("Array 1: ");
  for (i = 0; i < size; i++) {
    printf("%d ", array1[i]);
  }

  printf("\nArray 2: ");
  for (i = 0; i < size; i++) {
    printf("%d ", array2[i]);
  }

  return 0;
}
