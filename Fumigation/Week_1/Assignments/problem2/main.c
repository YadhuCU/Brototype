#include <stdio.h>

int main() {

  int num1;
  float num2, sum;

  // input the num1 from user
  printf("Enter Number 1: ");
  scanf("%d", &num1);

  // input the num2 from user
  printf("Enter Number 2: ");
  scanf("%f", &num2);

  // adding num1 and num2
  sum = num1 + num2;

  printf("Sum of 2 numbers is : %f", sum);
}
