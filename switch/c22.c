// Program which takes input of numbers from 1 to 7 and write or displays corresponding day of the week :
#include <stdio.h>
int main()
{
  int n;
  printf("\nEnter the number of the day you want to display.(Sunday is 1) : ");
  scanf("%d", &n);

  switch (n)
  {
  case 1:
  {
    printf("\nSunday");
    break;
  }

  case 2:
  {
    printf("\nMonday");
    break;
  }

  case 3:
  {
    printf("\nTuesday");
    break;
  }

  case 4:
  {
    printf("\nWednesday");
    break;
  }
  case 5:
  {
    printf("\nThursday");
    break;
  }
  case 6:
  {
    printf("\nFriday");
    break;
  }

  case 7:
  {
    printf("\nSaturday");
    break;
  }

  default:
  {
    printf("\nThere isn't any day as you entered.<3");
    break;
  }
  }

  printf("\n ");
  // this is just to add some space between the result and the statement in the terminal

  return 0;
}