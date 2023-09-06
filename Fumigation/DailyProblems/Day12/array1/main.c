#include <stdio.h>
/*
Write a program to find the unique largest prime number in an array.
1.find prime.
2.count=1.
3.largest of them
*/
int main() {

  int size, count, large, isPrime, array[100];

  printf("Enter the size of arry");
  scanf("%d", &size);

  printf("Enter the values of arry");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  large = 0;
  for (int i = 0; i < size; i++) {
    isPrime = 1;
    isPrime = (array[i] < 2) ? 0 : 1;

    for (int j = 2; j * j <= array[i]; j++) {
      if (array[i] % j == 0) {
        isPrime = 0;
        break;
      }
    }

    if (isPrime == 1) {
      count = 0;
      for (int j = 0; j < size; j++) {
        if (array[i] == array[j])
          count++;
      }
      if (count == 1 && array[i] > large)
        large = array[i];
    }
  }

  printf("Unique and largest prime: %d", large);

  return 0;
}
