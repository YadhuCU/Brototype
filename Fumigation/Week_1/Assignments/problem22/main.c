#include <stdio.h>

void getArray(int (*)[100], int (*)[100], int *);
void addArray(int (*)[100], int (*)[100], int (*)[100], int);
void displayArray(int (*)[100], int);

int main() {

  int array1[100][100], array2[100][100], array[100][100], size;

  getArray(array1, array2, &size);
  addArray(array1, array2, array, size);
  displayArray(array, size);

  return 0;
}

void getArray(int (*array1)[100], int (*array2)[100], int *size) {
  int i, j;

  printf("Ente the size of array: ");
  scanf("%d", size);

  printf("Ente the values of array1: \n");
  for (i = 0; i < *size; i++) {
    for (j = 0; j < *size; j++) {
      scanf("%d", &array1[i][j]);
    }
  }

  printf("Ente the values of array2: \n");
  for (i = 0; i < *size; i++) {
    for (j = 0; j < *size; j++) {
      scanf("%d", &array2[i][j]);
    }
  }
}

void addArray(int (*array1)[100], int (*array2)[100], int (*array)[100],
              int size) {

  int i, j;

  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      array[i][j] = array1[i][j] + array2[i][j];
    }
  }
}

void displayArray(int (*array)[100], int size) {

  int i, j;

  printf("Array: \n");

  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
}
