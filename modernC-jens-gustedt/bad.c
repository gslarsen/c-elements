/* This may look like nonsense, but really is -*- mode: C -*- */
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

  // Doing some work
  for (size_t i = 0; i < 5; ++i) {
    printf(
        "element %zu is %g, \tits square is %g\n", /*@\label{printf-start-badly}*/
        i, A[i], A[i] * A[i]);                     /*@\label{printf-end-badly}*/
  }

  return 0; /*@\label{main-return-badly}*/
}
