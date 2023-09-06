#include <stdio.h>
/*
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
*/

int main() {

  int i, j, k, row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (i = 1; i <= row; i++) {
    for (j = 1; j <= row - i; j++) {
      printf("  ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}
