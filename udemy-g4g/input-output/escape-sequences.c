#include <stdio.h>

int main() {
  char str[] = "Welcome to \"C programming for programmers!\"";
  printf("%s\n", str);
  printf("backslash: \\\n");

  char windows_path[] = "C:\\Program Files\\Microsoft\\Excel\\include";
  printf("%s\n", windows_path);
  return 0;
}