#include <stdio.h>

int main() {

  int row;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++) {
    int temp = 1;
    for (int j = 1; j <= i * 2 - 1; j++) {
      if (j >= i) {
        printf("%d ", temp);
        temp--;
      } else {
        printf("%d ", temp);
        temp++;
      }
    }
    printf("\n");
  }

  return 0;
}
