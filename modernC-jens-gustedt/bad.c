/* This may look like nonsense, but really is -*- mode: C -*- */
#include <limits.h>
#include <stdio.h>
/* The main thing that this program does. */
int main() {
  // Declarations
  double A[5] = {
      9.0,
      2.9,
      3.E+25,
      .00007,
  };

  unsigned long long int u_long_max = ULLONG_MAX;
  long long int long_long_max = LLONG_MAX;
  long long int long_long_min = LLONG_MIN;

  printf("Maximum value of unsigned long int: %llu\n", u_long_max);
  printf("Maximum value of long long int: %lld\n", long_long_max);
  printf("Minimum value of long long int: %lld\n", long_long_min);

  // Doing some work
  for (size_t i = 0; i < 5; ++i) {
    printf(
        "element %zu is %g, \tits square is %g\n", /*@\label{printf-start-badly}*/
        i, A[i], A[i] * A[i]);                     /*@\label{printf-end-badly}*/
  }

  return 0; /*@\label{main-return-badly}*/
}
