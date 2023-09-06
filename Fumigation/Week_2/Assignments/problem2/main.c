#include <stdio.h>

int main() {

  int array[100];
  int size, count;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter the values of the array: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (int i = 0; i < size; i++) {
    count = 0;
    for (int j = 0; j < size; j++) {
      if (array[i] == array[j]) {
        if (i > j) {
          break;
        } else {
          count++;
        }
      }
    }
    if (count != 0) {
      printf("%d occures %d times\n", array[i], count);
    }
  }

  return 0;
}
