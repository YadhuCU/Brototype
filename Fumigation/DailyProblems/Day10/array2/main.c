#include <stdio.h>

int main() {

  int size, left, right, temp;
  int array[100];

  printf("Enter the size of the array: ");
  scanf("%d", &size);
  printf("Enter the values of the array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  for (int i = 0; i < size / 2; i++) {
    left = i;
    right = size / 2 - i - 1;
    if (left == right)
      break;

    temp = array[left];
    array[left] = array[right];
    array[right] = temp;
  }

  printf("New Array: ");
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  return 0;
}
