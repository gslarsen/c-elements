#include <limits.h>
#include <stddef.h>
#include <stdio.h>

int main() {
  printf("Size of NULL: %zu bytes\n", sizeof(NULL));
  printf("Size of void *: %zu bytes\n", sizeof(void *));
  printf("Size of char: %zu bytes\n", sizeof(char));
  printf("Size of short: %zu bytes\n", sizeof(short));
  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of unsigned long: %zu bytes\n", sizeof(unsigned long));
  printf("Size of unsigned long long: %zu bytes\n", sizeof(unsigned long long));
  printf("Max unsigned long: %lu\n", ULONG_MAX);
  printf("Max unsigned long long: %llu\n", ULLONG_MAX);
  return 0;
}