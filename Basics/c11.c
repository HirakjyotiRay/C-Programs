// program to find the sum and average of 5 numbers taken fromm the user
#include <stdio.h>
int main()
{
  int n1, n2, n3, n4, n5, sum;
  float average;

  printf("Enter any 5 numbers : ");
  scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

  sum = n1 + n2 + n3 + n4 + n5;
  average = sum / 5;

  printf("\n The sum of the 5 numbers is %d and the average is %.2f", sum, average);
  
  return 0;
}