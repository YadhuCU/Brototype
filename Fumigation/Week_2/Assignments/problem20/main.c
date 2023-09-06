#include <stdio.h>

void evenPattern(int row) {
  for (int i = 1; i <= row * 2; i++) {
    for (int j = 1; j <= row * 2; j++) {
      if (i == j || j == 2 * row - i + 1) {
        printf("X ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
}
void oddPattern(int row) {
  for (int i = 1; i <= row * 2 - 1; i++) {
    for (int j = 1; j <= row * 2 - 1; j++) {
      if (i == j || j == 2 * row - i) {
        printf("X ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
}

int main() {

  char string[100];
  int i;

  printf("Enter the string. ");
  scanf("%s", string);

  for (i = 0; string[i] != '\0'; i++)
    ;

  if (i % 2 == 0) {
    evenPattern(3);
  } else {
    oddPattern(3);
  }

  return 0;
}
