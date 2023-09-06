#include <stdio.h>

/*
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/

int main() {

  int row;
  int cArray[100], pArray[100] = {0};

  printf("Enter the row: ");
  scanf("%d", &row);

  pArray[1] = 1;

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= row - i; j++) {
      printf(" ");
    }
    for (int j = 1; j <= i; j++) {
      cArray[j] = pArray[j] + pArray[j - 1];
    }
    for (int j = 1; j <= i; j++) {
      printf("%d ", cArray[j]);
      pArray[j] = cArray[j];
    }
    printf("\n");
  }

  return 0;
}
