#include <stdio.h>
int x;  // uninitialized global variable defined after main()

int main() {
  printf("x: %d\n", x);  // 10
  return 0;
}

int x = 10;