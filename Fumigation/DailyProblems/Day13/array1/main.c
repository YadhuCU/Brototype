#include <stdio.h>
/*
Write a program to find the largest non-prime number in an unsorted array.
*/
int main() {

  int size, array[100], isPrime, largestNonPrime;

  printf("Ente the size of array: ");
  scanf("%d", &size);
  printf("Ente the values of array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  largestNonPrime = 0;
  for (int i = 0; i < size; i++) {
    isPrime = 1;
    if (array[i] < 2) {
      isPrime = 0;
    }
    for (int j = 2; j * j <= array[i]; j++) {
      if (array[i] % j == 0) {
        isPrime = 0;
        break;
      }
    }
    if (isPrime == 0) {
      if (largestNonPrime < array[i]) {
        largestNonPrime = array[i];
      }
    }
  }

  printf("%d", largestNonPrime);

  return 0;
}
