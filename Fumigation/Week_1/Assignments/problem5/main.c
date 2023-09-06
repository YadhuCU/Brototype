#include <stdio.h>

int main() {

  float mark;

  // taking input from user - mark.
  printf("Enter your mark: ");
  scanf("%f", &mark);

  // range(0-49) - faild.
  if (mark >= 0 && mark < 50) {
    printf("Failed.");
    // range(50-59) - E.
  } else if (mark >= 50 && mark < 60) {
    printf("Grade is E");
    // range(60-69) - D.
  } else if (mark >= 60 && mark < 70) {
    printf("Grade is D");
    // range(70-79) - C.
  } else if (mark >= 70 && mark < 80) {
    printf("Grade is C");
    // range(80-89) - B.
  } else if (mark >= 80 && mark < 90) {
    printf("Grade is B");
    // range(90-100) - A.
  } else if (mark >= 90 && mark <= 100) {
    printf("Grade is A");
    // invalid condition.
  } else {
    printf("Please Enter valid mark.");
  }

  return 0;
}
