#include <stdio.h>

int main() {
  float aIncome, tax;
  printf("Enter the annual income: ");
  scanf("%f", &aIncome);

  if (aIncome <= 250000) {
    printf("No Tax.");
  } else if (aIncome > 250000 && aIncome <= 500000) {
    tax = aIncome * 0.05;
    printf("Income tax amount = %.2f", tax);
  } else if (aIncome > 500000 && aIncome <= 1000000) {
    tax = aIncome * 0.2;
    printf("Income tax amount = %.2f", tax);
  } else if (aIncome > 1000000 && aIncome <= 5000000) {
    tax = aIncome * 0.3;
    printf("Income tax amount = %.2f", tax);
  }

  return 0;
}
