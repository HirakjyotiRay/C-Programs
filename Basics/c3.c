// program to find the area of a triangle using S
#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c, s;
  float area;

  printf("Enter the sides of the triangle : ");
  scanf("%d%d%d", &a, &b, &c);

  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));

  printf("\n The area of the triangle is %.2f", area);
  
  return 0;
}