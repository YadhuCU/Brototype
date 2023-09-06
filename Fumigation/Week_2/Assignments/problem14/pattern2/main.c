#include <stdio.h>
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

int main() {

  int row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= row - i + 1; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }

  return 0;
}
