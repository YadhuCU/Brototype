#include <stdio.h>
/*
if n = 4
*
* *
* * *
* * * *
* * *
* *
*

totalRow = 2n-1
totalCol = 4
if row < n, col = row
if row > n, col 2n-row
*/

int main() {
  int n, row, totalCol, col;

  printf("Enter the N: ");
  scanf("%d", &n);

  // the outer loop for the row
  for (row = 0; row < n * 2; row++) {
    if (row > n) {
      totalCol = 2 * n - row;
    } else {
      totalCol = row;
    }
    for (col = 0; col < totalCol; col++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
