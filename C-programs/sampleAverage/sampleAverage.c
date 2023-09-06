#include <math.h>
#include <stdio.h>

int main() {
  float num1, num2, num3, average;
  printf("Enter 3 numbers: ");
  scanf("%f%f%f", &num1, &num2, &num3);
  average = (num1 + num2 + num3) / 3;
  printf("The average is %f ", average);
  return 0;
}
