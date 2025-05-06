#include <stdio.h>

int main() {
  int x = 15;
  int y = 2;
  double z = x / y;  // Implicit type casting

  // Implicit type casting
  printf("%g\n", z);  // 7

  // Explicit type casting
  z = (double)x / y;
  printf("%g\n", z);  // 7.5

  return 0;
}