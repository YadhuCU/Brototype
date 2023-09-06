#include <stdio.h>
/*
Write a program to accept an array and display it on the console using functions
Program should contain 3 functions including main() function
main()
Declare an array
Call function getArray()
Call function displayArray()
                getArray()
Get values to the array
                displayArray()
Display the array values
 */
void getArray(int *, int);
void displayArray(int *, int);
int main() {
  int size;

  printf("Enter the size of array: ");
  scanf("%d", &size);

  int array[size];

  getArray(array, size);
  displayArray(array, size);
}

void getArray(int array[], int size) {
  printf("Enter the values of array :\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
}

void displayArray(int array[], int size) {
  printf("The array is : \n[ ");

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("]");
}
