#include <stdio.h>

int main() {

  int i, evenNumbers, sizeOfArray;
  int array[100];

  // taking size of array from user
  printf("Enter the size of array: ");
  scanf("%d", &sizeOfArray);

  // taking array elements from user
  printf("Enter the elements of array: ");
  for (i = 0; i < sizeOfArray; i++) {
    scanf("%d", &array[i]);
  }

  evenNumbers = 0;
  for (i = 0; i < sizeOfArray; i++) {
    // checking even or odd;
    if (array[i] % 2 == 0) {
      evenNumbers++;
    }
  }

  printf("Number of even numbers in the given arary: %d", evenNumbers);

  return 0;
}
