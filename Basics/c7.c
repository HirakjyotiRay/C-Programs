// program to find the simple interest of the inputted values
#include <stdio.h>
int main()
{
  int p, n, r, I;
  printf("Enter the values of p,n and r : ");
  scanf("%d%d%d", &p, &n, &r);

  I = (p * n * r) / 100;
  
  printf("\n The simple interest for the given inputs of p,n and r is %d", I);

  return 0;
}