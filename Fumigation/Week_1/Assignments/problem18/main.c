#include <stdio.h>

int main() {

  float grade;
  float wTest, lExam, assg;

  printf("Enter the marks.\n");

  printf("Written test = ");
  scanf("%f", &wTest);

  printf("Lab Exams = ");
  scanf("%f", &lExam);

  printf("Assignments = ");
  scanf("%f", &assg);

  grade = (wTest * 70) / 100 + (lExam * 20) / 100 + (assg * 10) / 100;
  printf("Grade is %.1f", grade);

  return 0;
}
