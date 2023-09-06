#include <stdio.h>

int main() {

  int i, j, k, length, newLength;
  int isPrime = 1;
  int array[100];

  printf("Enter the size of the array: ");
  scanf("%d", &length);

  printf("Enter the elements: ");
  for (i = 0; i < length; i++) {
    scanf("%d", &array[i]);
  }

  i = 0;

  while (i != length - 1) {
    if (array[i] < 2) {
      isPrime = 0;
    } else {
      for (j = 2; j * j <= array[i]; j++) {
        if (array[j] % i == 0) {
          isPrime = 0;
          break;
        }
      }
    }
    // 2 3 5 6 7 8;

    if (isPrime == 1) {
      i++;
    } else {
      if (i == length - 1) {
        newLength = length;
        break;
      } else if (length - i == 2) {
        newLength = length - 2;
        break;
      } else if (length - i == 1) {
        newLength = length - 1;
        break;
      } else {
        // 2 3 4 5 7 8 9
        // 2 3 4

        for (k = i; k < length; k++) {
          array[k + 1] = array[k + 4];
        }
        newLength = length - 3;
        break;
      }
    }
  }

  printf("New Array: ");

  for (i = 0; i < newLength; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
