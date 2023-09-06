#include <stdio.h>

int main() {

  int row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= row - i + 1; j++) {
      if (i == 1) {
        printf("%d ", j);
      } else if (j == 1) {
        printf("%d ", i);
      } else if (j == row - i + 1) {
        printf("%d ", row);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
