#include <stdio.h>

int main() {
  int x;                 // uninitialized variable
  printf("x: %d\n", x);  // undefined behavior, x is uninitialized
  return 0;
}
