#include <stdio.h>

int main() {
  int x = 20;
  int y = -11;
  printf("%d + %d = %d\n", x, y, x + y);  // addition
  printf("%d - %d = %d\n", x, y, x - y);  // subtraction
  printf("%d * %d = %d\n", x, y, x * y);  // multiplication
  // Note: integer division truncates the decimal part
  printf("%d / %d = %d\n", x, y, x / y);  // division
  // modulus works with integers only and will only be negative if x is negative
  printf("%d %% %d = %d\n", x, y, x % y);
  return 0;
}