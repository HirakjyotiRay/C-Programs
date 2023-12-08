// Program a simple calculator using switch statement
#include <stdio.h>
#include <math.h>
int main()
{
  char op;
  float a, b, res;
  printf("\nEnter the two numbers : ");
  scanf("%f%f", &a, &b);
  printf("\nEnter an operator (+,-,*,/) : ");
  fflush(stdin);
  scanf("%c", &op);
  switch (op)
  {
  case '+':
  {
    res = a + b;
    printf("\nResult is  : %.2f", res);
    break;
  }

  case '-':
  {
    res = a - b;
    printf("\nResult is : %.2f", res);
    break;
  }

  case '*':
  {
    res = a * b;
    printf("\nResult is : %.2f", res);
    break;
  }

  case '/':
  {
    if (b > 0)
    {
      res = a / b;
      printf("\nResult is : %.2f", res);
    }
    else if (b == 0)
    {
      printf("\nError!!!");
    }
    break;
  }

    default:
    {
      printf("\nEnter a valid operator.");
      break;
    }
  }

  return 0;
}