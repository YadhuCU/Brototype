#include <stdio.h>

int main() {

  int i, j, k, row;

  printf("Enter the number of rows: ");
  scanf("%d", &row);

  for (i = 1; i <= row; i++) {
    for (j = 1; j <= 2 * i; j++) {
      printf("* ");
    }
    for (k = 1; k <= i * 3; k++) {
      if (i == row) {
        break;
      }
      printf("\n*");
    }
    printf("\n");
  }

  return 0;
}
