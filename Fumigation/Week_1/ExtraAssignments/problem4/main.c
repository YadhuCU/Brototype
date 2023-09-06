#include <stdio.h>

void stringLength();
void stringConcatenation();
void stringReverse();

int main() {

  int option;

  do {
    printf("1.String length.\n");
    printf("2.String Concatenation.\n");
    printf("3.String Reverse\n");
    printf("4.Exit.\n");
    printf("Select the you choice: ");
    scanf("%d", &option);

    switch (option) {
    case 1:
      stringLength();
      break;
    case 2:
      stringConcatenation();
      break;
    case 3:
      stringReverse();
      break;
    case 4:
      printf("Exiting...");
      break;
    default:
      printf("Invalid Option.");
      break;
    }

  } while (option != 4);

  return 0;
}

void stringLength() {
  int size = 0;
  char string[100];

  printf("Enter your string: ");
  scanf("%s", string);

  while (string[size] != '\0') {
    size++;
  }
  printf("%d is the length of %s\n", size, string);
}

void stringConcatenation() {
  int i, j;
  char string1[100], string2[100], string[100];

  printf("Enter your string 1 : ");
  scanf("%s", string1);
  printf("Enter your string 2 : ");
  scanf("%s", string2);

  i = 0;
  j = 0;

  while (string1[i] != '\0') {
    string[i] = string1[i];
    i++;
    j++;
  }

  i = 0;
  while (string2[i] != '\0') {
    string[j] = string2[i];
    i++;
    j++;
  }
  string[j] = '\0';

  printf("New string: %s\n", string);
}

void stringReverse() {
  int i, j, length;
  char string[100], result[100], temp;

  printf("Enter the string: ");
  scanf("%s", string);

  i = 0;
  while (string[i] != '\0') {
    i++;
  }
  length = i;
  j = length - 1;
  i = 0;

  while (j > i) {
    temp = string[i];
    string[i] = string[j];
    string[j] = temp;
    j--;
    i++;
  }
  printf("Revarse string: %s\n", string);
}
