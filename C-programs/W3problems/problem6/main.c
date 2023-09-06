#include <stdio.h>

int main() {

  int size = 4;
  int array[size];
  int count = 0;
  int flag = 1;

  printf("input 4 elements in the array: \n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
  // 1 2 3 1

  printf("[");
  for (int i = 0; i < size; i++) {
    count = 0;
    flag = 1;
    for (int j = 0; j < size; j++) {
      if (array[i] == array[j]) {
        count++;
        if (count >= 2) {
          count = 0;
          flag = 0;
          break;
        }
      }
    }
    if (flag == 1) {
      printf("%d ", array[i]);
    }
  }
  printf("]");

  return 0;
}
