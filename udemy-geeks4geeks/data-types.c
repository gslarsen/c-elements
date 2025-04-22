#include <stdio.h>
#include <wchar.h>

int main() {
  int age = 59;
  char name[] = "Gregory";
  float weight = 150.5;
  double height = 5 + 2 / 3.0;
  bool isMarried = true;
  char gender = 'M';
  printf("Age: %d\n", age);
  printf("Name: %s\n", name);
  printf("Weight (lbs): %.2f\n", weight);
  printf("Height (ft): %.1lf\n", height);
  printf("Is Married: %d\n", isMarried);
  printf("Gender: %c\n", gender);

  // Print the sizes
  printf("Size of weight (float): %zu bytes\n", sizeof(weight));
  printf("Size of height (double): %zu bytes\n", sizeof(height));

  // Print the sizes of other types
  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of char: %zu bytes\n", sizeof(char));
  printf("Size of bool: %zu bytes\n", sizeof(bool));
  printf("Size of float: %zu bytes\n", sizeof(float));
  printf("Size of double: %zu bytes\n", sizeof(double));
  printf("Size of long double: %zu bytes\n", sizeof(long double));
  printf("Size of size_t: %zu bytes\n", sizeof(size_t));
  printf("Size of short: %zu bytes\n", sizeof(short));
  printf("Size of long: %zu bytes\n", sizeof(long));
  printf("Size of long long: %zu bytes\n", sizeof(long long));
  printf("Size of __int128: %zu bytes\n", sizeof(__int128));
  printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
  printf("Size of unsigned char: %zu bytes\n", sizeof(unsigned char));
  printf("Size of unsigned short: %zu bytes\n", sizeof(unsigned short));
  printf("Size of unsigned long: %zu bytes\n", sizeof(unsigned long));
  printf("Size of unsigned long long: %zu bytes\n", sizeof(unsigned long long));
  printf("Size of signed char: %zu bytes\n", sizeof(signed char));
  printf("Size of signed short: %zu bytes\n", sizeof(signed short));
  printf("Size of signed long: %zu bytes\n", sizeof(signed long));
  printf("Size of signed long long: %zu bytes\n", sizeof(signed long long));
  printf("Size of wchar_t: %zu bytes\n", sizeof(wchar_t));

  return 0;
}