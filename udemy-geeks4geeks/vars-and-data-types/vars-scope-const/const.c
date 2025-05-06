#include <stdio.h>

// constant variable, compare to #define which is a preprocessor directive
// which may cause problems with type safety, depending on the context and has global scope
const double PI = 3.14159265358979323846;

int main() {
  int radius;

  printf("Enter circle's radius: ");
  scanf("%d", &radius);
  printf("Circle's area is: %.2f\n", PI * radius * radius);
  return 0;
}