#include <stdio.h>
/*
1
3 2
4 5 6
10 9 8 7

*/

int main() {

  int i, j, k, row;
  int num = 1;

  printf("Enter the row: ");
  scanf("%d", &row);

  for (i = 1; i <= row; i++) {
    for (j = 1; j <= i; j++) {
      if (i % 2 != 0) {
        printf("%d ", num);
        num++;
      } else {
        printf("%d ", num);
        num--;
      }
    }
    if (i % 2 != 0) {
      num = num + i;
    } else {
      num = i + 1;
    }
    printf("\n");
  }

  return 0;
}
