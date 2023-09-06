#include <stdio.h>

int main() {
  // using nested elseif statement
  int num1, num2, choice, result;
  printf("Enter 2 numbers: ");
  scanf("%d%d", &num1, &num2);

  printf("Select the operation \n");
  printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
  scanf("%d", &choice);

  if (choice == 1) {
    result = num1 + num2;
    printf("Result is %d ", result);
  } else if (choice == 2) {
    result = num1 - num2;
    printf("Result is %d ", result);
  } else if (choice == 3) {
    result = num1 * num2;
    printf("Result is %d ", result);
  } else if (choice == 4) {
    result = num1 / num2;
    printf("Result is %d ", result);
  } else {
    printf("Pick the right option");
  }
  return 0;
}
