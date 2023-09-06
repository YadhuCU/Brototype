#include <stdio.h>

int main() {

  float mark;

  // taking input from user
  printf("Enter your mark: ");
  scanf("%f", &mark);

  // range(0-50) - failed
  if (mark >= 0 && mark < 50) {
    printf("Failed.");
    // range(50-100) - passed
  } else if (mark >= 50 && mark <= 100) {
    printf("Passed.");
    // invalid mark
  } else {
    printf("Please Enter valid mark. ");
  }

  return 0;
}
