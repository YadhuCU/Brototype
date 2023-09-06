#include <stdio.h>
/*
Write a program to interchange the values of two arrays
Program should accept an array from the user, swap the values of two arrays and
display it on the console Eg: Output: Enter the size of arrays Input: 5 Output:
Enter the values of Array 1 Input: 10, 20, 30, 40, 50 Output: Enter the values
of Array 2 Input: 15, 25, 35, 45, 55 Output: Arrays after swapping: Array1: 15,
25, 35, 45, 55 Array2: 10, 20, 30, 40, 50
*/

int main() {
  int sizeOfArray, i, value, temp = 0;
  int array1[100];
  int array2[100];
  // taking size of the array from user
  printf("Enter the size of array: ");
  scanf("%d", &sizeOfArray);

  // taking values of the array from user
  printf("Enter the values of array: ");
  for (i = 0; i < sizeOfArray; i++) {
    scanf("%d", &array1[i]);
  };

  // taking values of the array from user
  printf("Enter the values of array: ");
  for (i = 0; i < sizeOfArray; i++) {
    scanf("%d", &array2[i]);
  };

  // swaping the elements in array
  for (i = 0; i < sizeOfArray; i++) {
    temp = array1[i];
    array1[i] = array2[i];
    array2[i] = temp;
  }

  // printing array1
  printf("Array1:");
  for (i = 0; i < sizeOfArray; i++) {
    printf("%d, ", array1[i]);
  };

  printf("\n");

  // printing array2
  printf("Array2:");
  for (i = 0; i < sizeOfArray; i++) {
    printf("%d, ", array2[i]);
  };
  return 0;
}
