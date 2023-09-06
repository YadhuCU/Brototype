#include <inttypes.h>
#include <stdio.h>

int main() {

  int i, j, k, cha, row;
  printf("Enter the no of Rows: ");
  scanf("%d", &row);
  // ascii of A - 65;

  for (i = 1; i <= row; i++) {
    for (k = 1; k <= row - i; k++) {
      printf("  ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      if (j > i) {
        printf("%c ", (2 * i - j) + 64);
      } else {
        printf("%c ", j + 64);
      }
    }
    printf("\n");
  }

  return 0;
}
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/
