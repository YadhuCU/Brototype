#include <stdio.h>
/*
n=3
   *
  * *
 * * *
* * * *
 * * *
  * *
   *

*/

int main() {

  int row, space, col;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row * 2 - 1; i++) {
    if (i > row) {
      space = i - row;
      col = 2 * row - i;
    } else {
      space = row - i;
      col = i;
    }
    for (int j = 1; j <= space; j++) {
      printf(" ");
    }
    for (int j = 1; j <= col; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
