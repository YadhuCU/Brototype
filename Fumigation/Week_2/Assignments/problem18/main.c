#include <math.h>
#include <stdio.h>

int main() {

  int row;

  printf("Enter the size of row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= i; j++) {
      printf("X \n");
    }
    for (int j = 1; j <= i; j++) {
      printf("_ ");
    }
    for (int j = 1; j <= pow(2, i); j++) {
      printf("X ");
    }
    printf("\n");
  }

  return 0;
}
