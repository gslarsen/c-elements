#include <stdio.h>

int main() {
  int x = -124;
  printf("%dhello\n", x);
  printf("%5d\n", x);        // right-aligned, 5 characters wide
  printf("%05d\n", x);       // right-aligned, 5 characters wide, zero-padded
  printf("%-5dhello\n", x);  // left-aligned, 5 characters wide
  printf("%+5d\n", 123);     // right-aligned, 5 characters wide, with sign
  float y = 3.1;
  printf("%5g\n", y);  // right-aligned, 5 characters wide
  float z = 3.14159;
  printf("%8.3f\n", z);   // right-aligned, 8 characters wide, 3 decimal places
  printf("%08.3f\n", z);  // right-aligned, 8 characters wide, 3 decimal places, zero-padded
  char str[] = "math";
  printf("%5s\n", str);           // right-aligned, 5 characters wide
  printf("%-5shello\n", str);     // left-aligned, 5 characters wide
  printf("%*s\n", 77 / 11, str);  // right-aligned, 7 characters wide, provided by argument
  char str2[] = "cprogrammingisawesome";
  printf("%.5s\n", str2);         // print first 5 characters
  printf("%5.3s\n", str2);        // right-aligned, 5 characters wide, print first 3 characters
  printf("%*.*s\n", 5, 3, str2);  // right-aligned, 5 characters wide, print first 3 characters
  printf("%-5.3s\n", str2);       // left-aligned, 5 characters wide, print first 3 characters
  return 0;
}