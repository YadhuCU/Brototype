#include <stdio.h>

int main() {
  int num1, num2;
  printf("Enter 2 numbers: ");
  scanf("%d%d", &num1, &num2);

  if (num1 > num2) {
    printf("Larger number is %d", num1);
  } else {
    printf("Larger number is %d", num2);
  }
  return 0;
}
