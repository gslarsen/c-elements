#include <stdio.h>

int main() {
  char c = 'g';
  int x = 10;

  printf("%d%d\n", c, x);  // 10310
  printf("%c%d\n", c, x);  // g10

  return 0;
}