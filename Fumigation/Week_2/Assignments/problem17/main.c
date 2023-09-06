#include <stdio.h>

void pattern(int row) {
  for (int i = 1; i <= row; i++) {
    for (int j = row + 3 - i; j >= 1; j--) {
      if (j >= row + 2 - i) {
        printf("_ ");
      } else {
        printf("X ");
      }
    }
    printf("\n");
    for (int j = row + 2 - i; j >= 1; j--) {
      if (j == row + 2 - i) {
        printf("_ ");
      } else {
        printf("X ");
      }
    }
    printf("\n");
    for (int j = 1; j <= i; j++) {
      printf("X\n");
    }
  }
}

int main() {

  // delete m(5)
  int size, array[100];

  printf("Enter the size of array: ");
  scanf("%d", &size);

  printf("Enter the values of array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  // 1 2 5 2
  for (int i = 0; i < size; i++) {
    if (array[i] % 5 == 0) {
      for (int j = i; j < size - 1; j++) {
        array[j] = array[j + 1];
      }
      size--;
      i--;
    }
  }

  printf("Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n\n");
  for (int i = 0; i < size; i++) {
    pattern(array[i]);
    printf("\n\n");
  }

  return 0;
}
