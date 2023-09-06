#include <stdio.h>
/*

    *  5 1
     *  6 2
      * 7 3
       * 8 4
********* 9 5
       * 8 6
      *  7 7
     * 6 8
    * 5 9

*/

int main() {

  int row, col;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row - 1; i++) {
    col = (i > row) ? ((2 * row - 1) - (i - row)) : row + i - 1;
    for (int j = 1; j <= col; j++) {
      if (i == row || j == col) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
