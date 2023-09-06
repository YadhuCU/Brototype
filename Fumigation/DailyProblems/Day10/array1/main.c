#include <stdio.h>
/*
Write a program to count the frequency of each element of an array.
Delete the element if frequency is greater than half the size of array
*/

int main() {

  int size, array[100];
  int count;

  printf("Enter the size of array: ");
  scanf("%d", &size);

  int n = size / 2;

  printf("Enter the values of array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (int i = 0; i < size; i++) {
    count = 0;
    for (int j = 0; j < size; j++) {
      if (array[i] == array[j]) {
        if (i > j) {
          break;
        } else {
          count++;
        }
      }
    }

    if (count != 0) {
      printf("%d occures %d times.\n", array[i], count);
    }

    if (count >= n) {
      int temp = array[i];
      for (int j = 0; j < size; j++) {
        if (temp == array[j]) {
          for (int k = j; k < size - 1; k++) {
            array[k] = array[k + 1];
          }
          size--;
          j--;
        }
      }
    }
  }

  printf("New array: ");
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  return 0;
}
