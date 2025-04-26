#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <wchar.h>

int main() {
  printf("bool: %zu bytes, %d bits\n", sizeof(bool), (int)(8 * sizeof(bool)));
  printf("char: %zu byte, %lu bits, max: %d, min: %d\n", sizeof(char),
         (unsigned long)(8 * sizeof(char)), SCHAR_MAX, SCHAR_MIN);
  printf("short: %zu bytes, %lu bits, max: %d, min: %d\n", sizeof(short), 8 * sizeof(short),
         SHRT_MAX, SHRT_MIN);
  printf("int: %zu bytes, %lu bits, max: %d, min: %d\n", sizeof(int), 8 * sizeof(int), INT_MAX,
         INT_MIN);
  printf("long: %zu bytes, %lu bits, max: %ld, min: %ld\n", sizeof(long), 8 * sizeof(long),
         LONG_MAX, LONG_MIN);
  printf("long long: %zu bytes, %lu bits, max: %lld, min: %lld\n", sizeof(long long),
         8 * sizeof(long long), LLONG_MAX, LLONG_MIN);
  printf("float: %zu bytes, %lu bits, max/min: ±%f\n", sizeof(float), 8 * sizeof(float), FLT_MAX);
  printf("double: %zu bytes, %lu bits, max/min: ±%f\n", sizeof(double), 8 * sizeof(double),
         DBL_MAX);
  printf("long double: %zu bytes, %lu bits, max/min: ±%Lf\n", sizeof(long double),
         8 * sizeof(long double), LDBL_MAX);

  printf("\n*** UNSIGNED TYPES ***\n");
  printf("unsigned char: %zu byte, %lu bits, max: %d, min: %d\n", sizeof(unsigned char),
         (unsigned long)(8 * sizeof(char)), UCHAR_MAX,
         ((unsigned char)(-1) == UCHAR_MAX) ? 0 : (unsigned char)(-1));
  printf("unsigned short: %zu bytes, %lu bits, max: %d, min: %d\n", sizeof(unsigned short),
         8 * sizeof(short), USHRT_MAX,
         ((unsigned short)(-1) == USHRT_MAX) ? 0 : (unsigned short)(-1));
  printf("unsigned int: %zu bytes, %lu bits, max: %u, min: %u\n", sizeof(unsigned int),
         8 * sizeof(int), UINT_MAX, ((unsigned int)(-1) == UINT_MAX) ? 0 : (unsigned int)(-1));
  printf("unsigned long: %zu bytes, %lu bits, max: %lu, min: %lu\n", sizeof(unsigned long),
         8 * sizeof(long), ULONG_MAX, ((unsigned long)(-1) == ULONG_MAX) ? 0 : (unsigned long)(-1));
  printf("unsigned long long: %zu bytes, %lu bits, max: %llu, min: %llu\n",
         sizeof(unsigned long long), 8 * sizeof(long long), ULLONG_MAX,
         ((unsigned long long)(-1) == ULLONG_MAX) ? 0 : (unsigned long long)(-1));

  printf("\n*** OTHER TYPES ***\n");
  printf("Size of __int128: %zu bytes\n", sizeof(__int128));
  printf("Size of wchar_t: %zu bytes\n", sizeof(wchar_t));
  printf("Size of size_t: %zu bytes\n", sizeof(size_t));
  return 0;
}