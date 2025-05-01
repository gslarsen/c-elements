#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main() {
  // Set locale to support Japanese characters specifically
  if (setlocale(LC_ALL, "en_US.UTF-8") == NULL) {
    fprintf(stderr, "Locale setting failed\n");
  }

  printf("Hello, World!\n");
  int __myvar__ = 42;
  printf("My variable: %d\n", __myvar__);

  wchar_t __mywchar__ = L'あ';

  // Print with wprintf
  wprintf(L"My wide character: %lc\n", __mywchar__);

  // Print with printf (may not work correctly in all environments)
  // Note: This may not display correctly in all terminals
  // printf() with %lc can work but technically expects a wint_t type argument rather than wchar_t.
  // On many systems, they'll be compatible without explicit casting, but for maximum portability,
  // you'd use:
  printf("My wide character: %lc\n", (wint_t)__mywchar__);

  // Print using a UTF-8 string directly
  printf("Direct UTF-8: あ\n");

  // Print the hex value
  printf("My wide character (hex): %x\n", __mywchar__);

  return 0;
}