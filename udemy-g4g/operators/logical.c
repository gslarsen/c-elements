/**
 * @file logical.c
 * @author Gregory Larsen
 * @date 2025-05-16
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 10;
  int y = 20;
  bool res = (x > 0 && x < 10);
  printf("x = %d, y = %d\n", x, y);
  printf("x > 0 && x < 10: %d\n", res);  // 0
  res = (x > 0 || x > y);
  printf("x > 0 || x > y: %d\n", res);  // 1
  res = !res;
  printf("!(x > 0 || x > y): %d\n", res);  // 0
  char *str = "Hello";
  res = (str && x > 0);
  printf("str && x > 0: %d\n", res);                                        // 1
  printf("x > 0 || x++: %d\n", x > 0 || x++);                               // 1
  printf("x = %d; the prior boolean operation was short-circuited!\n", x);  // 10
  return 0;
}