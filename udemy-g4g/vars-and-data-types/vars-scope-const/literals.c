/**
 * @file literals.c
 * @author Gregory Larsen
 * @brief Demonstrates the use of various literal types in C
 * @details
 * This program shows how to use integer, floating-point, character, and string literals in C.
 * It covers decimal, hexadecimal, octal, and binary integer literals, as well as floating-point
 * literals in standard, scientific, and hexadecimal notation. The program also demonstrates
 * printing values in different bases and how to display the binary representation of an integer.
 *
 * @note C does not have a built-in format specifier for binary output, so a custom loop is used.
 * @date 2025-05-16
 */

#include <stdio.h>

int main() {
  int a = 20;      // no prefix, decimal representation
  int b = 0x1A;    // 0x prefix, Hexadecimal representation of 26
  int c = 016;     // 0 prefix, Octal representation of 14
  int d = 0b1101;  // 0b prefix, Binary representation of 13 (C99 and later)

  // using suffixes in integer literals
  int u = 124;
  unsigned int v = -124U;
  long int w = 124L;
  unsigned long int z = 124UL;
  long long int x = 124LL;
  unsigned long long int y = 124ULL;
  unsigned long int hex = 0x1AUL;

  // floating-point literals
  float f = 10.5F;          // float literal
  double g = 10.515;        // double literal
  long double h = 10.515L;  // long double literal
  float f1 = 2.1e4f;        // float literal in scientific notation
  double g1 = 200.1e-80;    // double literal in scientific notation
  // only allowed prefix in floating point literals is `0x` for hexadecimal
  double g2 = 0x1A.1p0;  // 26.0625 x 2^0 hexadecimal floating-point literal

  printf("Decimal value of 20: %d\n", a);
  printf("Hexadecimal value of 0x1A: %x\n", b);
  printf("Decimal value of 0x1A: %d\n", b);
  printf("Octal value of 016: %o\n", c);
  printf("Decimal value of 016: %d\n", c);

  /* This code block prints the binary representation of the variable `d` (which has the value
  0b1101 or 13 in decimal). Let me explain how it works:

  1. `printf("Binary value of 0b1101: ");` - This first prints a label for the output.

  2. The for loop that follows is used to print each bit of the integer `d`:
     - `sizeof(int) * 8 - 1` calculates the position of the most significant bit. On most systems,
  an int is 4 bytes (32 bits), so this would start at bit position 31.
     - The loop iterates from the highest bit position down to 0 (the least significant bit).

  3. Inside the loop, `printf("%d", (d >> i) & 1);` does the actual bit extraction:
     - `d >> i` shifts the value in `d` to the right by `i` positions, bringing the bit at position
  `i` to the least significant position.
     - `& 1` performs a bitwise AND with 1, which isolates just that single bit (returns 1 if the
  bit is set, 0 if not).
     - The result (0 or 1) is printed with `printf("%d", ...)`.

  4. `printf("\n");` adds a newline character at the end to complete the binary representation.

  This approach prints all bits of the integer, including leading zeros. For example, if `d` is 13
  (0b1101) and an int is 32 bits, it would display: `00000000000000000000000000001101`

  The code essentially creates a custom binary formatter since C doesn't have a built-in format
  specifier for binary output like it does for decimal (%d), hexadecimal (%x), or octal (%o).
  */

  printf("Binary value of 0b1101: ");
  for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
    printf("%d", (d >> i) & 1);
    // Add a space after every 4 bits for better readability
    if (i % 4 == 0) {
      printf(" ");
    }
  }
  printf("\n");
  printf("Decimal value of 0b1101: %d\n", d);

  printf("\nFloating point literals:\n");
  // for floating point #s, %g prints the shorter of %f or %e
  printf("float f: %g\n", f);
  printf("double g: %g\n", g);
  printf("long double h: %Lg\n", h);
  printf("float f1: %g\n", f1);
  printf("double g1: %g\n", g1);
  printf("double g2: %g\n", g2);  // 26.0625 x 2^0 = 26.0625

  printf("\nCharacter & String Literals:\n");
  char achar = 'g';
  const char *str = "C is awesome!";
  printf("achar: %c, str: %s\n", achar, str);

  return 0;
}