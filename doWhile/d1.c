// program to print the sum of n natural numbers using do-while loop
#include <stdio.h>
int main() {
  int n,sum=0,i=1;
  printf("Enter the limit: ");
  scanf("%d",&n);

  do{
    sum=sum+i;
    i++;
  }
  while(i<=n);

  printf("The sum of the natural numbers up to %d is: %d\n",n,sum);

  return 0;
}