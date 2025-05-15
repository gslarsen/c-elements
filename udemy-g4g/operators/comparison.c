/**
 * @file comparison.c
 * @author Gregory Larsen
 * @date 2025-05-15
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 10;
  int y = 20;
  printf("%d == %d: %d\n", x, y, x == y);  // 0
  printf("%d != %d: %d\n", x, y, x != y);  // 1
  printf("%d > %d : %d\n", x, y, x > y);   // 0
  printf("%d < %d : %d\n", x, y, x < y);   // 1
  printf("%d >= %d: %d\n", x, y, x >= y);  // 0
  printf("%d <= %d: %d\n", x, y, x <= y);  // 1
  return 0;
}