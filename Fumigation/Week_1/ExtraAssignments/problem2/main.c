#include <stdio.h>

int main() {

  int i, j, k, row;

  printf("Enter the number of row: ");
  scanf("%d", &row);

  for (i = 1; i <= row + 1; i++) {

    for (k = 1; k <= row - i + 1; k++) {
      printf(" ");
    }

    for (j = 1; j <= i; j++) {
      if (i == j) {
        printf("1 ");
      } else {
        printf("%d ", j);
      }
    }
    printf("\n");
  }

  return 0;
}
