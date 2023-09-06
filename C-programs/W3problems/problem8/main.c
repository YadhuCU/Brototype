#include <stdio.h>

int main() {

  int array[100], frequency[100];
  int i, j, size, count;

  printf("Enter the size of array: ");
  scanf("%d", &size);

  printf("Enter the values for the array");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
    frequency[i] = -1;
  }

  printf("The Frequency of all elements: \n");

  for (i = 0; i < size; i++) {
    count = 1;
    for (j = i + 1; j < size; j++) {
      if (array[i] == array[j]) {
        count++;
        frequency[j] = 0;
      }
    }
    if (frequency[i] != 0) {
      frequency[i] = count;
    }
  }

  for (i = 0; i < size; i++) {
    if (frequency[i] != 0) {
      printf("%d occurs %d times\n", array[i], frequency[i]);
    }
  }

  return 0;
}
