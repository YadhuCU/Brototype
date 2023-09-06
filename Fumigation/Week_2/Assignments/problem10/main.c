#include <stdio.h>

int main() {

  float i, num;

  printf("Enter a number: ");
  scanf("%f", &num);

  for (i = 0.01; i * i <= num; i += 0.01)
    ;

  printf("%.2f", i);

  return 0;
}
