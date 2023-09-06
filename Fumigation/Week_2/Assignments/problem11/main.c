#include <stdio.h>

int smallestElement(int *, int);
int largestElement(int *, int);
int elementSum(int *, int);
void elementCount(int *, int);

int main() {

  int size, array[100];
  int small, large, sum;

  printf("Enter the size of all elements: ");
  scanf("%d", &size);

  printf("Enter the values of all elements: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  small = smallestElement(array, size);
  large = largestElement(array, size);
  sum = elementSum(array, size);

  printf("Smalles element in the array: %d\n", small);
  printf("Largest element in the array: %d\n", large);
  printf("Sum of all elements in the array: %d\n", sum);

  elementCount(array, size);

  return 0;
}

int largestElement(int *array, int size) {
  int large = array[0];

  for (int i = 1; i < size; i++)
    large = (array[i] > large) ? array[i] : large;
  return large;
}

int smallestElement(int *array, int size) {
  int small = array[0];

  for (int i = 1; i < size; i++)
    small = (array[i] < small) ? array[i] : small;
  return small;
}

int elementSum(int *array, int size) {
  int sum = 0;

  for (int i = 0; i < size; i++)
    sum += array[i];
  return sum;
}

void elementCount(int *array, int size) {
  int count;

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
  }
}
