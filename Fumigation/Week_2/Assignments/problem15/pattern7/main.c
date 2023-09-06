#include <stdio.h>

/*
 *         *
 * *     * *
 * * * * * *
 * * * * * *
 * *     * *
 *         *
 */

int main() {

  int row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row; i++) {
    for (int j = 1; j <= 2 * row; j++) {
      if (j == 1 || j == 2 * row || (j <= i && i <= row) ||
          (j >= 2 * row - i + 1 && i <= row) || (j >= i && i >= row) ||
          (j <= 2 * row - i + 1 && i >= row)) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
