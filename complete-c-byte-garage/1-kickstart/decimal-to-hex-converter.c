#include <stdio.h>

int main(void) {
  printf("Welcome to the Decimal To Hexadecimal Converter!\n");
  printf("Enter a nonnegative integer:\n");
  typedef unsigned long long uint64_type;  // defines an alias
  uint64_type the_number;
  scanf("%llu", &the_number);  // acquires user input

  printf("Decimal representation:     %20llu\n", the_number);
  printf("Hexadecimal representation:     %16llX\n", the_number);

  return 0;
}