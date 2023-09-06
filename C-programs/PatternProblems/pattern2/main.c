#include <stdio.h>
/*

limit = 4
* * * *
* * *
* *
*

*/

int main() {
  int limit, i, j;

  printf("Enter the limit of new pattern: ");
  scanf("%d", &limit);

  for (i = 0; i < limit; i++) {
    for (j = 0; j < limit - i; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
