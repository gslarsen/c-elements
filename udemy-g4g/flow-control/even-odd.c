/**
 * @file even-odd.c
 * @author Gregory Larsen
 * @date 2025-05-28
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int number;
  printf("Enter an integer: ");
  scanf("%d", &number);
  if (number % 2 == 0) {
    printf("%d is even.\n", number);
  } else {
    printf("%d is odd.\n", number);
  }
  printf("Have a great day!\n");

  return 0;
}