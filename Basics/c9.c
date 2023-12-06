// program to swap two numbers without using a third variable
#include <stdio.h>
int main() {
  int num1,num2;

  printf("Enter the number 1: ");
  scanf("%d",&num1);
  printf("Enter the number 2: ");
  scanf("%d",&num2);

  // before swapping
  printf("The number 1 is: %d\n",num1);
  printf("The number 2 is: %d\n",num2);

  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;

  // after swapping
  printf("The number 1 is: %d\n",num1);
  printf("The number 2 is: %d\n",num2);

  return 0;
}