#include <stdio.h>
#include <stdlib.h>

// void swap(int a, int b) {
//   int t = a;
//   a = b;
//   b = t;
//   printf("swap: a = %d, b = %d\n", a, b);
// }

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int main(void) {
  int a = 21;
  int b = 17;
  printf("main before swap: a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("main after swap: a = %d, b = %d\n", a, b);
  return EXIT_SUCCESS;
}
