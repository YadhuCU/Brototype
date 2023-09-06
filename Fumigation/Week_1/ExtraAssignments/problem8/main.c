#include <stdio.h>

int main() {

  int size, array[100];
  int temp;

  printf("Enter the no of elements: ");
  scanf("%d", &size);

  printf("Enter the numbers: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[i] < array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
