#include <stdio.h>
/*
Write a program to find the array elements those frequencies are even and
delete the array elements with frequency of odd
*/

int main() {

  int size, temp, count, array[100];

  printf("Enter the size of array: ");
  scanf("%d", &size);

  printf("Enter the size of array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (int i = 0; i < size; i++) {
    count = 0;
    for (int j = 0; j < size; j++) {
      if (array[i] == array[j]) {
        if (j < i) {
          break;
        } else {
          count++;
        }
      }
    }
    if (count % 2 == 0 && count != 0) {
      printf("%d occures %d times.\n", array[i], count);
    }
    if (count % 2 != 0 && count != 0) {
      temp = array[i];
      int j = 0;
      while (j != size) {
        if (temp == array[j]) {
          for (int m = j; m < size - 1; m++) {
            array[m] = array[m + 1];
          }
          size--;
          j = 0;
        } else {
          j++;
        }
      }
      i--;
    }
  }

  printf("New Array: ");
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  return 0;
}
