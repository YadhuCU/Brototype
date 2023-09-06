#include <stdio.h>

void getArray(int *, int *);
void displayArray(int *, int);

int main() {

  int size, array[100];

  getArray(array, &size); // passing the pointer of the array and size
  displayArray(array, size);

  return 0;
}

// function getArray
void getArray(int *array, int *size) {

  int i;

  // modifying the value in size variable
  printf("Enter the size of the array: ");
  scanf("%d", size);

  printf("Enter the valued of the array: ");
  for (i = 0; i < *size; i++) {
    scanf("%d", &array[i]);
  }
}

// function displaArray
void displayArray(int *array, int size) {

  int i;

  printf("Array values are: ");
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}
