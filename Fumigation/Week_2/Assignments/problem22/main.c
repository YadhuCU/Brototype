#include <stdio.h>

void pattern(int row) {
  for (int i = 1; i <= row + 1; i++) {
    for (int j = 1; j <= i; j++) {
      if (j == i) {
        printf("X ");
      } else {
        printf("_ ");
      }
    }
    printf("\n");
    for (int j = 1; j <= i * 2; j++) {
      if (i > row) {
        break;
      }
      printf("X ");
    }
    printf("\n");
  }
}

int main() {

  int size, array[100];

  printf("Enter the size of array: ");
  scanf("%d", &size);

  printf("Enter the values of array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (int i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      pattern(array[i]);
      printf("\n\n");
    }
  }

  return 0;
}
