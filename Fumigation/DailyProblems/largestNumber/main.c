#include <stdio.h>

int main() {

  /*

   [ 1, 3, 2, 5, 9]
   l1 = 1
   l2 = 0
   l3 = 0

  */

  int size, i;
  int array[100];
  int l1, l2, l3, temp;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter the array elements: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  l1 = 0;
  l2 = 0;
  l3 = 0;
  // [1 2 3 4 5]
  //

  for (i = 0; i < size; i++) {
    if (array[i] >= l1) {
      temp = l3;
      l3 = l2;
      l2 = l1;
      l1 = array[i];
    }
    if (array[i] < l1 && array[i] >= l2) {
      temp = l3;
      l3 = l2;
      l2 = array[i];
    }
    if (array[i] < l2 && array[i] >= l3) {
      temp = l3;
      l3 = array[i];
    }
  }

  printf("3rd Largest number is: %d", l3);

  return 0;
}
