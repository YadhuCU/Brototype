#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(char *);
int main() {
  char string[100];
  printf("Enter the word to check if it\'s weather palindrome or not: ");
  // taking user input
  fgets(string, sizeof(string), stdin);

  // removing the printNewLine
  string[strcspn(string, "\n")] = '\0';

  // calling the function
  if (isPalindrome(string)) {
    printf("Palindrome");
  } else {
    printf("Not Palindrome");
  }

  return 0;
}

// function isPalindrome
bool isPalindrome(char *string) {
  int left = 0;
  int right = strlen(string) - 1;

  // checking first and last element of the string is same
  // while looping, the checking element aproaches the middle term
  while (left < right) {
    if (string[left] != string[right]) {
      // returning false because it's not equal
      return false;
    }
    left++;
    right--;
  }
  // if the loop completes then it's palindrome then return the true
  return true;
}
