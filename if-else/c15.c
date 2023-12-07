// program to find biggest among three numbers using if-else statement
#include <stdio.h>
int main()
{
  int a, b, c, big;
  printf("\nEnter the numbers: ");
  scanf("%d%d%d", &a, &b, &c);

  if (a > b)
    if (a > c)
    {
      big = a;
    }
    else
    {
      big = c;
    }
  else if (b > c)
  {
    big = b;
  }
  else
  {
    big = c;
  }

  printf("\nBiggest numer is %d", big);

  return 0;
}