#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <wchar.h>

int main() {
  printf("bool: %zu byte, %d bits\n", sizeof(bool), (int)(8 * sizeof(bool)));
  printf("char: %zu byte, %lu bits, min: %d, max: %d\n", sizeof(char),
         (unsigned long)(8 * sizeof(char)), SCHAR_MIN, SCHAR_MAX);
  printf("unsigned char: %zu byte, %lu bits, min: %d, max: %d\n", sizeof(unsigned char),
         (unsigned long)(8 * sizeof(char)),
         ((unsigned char)(-1) == UCHAR_MAX) ? 0 : (unsigned char)(-1), UCHAR_MAX);
  printf("short: %zu bytes, %lu bits, min: %d, max: %d\n", sizeof(short), 8 * sizeof(short),
         SHRT_MIN, SHRT_MAX);
  printf("unsigned short: %zu bytes, %lu bits, min: %d, max: %d\n", sizeof(unsigned short),
         8 * sizeof(short), ((unsigned short)(-1) == USHRT_MAX) ? 0 : (unsigned short)(-1),
         USHRT_MAX);
  printf("int: %zu bytes, %lu bits, min: %d, max: %d\n", sizeof(int), 8 * sizeof(int), INT_MIN,
         INT_MAX);
  printf("unsigned int: %zu bytes, %lu bits, min: %u, max: %u\n", sizeof(unsigned int),
         8 * sizeof(int), ((unsigned int)(-1) == UINT_MAX) ? 0 : (unsigned int)(-1), UINT_MAX);
  printf("long: %zu bytes, %lu bits, min: %ld, max: %ld\n", sizeof(long), 8 * sizeof(long),
         LONG_MIN, LONG_MAX);
  printf("unsigned long: %zu bytes, %lu bits, min: %lu, max: %lu\n", sizeof(unsigned long),
         8 * sizeof(long), ((unsigned long)(-1) == ULONG_MAX) ? 0 : (unsigned long)(-1), ULONG_MAX);
  printf("long long: %zu bytes, %lu bits, min: %lld, max: %lld\n", sizeof(long long),
         8 * sizeof(long long), LLONG_MIN, LLONG_MAX);
  printf("unsigned long long: %zu bytes, %lu bits, min: %llu, max: %llu\n",
         sizeof(unsigned long long), 8 * sizeof(long long),
         ((unsigned long long)(-1) == ULLONG_MAX) ? 0 : (unsigned long long)(-1), ULLONG_MAX);
  printf("float: %zu bytes, %lu bits, min: ±%e, max: ±%e\n", sizeof(float), 8 * sizeof(float),
         FLT_MIN, FLT_MAX);
  printf("double: %zu bytes, %lu bits, min: ±%e, max: ±%e\n", sizeof(double), 8 * sizeof(double),
         DBL_MIN, DBL_MAX);
  printf("long double: %zu bytes, %lu bits, min: ±%Le, max: ±%Le\n", sizeof(long double),
         8 * sizeof(long double), LDBL_MIN, LDBL_MAX);

  printf("\n*** SIZES OF OTHER TYPES ***\n");
  printf("Size of __int128: %zu bytes\n", sizeof(__int128));
  printf("Size of wchar_t: %zu bytes\n", sizeof(wchar_t));
  printf("Size of size_t: %zu bytes\n", sizeof(size_t));
  return 0;
}