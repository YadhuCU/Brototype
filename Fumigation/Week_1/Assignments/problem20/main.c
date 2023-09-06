#include <stdio.h>

int main() {

  int count, row, i, j;

  printf("Enter the row: ");
  scanf("%d", &row);

  count = 1;
  for (i = 1; i <= row; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d ", count);
      count++;
    }
    printf("\n");
  }

  return 0;
}
