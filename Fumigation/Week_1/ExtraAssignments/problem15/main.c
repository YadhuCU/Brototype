#include <stdio.h>

int main() {

  int i, j, k, row;

  printf("Enter the number of row: ");
  scanf("%d", &row);

  for (i = 1; i <= row; i++) {

    for (j = 1; j <= 2 * row; j++) {
      if (i >= j || j >= (2 * row) - i + 1) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
