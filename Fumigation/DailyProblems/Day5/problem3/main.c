#include <stdio.h>
/*
Write a program to sort an array in descending order
Program should accept and array, sort the array values in descending order and
display it Eg: Output: Enter the size of an array Input: 5 Output: Enter the
values of array Input: 20, 10, 50, 30, 40 Output: Sorted array: 50, 40, 30, 20,
10
*/

int main() {
  int size, i, j, temp = 0;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int array[size]; // initializing the array

  // taking the array elements from the user
  printf("Enter the values for the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  };

  // printing the sorted array
  printf("Array: ");
  for (i = 0; i < size; i++) {
    printf("%d, ", array[i]);
  };

  // SELECTION SORTING
  // sorting descending order
  for (i = 0; i < size - 1; i++) {
    for (j = i + 1; j < size; j++) {
      if (array[i] < array[j]) {
        temp = array[j];
        array[j] = array[i];
        array[i] = temp;
      };
    };
  };

  // printing the sorted array
  printf("Sorted array: ");
  for (i = 0; i < size; i++) {
    printf("%d, ", array[i]);
  };

  return 0;
};
