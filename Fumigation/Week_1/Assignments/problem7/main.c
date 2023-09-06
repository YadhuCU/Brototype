#include <stdio.h>

int main() {

  int num;
  int i;

  // take input from user - num.
  printf("Enter a number: ");
  scanf("%d", &num);

  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", i, num, num * i);
  }

  return 0;
}
