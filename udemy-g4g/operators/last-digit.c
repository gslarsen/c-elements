/**
 * @file last-digit.c
 * @author Gregory Larsen
 * @date 2025-05-22
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int x;
  printf("Enter an integer: ");
  scanf("%d", &x);
  printf("Last digit of %i: %i\n", x, x < 0 ? -x % 10 : x % 10);
  return 0;
}