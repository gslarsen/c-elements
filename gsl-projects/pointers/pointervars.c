#include <stdio.h>
int main() {
  int num = 10;
  int *ptr = &num;  // ptr stores the address of num

  printf("Value of num: %d\n", num);     // Output: 10
  printf("Address of num: %p\n", &num);  // Output: (some memory address)
  printf("Value of ptr: %p\n", ptr);  // Output: (same memory address as &num)
  printf("Value pointed to by ptr: %d\n", *ptr);  // Output: 10

  *ptr = 20;  // Modify the value at the address pointed to by ptr

  printf("New value of num: %d\n", num);  // Output: 20

  return 0;
}