#include <stdio.h>

int main() {

  int num, sum, product;

  printf("Enter the number : ");
  scanf("%d", &num);

  int temp = num;
  sum = 0;
  product = 1;

  while (temp != 0) {
    int reminder = temp % 10;
    sum += reminder;
    product *= reminder;
    temp /= 10;
  }

  if (sum == product) {
    printf("Product and Sum of %d is same.", num);
  } else {
    printf("Product and Sum of %d is not same.", num);
  }

  return 0;
}
