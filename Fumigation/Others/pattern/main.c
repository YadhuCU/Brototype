
/*
 * *
 *
 * * * * *
 * *
 * *
 * * * * * * * *
 * * *
 * * *
 * * *
 * * * * * * * * * * *
 */
#include <stdio.h>

int main() {

  int i, j, k, row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (i = 1; i <= row; i++) {
    for (j = 1; j <= 3 * i - 1; j++) {
      printf("* ");
    }
    printf("\n");
    for (k = 1; k <= i; k++) {
      if (i == row)
        break;
      for (int m = 1; m <= i; m++) {
        printf("* ");
      }
      printf("\n");
    }
  }

  return 0;
}
