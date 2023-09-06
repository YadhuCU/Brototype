#include <stdio.h>

int main() {

  int lenght = 0;
  char string[100];
  int flag = 1;

  int left, right;

  printf("Enter a string: ");
  scanf("%s", string);

  // checking the lenght of the string.
  while (string[lenght] != '\0') {
    lenght++;
  }

  left = 0;
  right = lenght - 1;

  // checking
  while (left < right) {
    if (string[left] != string[right]) {
      flag = 0;
      break;
    }
    left++;
    right--;
  }

  if (flag == 0) {
    printf("Entered string is not a palindrome");
  } else {
    printf("Entered string is palindrome");
  }
  return 0;
}
