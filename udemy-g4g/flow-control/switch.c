/**
 * @file switch.c
 * @author Gregory Larsen
 * @date 2025-05-23
 */

#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 0, y = 0, c;  // c is for clearing the input buffer
  int ch;

  printf("Enter a choice (u (up), d (down), l (left), r (right) OR x (exit)): ");
  ch = tolower(getchar());
  // Clear the input buffer
  while ((c = getchar()) != '\n' && c != EOF);

  while (ch != 'x') {
    switch (ch) {
      case 'u':
        y++;
        break;
      case 'd':
        y--;
        break;
      case 'l':
        x--;
        break;
      case 'r':
        x++;
        break;
      default:
        printf("Invalid choice\n");
    }
    printf("Enter a choice (u (up), d (down), l (left), r (right) OR x (exit)): ");
    ch = tolower(getchar());
    // Clear the input buffer
    while ((c = getchar()) != '\n' && c != EOF);
  }

  printf("x = %d, y = %d\nExiting...\n", x, y);
  return 0;
}
