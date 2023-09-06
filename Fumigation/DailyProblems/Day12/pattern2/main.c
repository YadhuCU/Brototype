#include <stdio.h>
/*

        A
      A   C
    A       E
  A           G
A               I
  A           G
    A       E
      A   C
        A

*/
int main() {

  int row, col, space;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row - 1; i++) {
    if (i > row) {
      space = i - row;
      col = 2 * (2 * row - i) - 1;
    } else {
      space = row - i;
      col = 2 * i - 1;
    }
    for (int j = 1; j <= space; j++) {
      printf("  ");
    }
    for (int j = 1; j <= col; j++) {
      if (j == 1 || j == col) {
        printf("%c ", j + 64);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
