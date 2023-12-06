// program to convert temperature from celcius to fahrenheit
#include <stdio.h>
int main()
{
  float c, f;

  printf("Enter the amount of temperature in celcius : ");
  scanf("%f", &c);

  f = (9 * c) / 5 + 32;
  
  printf("\n The temperature in fahrenheit is %f", f);

  return 0;
}