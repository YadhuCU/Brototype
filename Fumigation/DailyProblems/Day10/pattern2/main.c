#include <stdio.h>

/*
row: 5
        1
      1   3
    1       5
  1           7
1 2 3 4 5 6 7 8 9
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
        printf("%d ", j);
      } else {
        printf("  ");
      }
    }

    printf("\n");
  }

  return 0;
}
