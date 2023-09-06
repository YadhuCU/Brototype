#include <stdio.h>

int findMax(int *, int);
int main() {

  int i, size, array[100];
  int max;

  printf("Enter the elements of the array: ");
  scanf("%d", &size);

  printf("Enter the values : ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  max = findMax(array, size);
  printf("The large number is : %d", max);

  return 0;
}

int findMax(int *array, int size) {
  int max = 0;

  for (int i = 0; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }

  return max;
}
