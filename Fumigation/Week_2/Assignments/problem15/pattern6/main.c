#include <stdio.h>

/*

* * * * *
* *   * *
*   *   *
* *   * *
* * * * *

*/

int main() {

  int row;
  printf("Enter the number of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= 2 * row - 1; i++) {
    for (int j = 1; j <= 2 * row - 1; j++) {
      if (i == 1 || j == 1 || j == 2 * row - 1 || i == 2 * row - 1 || i == j ||
          j == 2 * row - i) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
