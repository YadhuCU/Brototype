#include <stdio.h>

int main() {

  int i, l1, l2, size;
  int array[100];

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter the values of the array: ");
  for (i = 0; i < size; i++)
    scanf("%d", &array[i]);

  if (array[0] > array[1]) {
    l1 = array[0];
    l2 = array[1];
  } else {
    l1 = array[1];
    l2 = array[0];
  }

  for (i = 2; i < size; i++) {
    if (array[i] > l1) {
      l2 = l1;
      l1 = array[i];
    }
    if (array[i] < l1 && array[i] > l2) {
      l2 = array[i];
    }
  }

  printf("First largest Number is : %d\n", l1);
  printf("Second largest Number is : %d\n", l2);

  return 0;
}
