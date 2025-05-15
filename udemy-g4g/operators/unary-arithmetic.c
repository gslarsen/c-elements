/**
 * @file unary-arithmetic.c
 * @author Gregory Larsen
 * @date 2025-05-15
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 10;
  // The postfix increment operator (x++) increments the value of x
  // but returns the original value of x before the increment.
  int y = x++;
  // The prefix increment operator (++x) increments the value of x
  // and returns the incremented value.
  int z = ++x;
  printf("x = %d, y = %d, z = %d\n", x, y, z);

  for (int i = 0; i < 5; i++) {
    // The postfix decrement operator (x--) decrements the value of x
    // but returns the original value of x before the decrement.
    printf("x = %d\n", i);
  }

  for (int i = 0; i < 5; ++i) {
    // The prefix decrement operator (--x) decrements the value of x
    // and returns the decremented value.
    printf("x = %d\n", i);
  }
  return 0;
}