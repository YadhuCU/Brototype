#include <stdio.h>

int main() {
  // declaring the variables
  int num1, num2, sum;
  printf("Enter 2 numbers");
  // take the inputs from user
  scanf("%d%d", &num1, &num2);
  // adding and storing the value in 'sum' variable
  sum = num1 + num2;
  // outputing the variable
  printf("The sum of %d and %d is %d", num1, num2, sum);
  return 0;
}
