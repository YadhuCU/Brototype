#include <stdio.h>
#include <string.h>

int main() {

  char string[100];
  int count, maxCount, minCount;
  char maxChar, minChar;

  printf("Enter the string: ");
  scanf("%s", string);

  maxCount = 0;
  minCount = strlen(string);
  for (int i = 0; i < strlen(string); i++) {
    count = 0;
    for (int j = 0; j < strlen(string); j++) {
      if (string[i] == string[j]) {
        count++;
      }
    }
    if (count > maxCount) {
      maxCount = count;
      maxChar = string[i];
    }
    if (count < minCount) {
      minCount = count;
      minChar = string[i];
    }
  }
  printf("Maximum occuring character in string : %c and %d times \n", maxChar,
         maxCount);
  printf("Mininum occuring character in string : %c and %d times ", minChar,
         minCount);

  return 0;
}
