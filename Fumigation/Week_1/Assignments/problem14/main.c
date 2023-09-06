#include <stdio.h>

int main() {

  int size, i, j;
  int array1[100][100], array2[100][100];
  int array[100][100];

  printf("Enter the size of array: ");
  scanf("%d", &size);

  // array 1
  printf("Enter the values of array 1:\n");
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      scanf("%d", &array1[i][j]);
    }
  }

  // array 2
  printf("Enter the values of array 2:\n");
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      scanf("%d", &array2[i][j]);
    }
  }

  // adding array1 and array2.
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      array[i][j] = array1[i][j] + array2[i][j];
    }
  }

  // printing array after adding.
  printf("Sum of 2 arrays is: \n");
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

  return 0;
}
