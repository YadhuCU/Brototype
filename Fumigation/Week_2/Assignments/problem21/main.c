#include <stdio.h>

/*
 n =5
1 = 10
2 = 8
3 = 6
4 = 4
5 = 2
*/

void pattern(int row) {
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= 2 * row - (i - 1) * 2; j++) {
      printf("* ");
    }
    printf("\n");
    for (int j = 1; j <= i; j++) {
      printf("*\n");
    }
  }
}

int main() {
  int size, large1, large2, array[100];
  printf("Enter the size of array : ");
  scanf("%d", &size);

  printf("Enter the values of array : ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  if (array[0] > array[1]) {
    large1 = array[0];
    large2 = array[1];
  } else {
    large1 = array[1];
    large2 = array[0];
  }

  for (int i = 2; i < size; i++) {
    if (array[i] > large1) {
      large2 = large1;
      large1 = array[i];
    } else if (array[i] < large1 && array[i] > large2) {
      large2 = array[i];
    }
  }

  pattern(large2);
  return 0;
}
