// program to calculate the surface area and the volume of a cube
#include <stdio.h>
#include <math.h>
int main()
{
  int side, sa, volume;

  printf("Enter the value of the side of the cube : ");
  scanf("%d", &side);

  sa = 6 * side * side;
  volume = pow(side, 3);
  
  printf("\n The surface area of the cube is %d and the volume of the cube is %d", sa, volume);

  return 0;
}