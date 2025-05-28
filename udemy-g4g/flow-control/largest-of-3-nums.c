/**
 * @file largest-of-3-nums.c
 * @author Gregory Larsen
 * @date 2025-05-28
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int a, b, c;
  printf("Enter three integers: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a >= b && a >= c) {
    printf("Largest number is: %d\n", a);
  } else if (b >= a && b >= c) {
    printf("Largest number is: %d\n", b);
  } else {
    printf("Largest number is: %d\n", c);
  }
  return 0;
}