// program to find the compound interest for the given inputs of p,n and r
#include <stdio.h>
#include <math.h>
int main()
{
  float p, n, r, i;

  printf("Enter p,n and r : ");
  scanf("%f%f%f", &p, &n, &r);

  i = p * pow(1 + r / 100, n) - p;
  
  printf("\n The compound interest is %f", i);

  return 0;
}