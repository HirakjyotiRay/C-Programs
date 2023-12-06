// program to swap two numbers using a third variable
#include <stdio.h>
int main() {
  int num1,num2,temp;
  printf("Enter number 1: ");
  scanf("%d",&num1);
  printf("Enter number 2: ");
  scanf("%d",&num2);

  // before swapping
  printf("The number 1 is: %d\n", num1);
  printf("The number 2 is: %d\n", num2);

  temp=num1;
  num1=num2;
  num2=temp;

  // after swapping
  printf("The number 1 is: %d\n",num1);
  printf("The number 2 is: %d\n",num2);

  return 0;
}