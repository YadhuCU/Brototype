#include <stdio.h>

int main() {

  int num, temp, order;
  int sum = 0;

  printf("Enter the number: ");
  scanf("%d", &num);

  temp = num;

  order = 0;
  while (temp != 0) {
    order++;
    temp /= 10;
  }

  temp = num;
  while (temp != 0) {
    int multiple = 1;

    for (int i = 1; i <= order; i++) {
      multiple *= temp % 10;
    }

    sum += multiple;
    temp /= 10;
  }

  if (num == sum && num >= 0) {
    printf("Armstrong number.");
  } else {
    printf("Not Armstrong number.");
  }

  return 0;
}
