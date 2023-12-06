// program to find the area of a triangle
#include <stdio.h>
int main()
{
  float base, height, area;
  printf("Enter the base and height of the triangle respectively : ");
  scanf("%f%f", &base, &height);

  area = (base + height) / 2;
  printf("\n The area of the triangle is %.2f", area);

  return 0;
}