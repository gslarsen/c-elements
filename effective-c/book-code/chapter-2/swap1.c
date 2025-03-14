#include <stdio.h>
void swap(int *pa,
          int *pb);  // defined elsewhere

void swap(int *pa, int *pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
  printf("swap: *pa = %d, *pb = %d\n", *pa, *pb);
}

int main(void) {
  int a = 21;
  int b = 17;
  swap(&a, &b);
  printf("main: a = %d, b = %d\n", a, b);
  printf("main: &a = %p, &b = %p\n", (void *)&a, (void *)&b);
  printf("main: &swap = %p\n", (void *)&swap);
  return 0;
}
