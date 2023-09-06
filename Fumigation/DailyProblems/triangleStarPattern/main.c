#include <stdio.h>
/*
      *
    * * *
  * * * * *
* * * * * * *

*/

int main() {

  int i, j, k, row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (i = 1; i <= row; i++) {
    for (k = 1; k <= row - i; k++) {
      printf("  ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
