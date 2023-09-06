#include <stdio.h>
/*
Write a program to show the grade obtained by a student after he/she enters
their total mark percentage. Program should accept an input from the user and
display their grade as follows Mark Grade < 90
A
80-89
B
70-79
C
60-69
D
50-59
E
< 50
Failed

*/

int main() {

  float mark;

  printf("Enter your mark: ");
  scanf("%f", &mark);

  if (mark >= 90 && mark <= 100) {
    printf("A");
  } else if (mark >= 80 && mark <= 89) {
    printf("B");
  } else if (mark >= 70 && mark <= 79) {
    printf("C");
  } else if (mark >= 60 && mark <= 69) {
    printf("D");
  } else if (mark >= 50 && mark <= 59) {
    printf("E");
  } else if (mark >= 0 && mark < 50) {
    printf("Failed.");
  } else {
    printf("Enter the correct mark..!");
  }

  return 0;
}
