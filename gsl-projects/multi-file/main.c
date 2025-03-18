#include <stdio.h>
#include <stdlib.h>  // for atoi function

#include "math_utils.h"

int main(int argc, char *argv[]) {
  int num;

  // Check if there's a command line argument
  if (argc < 2) {
    printf("Usage: %s <number>\n", argv[0]);
    return 1;
  }

  // Convert the argument string to an integer
  num = atoi(argv[1]);

  printf("Square of %d is: %d\n", num, square(num));
  printf("Cube of %d is: %d\n", num, cube(num));
  return 0;
}