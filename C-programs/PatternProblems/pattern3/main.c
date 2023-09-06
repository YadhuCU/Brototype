#include <stdio.h>

/*

limit = 4
   *
  * *
 * * *
* * * *

*/

int main() {
  int limit, i, j, k;

  printf("Enter your limit ");
  scanf("%d", &limit);

  for (i = 1; i <= limit; i++) {
    for (j = i; j < limit; j++) {
      printf(" ");
    }
    for (k = 0; k < i; k++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
