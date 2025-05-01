#include <stdio.h>

int main() {
  /*
    1. global and static variables without explicit initialization are set to zero before
    2. static local vars are initialized only once and retain their value between function calls
    during the program's lifetime
    3. static global vars have internal linkage, meaning they are not visible outside the file
  */
  static int x;
  static char y;
  printf("y: %c, ", y);
  printf("x: %d\n", x);
  return 0;
}