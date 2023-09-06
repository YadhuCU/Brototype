#include <stdio.h>
/*
row=4;
1       1 1
2*2     3 2
3*3*3   5 3
4*4*4*4 7 4
4*4*4*4 7 5  2*row -i +1 =4
3*3*3   5 6  3
2*2     3 7  2
1       1 8  1
*/

int main() {

  int row, col;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row; i++) {
    if (i > row) {
      col = 2 * (2 * row - i + 1) - 1;
    } else if (i <= row) {
      col = 2 * i - 1;
    }
    for (int j = 1; j <= col; j++) {
      if (j % 2 == 0) {
        printf("*");
      } else {
        if (i <= row) {
          printf("%d", i);
        } else {
          printf("%d", 2 * row - i + 1);
        }
      }
    }
    printf("\n");
  }
  return 0;
}
