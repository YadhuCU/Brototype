#include <complex.h>
#include <stdio.h>

int fibonacci(int);
int main() {

  int num, fib;
  printf("Enter the number: ");
  scanf("%d", &num);

  fib = fibonacci(num);
  printf("%d fibonacci : %d", num, fib);

  return 0;
}

int fibonacci(int num) {
  if (num <= 1) {
    return num;
  } else {
    return fibonacci(num - 1) + fibonacci(num - 2);
  }
}

/*
 */
