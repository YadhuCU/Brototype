
#include <stdio.h>
/*

*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*

n =4
*/

int main() {

  int row, col;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row - 1; i++) {
    col = (i > row) ? (2 * (2 * row - i) - 1) : (2 * i - 1);
    for (int j = 1; j <= col; j++) {
      if (j == 1 || j == col) {
        printf("* ");
      } else {
        if (j > i || (i > row && j > col / 2)) {
          printf("%d ", col - j);
        } else {
          printf("%d ", j - 1);
        }
      }
    }
    printf("\n");
  }

  return 0;
}
