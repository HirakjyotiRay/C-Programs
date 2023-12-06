// program to convert temerature from fahrenheit to celcius
#include <stdio.h>
int main()
{
  float c, f;

  printf("Enter the amount of temperature in fahrenheit : ");
  scanf("%f", &f);

  c = 5 * (f - 32) / 9;
  
  printf("\n The temperature in celcius is %f", c);

  return 0;
}