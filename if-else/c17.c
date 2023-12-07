// program to calculate the commission according to the sales
#include <stdio.h>
#include <math.h>
int main()
{
  int sales, comm;
  printf("Enter the amount of sales : ");
  scanf("%d", &sales);
  if (sales <= 500)
  {
    comm = sales * 5 / 100;
  }
  else if (sales <= 2000)
  {
    comm = sales * 0.1;
  }
  else if (sales <= 5000)
  {
    comm = sales * 0.15;
  }
  else
  {
    comm = sales * 0.2;
  }
  printf("\n Commision = %d", comm);

  return 0;
}