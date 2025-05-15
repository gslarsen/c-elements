/**
 * @file assignment.c
 * @author Gregory Larsen
 * @date 2025-05-15
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 10, y = x;
  printf("x = %d, y = %d\n", x, y);
  x += 10;
  printf("x += 10: x = %d, y = %d\n", x, y);
  x -= 10;
  printf("x -= 10: x = %d, y = %d\n", x, y);
  x *= 10;
  printf("x *= 10: x = %d, y = %d\n", x, y);
  x /= 10;
  printf("x /= 10: x = %d, y = %d\n", x, y);
  x %= 10;
  printf("x %%= 10: x = %d, y = %d\n", x, y);
  return 0;
}