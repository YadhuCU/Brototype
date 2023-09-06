#include <stdio.h>

void printWord(char[], int);

int main() {
  int num = 8;
  char string[100];

  printf("Enter the word: ");
  scanf("%s", string);

  printWord(string, num);

  return 0;
}

void printWord(char *string, int num) {

  if (num <= 0) {
    return;
  }
  printf("%s\n", string);
  printWord(string, num - 1);
}
