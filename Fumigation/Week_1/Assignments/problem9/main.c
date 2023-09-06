#include <stdio.h>

int main() {

  int n = 5; // the size of the pattern
  int i, j;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}
