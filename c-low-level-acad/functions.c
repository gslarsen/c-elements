#include <stdio.h>

int add(int a, int b) { return a + b; }

int main() {
  int other_int = add(1234, 567890);
  printf("other_int = %d\n", other_int);
  return 0;
}