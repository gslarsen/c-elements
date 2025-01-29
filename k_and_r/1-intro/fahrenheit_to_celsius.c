#include <stdio.h>

int main()
{
  float fahr = 0;
  int upper = 300;
  int step = 20;

  printf("Fahrenheit\tCelsius\n");
  while (fahr <= upper)
  {
    float celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%5.1f\t\t%5.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}