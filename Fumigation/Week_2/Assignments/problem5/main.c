#include <stdio.h>
#include <string.h>

// Function to print subsets of a string
void printSubsets(char str[], int index, char subset[], int subsetLen) {
  // Base case: when the whole string is processed
  if (index == strlen(str)) {
    subset[subsetLen] = '\0';
    printf("{ %s }\n", subset);
    return;
  }

  // Exclude the current character
  printSubsets(str, index + 1, subset, subsetLen);

  // Include the current character
  subset[subsetLen] = str[index];
  printSubsets(str, index + 1, subset, subsetLen + 1);
}

int main() {
  char str[100];
  printf("Enter the string: ");
  scanf("%s", str);

  int strLen = strlen(str);
  char subset[strLen]; // To store subsets
  printSubsets(str, 0, subset, 0);

  return 0;
}
