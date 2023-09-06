#include <stdio.h>

int compareString(char *, char *);

int main() {

  char string1[100], string2[100];
  int result;

  printf("Enter string 1: ");
  scanf("%s", string1);

  printf("Enter string 2: ");
  scanf("%s", string2);

  result = compareString(string1, string2);

  if (result == 1) {
    printf("Same");
  } else {
    printf("Not Same");
  }

  return 0;
}

int compareString(char string1[], char string2[]) {
  int length1 = 0, length2 = 0;

  while (string1[length1] != '\0') {
    length1++;
  }

  while (string2[length2] != '\0') {
    length2++;
  }

  if (length1 != length2) {
    return 0;
  }
  for (int i = 0; i < length1; i++) {
    if (string1[i] != string2[i]) {
      return 0;
    }
  }
  return 1;
}
