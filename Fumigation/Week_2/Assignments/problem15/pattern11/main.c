
#include <stdio.h>

int main() {
  int row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= row - i; j++) {
      printf(" ");
    }
    for (int j = 1; j <= row; j++) {
      if (i == 1 || j == 1 || i == row || j == row) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
