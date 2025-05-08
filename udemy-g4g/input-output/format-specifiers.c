#include <stdio.h>

int main() {
  int a = 10;
  long int b = 20;
  long long int c = 30;
  unsigned int d = 40;
  size_t e = sizeof(a);

  float f = 20.5;
  double g = 30.5;
  long double h = 15.50e9;

  char k = 'A';
  char str[] = "Hello, World!";

  // hexadecimal format
  printf("Int (%%d): %d\n", a);
  printf("Dec Int (%d) to Hex Int (%%x): %x\n", a, a);
  printf("Long int (%%ld): %ld\n", b);
  printf("Long long int (%%lld): %lld\n", c);
  printf("Unsigned int (%%u): %u\n", d);
  printf("Size_t (%%zu): %zu bytes\n", e);

  printf("Float (%%.2f): %.2f\n", f);
  printf("Double (%%.2f): %.2f\n", g);
  printf("Long double (%%.2Lf): %.2Lf\n", h);
  printf("Long double (%%.2Le): %.2Le\n", h);
  printf("Long double (%%Lg): %Lg\n", h);
  printf("Long double (%%#Lg): %#Lg\n", h);

  printf("Char (%%c): %c\n", k);
  printf("Str (%%s): %s\n", str);
  printf("Pointer (%%p): %p\n", &a);

  return 0;
}