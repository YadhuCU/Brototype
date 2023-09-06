#include <stdio.h>
/*
1         1
2*3       2
4*5*6     3
7*8*9*10  4
7*8*9*10  5
4*5*6     6
2*3       7
1         8
*/

int main() {

  int row, col, count = 1;

  printf("Enter the number of row: ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row; i++) {
    if (i > row) {
      col = 2 * (2 * row - i + 1) - 1;
      count = (2 * row - i + 1) * ((2 * row - i + 1) + 1) / 2;
      count = count - (2 * row - i + 1) + 1;
    } else {
      col = i * 2 - 1;
    }
    for (int j = 1; j <= col; j++) {
      if (j % 2 == 0) {
        printf("*");
      } else {
        printf("%d", count);
        count++;
      }
    }
    printf("\n");
  }

  return 0;
}
