#include <stdio.h>

/*
row=5;
        A
      A   C
    A       E
  A           G
A B C D E F G H I
*/

int main() {

  int row;

  printf("Enter the number of row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    for (int k = 1; k <= row - i; k++) {
      printf("  ");
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      if (j == 1 || j == 2 * i - 1 || i == row) {
        printf("%c ", j + 64);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
