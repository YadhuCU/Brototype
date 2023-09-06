#include <stdio.h>
/*
1
1 2
1   3
1     4
1 2 3 4 5
*/
int main() {

  int row;
  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= i; j++) {
      if (j == 1 || j == i || i == row) {
        printf("%d ", j);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
