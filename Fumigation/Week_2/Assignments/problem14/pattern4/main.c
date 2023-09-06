#include <stdio.h>
/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

int main() {

  int row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= row - i; j++) {
      printf("  ");
    }
    int count = i;
    for (int j = 1; j <= 2 * i - 1; j++) {
      if (j >= i) {
        printf("%d ", count);
        count--;
      } else {
        printf("%d ", count);
        count++;
      }
    }
    printf("\n");
  }

  return 0;
}
