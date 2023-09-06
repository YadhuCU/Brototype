#include <stdio.h>

/*
     1
   1 2 1
  1 3 3 1
 1 4 6 4 1
1 5 10 10 1

r1 = [1]
r2 = [1,2,1]
r3 = [1, 3, 3, 1]
r4 = [1 4, 6, 4, 1]
r5 = [1, 5, 10, 10, 1]

cArray = []
pArray = [0, 1, 0, 0, .....]

*/

int main() {

  int i, j, k, m, row;
  int cArray[100];
  int pArray[100] = {0};

  printf("Enter the row: ");
  scanf("%d", &row);

  pArray[1] = 1;

  for (i = 1; i <= row; i++) {
    for (m = 1; m <= row - i; m++) {
      printf(" ");
    }
    for (j = 1; j <= i; j++) {
      cArray[j] = pArray[j] + pArray[j - 1];
    }
    for (k = 1; k <= i; k++) {
      printf("%d ", cArray[k]);
      pArray[k] = cArray[k];
    }
    printf("\n");
  }

  return 0;
}
