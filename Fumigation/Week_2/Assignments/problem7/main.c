#include <stdio.h>

int main() {

  int i, j, limit, flag;

  printf("Enter the limit: ");
  scanf("%d", &limit);

  if (limit < 2) {
    printf(
        "All prime numbers are greater or equal to 2, your limit is below 2");
  } else {
    printf("Prime numbers are : ");
    for (i = 2; i <= limit; i++) {
      flag = 1;
      for (j = 2; j * j <= i; j++) {
        if (i % j == 0) {
          flag = 0;
        }
      }
      if (flag == 1) {
        printf("%d ", i);
      }
    }
  }

  return 0;
}
