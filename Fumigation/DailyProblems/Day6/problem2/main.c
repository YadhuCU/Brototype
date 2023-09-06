#include <stdio.h>
/*
Write a program to add to two dimensional arrays
Program should accept two 2D arrays and display its sum
Eg: Output: Enter the size of arrays
Input: 3
Output: Enter the values of array 1
Input:
1 2 3
4 5 6
7 8 9
Output: Enter the values of array 2
Input:
10 20 30
40 50 60
70 80 90
Output: Sum of 2 arrays is:
11 22 33
44 55 66
77 88 99
*/

int main() {
  int size;

  printf("Enter the size of arrays");
  scanf("%d", &size); // taking size of the array from user

  int array1[size][size]; // initializing 2d array1
  int array2[size][size]; // initializing 2d array2

  // taking the 2d array1 values
  printf("Enter the values for array 1: ");
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++)
      scanf("%d", &array1[i][j]);
  }
  // taking the 2d array2 values
  printf("Enter the values for array 2: ");
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++)
      scanf("%d", &array2[i][j]);
  }

  // printing the sum of the arrays
  printf("The sum of 2 array is: \n");
  for (int i = 0; i < size; i++) {
    printf("[ ");
    for (int j = 0; j < size; j++) {
      printf("%d ", array1[i][j] + array2[i][j]);
    }
    printf("]\n");
  }

  return 0;
}
