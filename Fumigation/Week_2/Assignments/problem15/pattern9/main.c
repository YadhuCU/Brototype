#include <stdio.h>
/*
 left arrow
 */

int main() {

  int row, col;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row * 2 - 1; i++) {
    col = (i > row) ? (row * 2 - (i - row)) : (row + i - 1);
    for (int j = 1; j <= col; j++) {
      if ((j == row - i + 1 && i <= row) || i == row ||
          (j == i - row + 1 && i > row)) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
