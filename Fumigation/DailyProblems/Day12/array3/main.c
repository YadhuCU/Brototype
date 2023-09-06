#include <stdio.h>

int main() {

  int size, temp, array[100];
  int small5, large;

  printf("Enter the size of array: ");
  scanf("%d", &size);

  printf("Enter the values of array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  // finding smallest multiple of 5;
  small5 = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] % 5 == 0) {
      small5 = array[i];
      break;
    }
  }

  for (int i = 0; i < size; i++) {
    if (array[i] % 5 == 0) {
      if (array[i] < small5) {
        small5 = array[i];
      }
    }
  }
  printf("Samllest multiple of 5 is : %d\n", small5);

  // largest number
  large = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > large) {
      large = array[i];
    }
  }

  // deleting the large element.

  for (int i = 0; i < size; i++) {
    if (large == array[i]) {
      for (int j = i; j < size - 1; j++) {
        array[j] = array[j + 1];
      }
      size--;
      i--;
    }
  }

  printf("Array: ");
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  return 0;
}
