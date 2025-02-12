#include <stdio.h>
#include <stdlib.h>
/*
  This approach simulates call by reference (also known as pass by reference) by
  generating object addresses, passing those by value, and then dereferencing
  the copied addresses to access the original objects.
*/

void swap(int *pa, int *pb) {  // pa → a: 21    pb → b: 17
  int t = *pa;                 // t: 21
  *pa = *pb;                   // pa -> a: 17  pb -> b: 17
  *pb = t;
  printf("pa: %d, pb: %d\n", pa, pb);
  printf("*pa: %d, *pb: %d\n", *pa, *pb);  // pb -> b: 21
}

int main() {
  int a = 21;
  int b = 17;
  printf("before swap: a = %d, b = %d\n", a, b);
  swap(&a, &b);  // unary & (address-of) creates a pointer to its operand
  printf("after swap: a = %d, b = %d\n", a, b);
  return EXIT_SUCCESS;
}