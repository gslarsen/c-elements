#include <stdio.h>

int main()
{
  int temp;
  printf("Enter the temperature in Fahrenheit to closest integer: ");
  scanf("%d", &temp);

  if (temp >= 70)
  {
    printf("It's hot!\n");
  }
  else if (temp >= 30 && temp < 70)
  {
    printf("It's mild\n");
  }
  else
  {
    printf("It's cold!\n");
  }
  return 0;
}