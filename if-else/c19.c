// program to print the grade for the marks obtained
// 80-100 Honours
// 60-79 First Div
// 50-59 Second Div
// 0-49 Fail
#include <stdio.h>
int main() {
  int obtMarks;
  printf("Enter the marks obtained: ");
  scanf("%d",&obtMarks);

  if(obtMarks>=80 && obtMarks<=100) {
    printf("Honours.\n");
  } else if(obtMarks>=60 && obtMarks<=79) {
    printf("First Division.\n");
  } else if(obtMarks>=50 && obtMarks<=59) {
    printf("Second Division.\n");
  } else if(obtMarks>=0 && obtMarks<=49) {
    printf("Fail.\n");
  } else {
    printf("Enter a valid number!");
  }

  return 0;
}