#include <stdio.h>

/*
Write a program to print the following pattern (hint: use nested loop)
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

int main() {
  int limit = 5, i, j;

  for (i = 1; i <= limit; i++) {
    for (j = 0; j < i; j++) {
      printf("%d ", j + 1);
    }
    printf("\n");
  }

  return 0;
}
