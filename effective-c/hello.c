#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("EOF: %d\n", EOF);
  printf("EXIT_FAILURE: %d\n", EXIT_FAILURE);
  printf("EXIT_SUCCESS: %d\n", EXIT_SUCCESS);

  if (puts("Hello, world!\n") == EOF) {
    return EXIT_FAILURE;
  }
  printf("puts() returned successfully with an exit code of %d\n",
         EXIT_SUCCESS);
  return EXIT_SUCCESS;
}