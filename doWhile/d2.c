// program to find the sum of all odd integers between 1 and n
#include <stdio.h>
int main() {
  int n,sum=0,i=1;
  printf("Enter the limit: ");
  scanf("%d",&n);

  do
  {
    sum=sum+i;
    i=i+2;
  } while (i<=n);
  
  printf("The sum of all odd integers between 1 and %d is: %d\n",n,sum);

  return 0;
}