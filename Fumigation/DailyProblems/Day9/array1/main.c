#include <stdio.h>

int main() {

  int size, temp;
  int array[100];

  printf("Enter the size of array: ");
  scanf("%d", &size);
  printf("Enter the values of array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[j] > 0) {
        temp = array[j];
        for (int k = j; k > i; k--) {
          array[k] = array[k - 1];
        }
        array[i] = temp;
        i++;
      }
    }
    break;
  }
  printf("Array: ");
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);

  return 0;
}
