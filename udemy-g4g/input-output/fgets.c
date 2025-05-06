#include <stdio.h>
#include <string.h>

int main() {
  char name[50];
  printf("Enter your name: ");
  // Using fgets to read a string with spaces and LIMIT the input to 99 characters and null
  // terminator. fgets reads until a newline or EOF, and stores the result in name
  fgets(name, sizeof(name), stdin);
  // Remove newline character, if present, and replace with null
  name[strcspn(name, "\n")] = '\0';
  printf("Salve, %s, piacere! \nsizeof(name): %lu bytes\n", name, sizeof(name));
  return 0;
}