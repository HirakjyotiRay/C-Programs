// program to evaluate the given expressions using switch statement
// y = 1+x     if n=1
// y = 1+x/n   if n=2
// y = 1+x^n   if n=3
// y = 1+nx    if n>3 or n<1
#include <stdio.h>
#include <math.h>
int main() {
  int n,x,y;
  printf("Enter the value of x and n: ");
  scanf("%d%d",&x,&n);

  switch(n) {
    case 1:
    {
      y=1+x;
      break;
    }
    
    case 2:
    {
      y=(1+x)/n;
      break;
    }

    case 3:
    {
      y=1+pow(x,n);
      break;
    }

    default:
    {
      y=1+n*x;
      break;
    }
  }

  printf("The value of y is: %d",y);

  return 0;
}