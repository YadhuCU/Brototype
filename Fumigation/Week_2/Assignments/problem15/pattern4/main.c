#include <stdio.h>
/*

*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*

*/

int main() {

  int row, col;

  printf("Enter the row: ");
  scanf("%d", &row);

  printf("*\n");
  for (int i = 1; i <= 2 * row - 1; i++) {
    printf("* ");
    col = (i > row) ? 2 * (2 * row - i) - 1 : 2 * i - 1;
    for (int j = 1; j <= col; j++) {
      if (j > i) {
        printf("%d ", 2 * i - j);
      } else {
        printf("%d ", j);
      }
    }
    printf("*\n");
  }
  printf("*\n");

  return 0;
}
