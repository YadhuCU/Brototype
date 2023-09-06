#include <stdio.h>

int main() {

  int row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= i - 1; j++) {
      printf("  ");
    }
    for (int j = 1; j <= (2 * row - 1) - (2 * i - 1); j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
