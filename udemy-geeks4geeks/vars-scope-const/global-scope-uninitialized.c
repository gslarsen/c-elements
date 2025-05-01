#include <stdio.h>
int x;  // uninitialized global variable

int main() {
  printf("x: %d\n", x);  // default value of uninitialized global variable is 0
  return 0;
}