#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <wchar.h>

int main() {
  // Set locale to system default to support wide characters
  setlocale(LC_ALL, "");
  wchar_t wc;

  int x, y;
  printf("Enter first integer: ");
  scanf("%d", &x);
  printf("Enter second integer: ");
  scanf("%d", &y);
  printf("You entered: %d and %d\n", x, y);
  printf("Sum: %d\n", x + y);
  printf("Difference: %d\n", x - y);
  printf("Product: %d\n", x * y);
  printf("Quotient: %d\n", x / y);
  printf("Remainder: %d\n", x % y);
  printf("%d to the power of %d: %f\n", x, y, pow(x, y));
  printf("%d to the power of %d: %g\n", x, y, pow(x, y));  // using %g!

  printf("\nNow for some strings...\n");
  char str[100];
  printf("Enter a string: ");
  /*
      By default, the `%s` specifier in `scanf` reads input until it encounters whitespace (spaces,
     tabs, newlines). This means:

      scanf("%s", str);

      Will only read up to the first space in your input. For example, if you enter "John Smith",
     only "John" will be stored in `str`.
  */

  // Note the space before % to consume any leftover newline
  scanf(" %[^\n]", str);
  printf("You entered: %s\n", str);
  printf("Enter another string: ");
  scanf(" %[^\n]", str);
  printf("You entered: %s\n", str);
  printf("\nNow for some characters...\n");

  printf("Enter a character: ");
  wscanf(L" %lc", &wc);  // Note the space before %lc to consume any leftover newline
  printf("You entered: %lc\n", wc);
}