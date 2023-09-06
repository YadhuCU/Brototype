#include <stdio.h>
/*
Write a program to find the number of even numbers in an array
Program should accept an array and display the number of even numbers contained
in that array Eg: Output: Enter the size of an array Input: 5 Output: Enter the
values of array Input: 11, 20, 34, 50, 33 Output: Number of even numbers in the
given array is 3
*/
int main() {
  int size, i, count;

  printf("Enter the size of array: ");
  scanf("%d", &size); // size of array;

  int array[size];

  // taking user inputs array elements
  printf("Enter the value for the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      count++;
    }
  }

  printf("Numbers of even numbers in the given array is %d.", count);

  return 0;
}
