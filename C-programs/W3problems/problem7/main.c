#include <stdio.h>

int main() {

  int size;
  int i, j, k;
  int temp;

  printf("Enter the size of arrays: ");
  scanf("%d", &size);

  int array1[size], array2[size], mergeArray[size * 2];

  printf("Enter the values for array1: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array1[i]);
  }
  printf("Enter the values for array2: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array2[i]);
  }

  // first merge the 2 arrays and sort it

  // merging arrays
  for (i = 0; i < size * 2; i++) {
    if (i < size) {
      mergeArray[i] = array1[i];
    } else {
      mergeArray[i] = array2[i - size];
    }
  }

  // sorting array
  for (i = 0; i < (size * 2) - 1; i++) {
    for (j = i + 1; j < (size * 2); j++) {
      if (mergeArray[i] <= mergeArray[j]) {
        temp = mergeArray[i];
        mergeArray[i] = mergeArray[j];
        mergeArray[j] = temp;
      }
    }
  }

  // printing the array
  for (i = 0; i < size * 2; i++) {
    printf("%d ", mergeArray[i]);
  }

  return 0;
}
