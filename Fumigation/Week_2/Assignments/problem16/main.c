#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printVerticalZigzag(char str[], int numRows) {
  int len = strlen(str);
  char zigzag[numRows][len];
  int row = 0, col = 0;
  int direction = 1; // 1 for downward, -1 for upward
  // Initialize the zigzag array with spaces
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < len; j++) {
      zigzag[i][j] = ' ';
    }
  }
  // Fill the zigzag array with characters from the input string
  for (int i = 0; i < len; i++) {
    zigzag[row][col] = str[i];
    if (row == numRows - 1) {
      direction = -1; // Change direction to upward when reaching the bottom row
    } else if (row == 0) {
      direction = 1; // Change direction to downward when reaching the top row
    }
    row += direction;
    col++;
  }
  // Print the zigzag array
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < len; j++) {
      printf("%c", zigzag[i][j]);
    }
    printf("\n");
  }
}
int main() {
  char str[100];
  int numRows;
  setbuf(stdout, NULL);
  printf("Enter a string: ");
  scanf("%s", str);
  printf("Enter the number of rows: ");
  scanf("%d", &numRows);
  printVerticalZigzag(str, numRows);
  return 0;
}
