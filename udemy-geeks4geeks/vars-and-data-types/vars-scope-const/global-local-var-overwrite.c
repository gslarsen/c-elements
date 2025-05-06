#include <stdio.h>
int x = 20;

int main() {
  printf("x: %d\n", x);  // x = 20
  int x = 10;
  {
    int x = 5;
    printf("x: %d\n", x);  // x = 5
  }
  printf("x: %d\n", x);  // x = 10
  return 0;
}
