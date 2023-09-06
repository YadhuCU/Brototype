#include <stdio.h>

void pattern(int row) {

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= i * 3; j++) {
      printf("* ");
    }
    printf("\n");
    for (int j = 1; j <= i * 3; j++) {
      if (i == row) {
        break;
      }
      printf("*\n");
    }
  }
}

int main() {

  int size1, size2, array1[100], array2[100];
  int size;

  printf("Size of array: ");
  scanf("%d", &size1);
  printf("Enter elements: ");
  for (int i = 0; i < size1; i++)
    scanf("%d", &array1[i]);

  printf("Size of array: ");
  scanf("%d", &size2);
  printf("Enter elements: ");
  for (int i = 0; i < size2; i++)
    scanf("%d", &array2[i]);

  // merging
  size = size1 + size2;
  // s1 = 4, s2 = 3
  for (int i = size1; i < size; i++) {
    array1[i] = array2[i - size1];
  }
  printf("Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array1[i]);
  }

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array1[i] == array1[j]) {
        for (int m = j; m < size - 1; m++) {
          array1[m] = array1[m + 1];
        }
        size--;
        i--;
      }
    }
  }

  printf("\nArray: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array1[i]);
  }
  printf("\n");
  for (int i = 0; i < size; i++) {
    pattern(array1[i]);
    printf("\n\n");
  }
  return 0;
}
