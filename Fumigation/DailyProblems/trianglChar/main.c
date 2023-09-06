#include <stdio.h>
/*
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I
*/

int main() {

  int i, j, k, row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (i = 1; i <= row; i++) {
    for (j = 1; j <= row - i; j++) {
      printf("  ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("%c ", j + 64);
    }
    printf("\n");
  }

  return 0;
}
