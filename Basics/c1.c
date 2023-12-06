// program to find sum and product of two numbers
#include <stdio.h>
int main(){
  int num1,num2,sum=0,prod=0;
  printf("Enter two numbers: ");
  scanf("%d%d",&num1,&num2);
  
  sum=num1+num2;
  prod=num1*num2;

  printf("The sum of  %d and %d is %d\n",num1,num2,sum);
  printf("The producdt of %d and %d is %d\n",num1,num2,prod);

  return 0;
}