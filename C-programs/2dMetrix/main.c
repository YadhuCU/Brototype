#include <stdio.h>

int main() {
  int row, col;
  printf("Enter the size of the row: ");
  scanf("%d", &row);
  printf("Enter the size of the col: ");
  scanf("%d", &col);

  int twoDimensionalArray[row][col];

  printf("Enter the values for the array: ");

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &twoDimensionalArray[i][j]);
    }
  }

  printf("2 Dimensioal array is: \n");

  for (int i = 0; i < row; i++) {
    printf("[ ");
    for (int j = 0; j < col; j++) {
      printf("%d ", twoDimensionalArray[i][j]);
    }
    printf("] \n");
  }
  return 0;
}
