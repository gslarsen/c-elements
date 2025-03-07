#include <stdio.h>
#include <stdlib.h>

int main() {
  if (puts("Hello, world!\n") == EOF) {
    return EXIT_FAILURE;
  }

  if (printf("%s\n", "Hello, world!") < 0) {
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}