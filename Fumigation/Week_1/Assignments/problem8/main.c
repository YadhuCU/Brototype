#include <stdio.h>

int main() {

  int i, limit;
  int sum = 0;

  // taking input from user - limit
  printf("Enter a limit: ");
  scanf("%d", &limit);

  for (i = 1; i < limit; i++) {
    // checking it's odd number
    if (i % 2 == 1) {
      // adding to the existing variable 'sum'
      sum += i;
    }
  }

  printf("Sum of odd numbers = %d", sum);

  return 0;
}
