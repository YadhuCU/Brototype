#include <stdio.h>

/*
limit = 4
   1
  212
 32123
4321234
*/

int main() {
  int limit;

  printf("Enter the limit: ");
  scanf("%d", &limit);

  for (int row = 1; row <= limit; row++) {
    // loop for the columns space
    for (int space = 1; space <= limit - row; space++) {
      printf("  ");
    }
    // loop for the columns 1, 21, 321, 4321
    for (int col = row; col >= 1; col--) {
      printf("%d ", col);
    }
    // loop for the columns 2, 23, 234
    for (int col = 2; col <= row; col++) {
      printf("%d ", col);
    }
    printf("\n");
  }

  return 0;
}
