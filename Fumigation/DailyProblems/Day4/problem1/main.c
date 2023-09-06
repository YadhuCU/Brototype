#include <stdio.h>
/*
Write a program to print the multiplication table of given number
Accept an input from the user and display its multiplication table
*/
int main() {
  int num, i, sum = 0;

  printf("Enter a number ");
  scanf("%d", &num);

  for (i = 1; i <= 10; i++) {
    sum = num * i;
    printf("%d x %d = %d\n", i, num, sum);
  }
  return 0;
}
