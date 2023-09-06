#include <stdio.h>

int main() {

  int i, j, k, row;

  printf("Enter the number of row: ");
  scanf("%d", &row);

  for (i = 1; i <= row; i++) {
    for (j = 1; j <= i + 1; j++) {
      printf("* ");
    }
    if (i == row) {
      break;
    }
    for (k = 1; k <= i; k++) {
      printf("\n*");
    }
    printf("\n");
  }

  return 0;
}
