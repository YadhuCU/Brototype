#include <stdio.h>

/*

Write a program to check whether a student has passed or failed in a subject
after he or she enters their mark (pass mark for a subject is 50 out of 100).
Program should accept an input from the user and output a message as “Passed” or
“Failed” Variable Data type mark float

*/
int main() {

  float mark;

  printf("Enter your mark: ");
  scanf("%f", &mark);

  if (mark >= 50 && mark <= 100) {
    printf("Passed");
  } else if (mark >= 0 && mark < 50) {
    printf("Failed");
  } else {
    printf("Enter the correct mark..!");
  }

  return 0;
}
