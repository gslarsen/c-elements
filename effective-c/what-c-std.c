#include <stdbool.h>
#include <stdio.h>

int main() {
  bool x = true;
  printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);
  printf("bool x: %d\n", x);
  return 0;
}