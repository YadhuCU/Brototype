#include <stdio.h>
#include <stdlib.h>

int main() {

  int i, j, size, array[100], freq[100];
  int count;

  printf("Enter the number of elements: ");
  scanf("%d", &size);

  printf("Enter the values: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
    freq[i] = -1;
  }

  for (i = 0; i < size; i++) {
    count = 0;
    for (j = 0; j < size; j++) {
      if (array[i] == array[j]) {
        count++;
        freq[j] = 0;
      }
    }
    if (freq[i] == 0) {
      freq[i] = count;
    }
  }

  printf("Repeating elements: ");
  for (i = 0; i < size; i++) {
    if (freq[i] > 1) {
      printf("%d ", array[i]);
    }
  }

  return 0;
}
