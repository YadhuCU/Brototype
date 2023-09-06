#include <stdio.h>
/*

limit = 4
*
* *
* * *
* * * *

*/

int main() {
  int limit, i, j;

  printf("Enter your limit: ");
  scanf("%d", &limit);

  for (i = 1; i <= limit; i++) {
    for (j = 0; j < i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
