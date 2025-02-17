#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/*
  This approach simulates call by reference (also known as pass by reference) by
  generating object addresses, passing those by value, and then dereferencing
  the copied addresses to access the original objects.
*/
// note that int *pa = &a; so declaration and assignment are done in one step
void swap(int *pa, int *pb) {  // pa → a: 21   pb → b: 17
  int t = *pa;                 // t: 21
  *pa = *pb;                   // pa -> a: 17  pb -> b: 17
  *pb = t;
  printf("pa: %p, pb: %p\n", pa, pb);
  printf("*pa: %d, *pb: %d\n", *pa, *pb);  // pb -> b: 21
  // random bool to test if compiler can handle:
  // https://github.com/microsoft/vscode-cpptools/issues/10696#issuecomment-2652476603
  // https://github.com/microsoft/vscode-cpptools/discussions/11718#discussioncomment-7635890
  bool isTrue = true;
  if (isTrue) {
    printf("it's true and shows up as an int like this: %d\n", isTrue);
    printf("CHAR_BIT: %d\n", CHAR_BIT);
  } else {
    printf("it's false and shows up as an int like this: %d\n", isTrue);
  }
}

int main() {
  int a = 21;
  int b = 17;
  printf("before swap: a = %d, b = %d\n", a, b);
  swap(&a, &b);  // unary & (address-of) creates a pointer to its operand
  printf("after swap: a = %d, b = %d\n", a, b);
  return EXIT_SUCCESS;
}