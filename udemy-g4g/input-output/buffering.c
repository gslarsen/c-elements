#include <stdio.h>

int main() {
  // The standard I/O library uses buffering to improve performance.
  // This means that data is not immediately written to the output device,
  // but is instead stored in a buffer until the buffer is full or flushed.
  // This can lead to unexpected behavior if you are not careful.
  //
  // In below, if you enter two integers after the first prompt(e.g. 11 and 22),
  // the program will then print the second prompt and NOT wait for another input.
  // This is because the second integer from the first input is still in the buffer!

  int x, y;
  int c;

  printf("Enter an integer: ");
  scanf("%d", &x);
  // this section shows how to handle the buffer
  // Check if the next character in the buffer is a newline
  c = getchar();
  if (c == '\n') {
    // If newline is the next character, the buffer is empty (user entered just one number)
    printf("Enter second integer: ");
  } else if (c != EOF) {
    // Put the character back into the buffer if it's not EOF
    // ungetc(c, stdin);
    // OR, Clear the buffer up to the next newline
    while (c != '\n' && c != EOF) {
      c = getchar();
    }
    printf("Enter second integer: ");
  }
  // Now we can safely read the second integer
  scanf("%d", &y);
  printf("The product of %i and %i is: %d\n", x, y, x * y);

  return 0;
}