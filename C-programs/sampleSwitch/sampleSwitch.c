#include <stdio.h>

int main() {
  // switch statement
  int choice;

  printf("Order Menu\n");
  printf("1.Vanilla Shake\n2.Chocolate Shake\n3.Oreo Shake\n4.Sharjah Shake\n");
  printf("Enter your choice. ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("You have selected Vanilla Shake. ");
    break;
  case 2:
    printf("You have selected Chocolate Shake. ");
    break;
  case 3:
    printf("You have selected Oreo Shake. ");
    break;
  case 4:
    printf("You have selected Sharjah Shake. ");
    break;
  default:
    printf("You have selected the wrong one. ");
  }
  return 0;
}
