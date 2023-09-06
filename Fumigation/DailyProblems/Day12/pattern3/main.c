#include <stdio.h>

int main() {

  int row, col;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row - 1; i++) {
    for (int j = 1; j <= 2 * row - 1; j++) {
      if (i == j || j == 2 * row - i) {
        printf("%d ", j);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
