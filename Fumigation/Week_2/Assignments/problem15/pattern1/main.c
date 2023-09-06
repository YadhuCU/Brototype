#include <stdio.h>
/*
3
4 4
5 5 5
6 6 6 6
5 5 5
4 4
3
*/
int main() {

  int row, col;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row - 1; i++) {
    if (i > row) {
      col = 2 * row - i;
    } else {
      col = i;
    }
    for (int j = 1; j <= col; j++) {
      printf("%d ", col + 2);
    }
    printf("\n");
  }

  return 0;
}
