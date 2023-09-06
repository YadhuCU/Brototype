#include <stdio.h>
/*
 n  = 4
      *
    * * *
  *   *   *
* * * * * * *
  *   *   *
    * * *
      *
*/

int main() {

  int row, col, space;

  printf("Enter the number of row: ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row - 1; i++) {
    space = (i > row) ? i - row : row - i;
    for (int j = 1; j <= space; j++) {
      printf("  ");
    }

    col = (i > row) ? 2 * (2 * row - i) - 1 : 2 * i - 1;
    for (int j = 1; j <= col; j++) {
      if (j == 1 || j == col || (i == j && i <= row) || i == row ||
          (i == 2 * row - j && i > row)) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
