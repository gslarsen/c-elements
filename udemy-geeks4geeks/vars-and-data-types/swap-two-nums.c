#include <stdio.h>
#include <stdlib.h>

// this function does not swap the values of a and b; it only swaps the
// copies of a and b in the function's stack frame
//
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
  int a, b, t;
  printf("Enter two integers (e.g. 11 2): ");
  scanf("%d %d", &a, &b);
  printf("before swap: a = %d, b = %d\n", a, b);
  // swap(&a, &b);
  t = a;
  a = b;
  b = t;
  printf("after swap: a = %d, b = %d\n", a, b);
  return EXIT_SUCCESS;
}
