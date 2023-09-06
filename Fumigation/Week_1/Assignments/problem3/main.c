#include <stdio.h>

int main() {

  int P;          // Principal Amount
  float R, n, SI; // Interest Rate, Number of years, Simple Interest

  // taking input P from user
  printf("Enter the Principal Amount: ");
  scanf("%d", &P);

  // taking input R from user
  printf("Enter the Interest Rate: ");
  scanf("%f", &R);

  // taking input n from user
  printf("Enter Number of Years: ");
  scanf("%f", &n);

  SI = (P * R * n) / 100;

  printf("Simple Interest is : %.2f", SI);

  return 0;
}
