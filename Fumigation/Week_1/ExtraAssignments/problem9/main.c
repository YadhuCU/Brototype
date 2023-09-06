#include <stdio.h>

int main() {
  int asciiCode;
  char ch;

  printf("Enter the character: ");
  scanf("%c", &ch);

  asciiCode = ch;

  printf("ASCII code of %c is %d.", ch, asciiCode);

  return 0;
}
