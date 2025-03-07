#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char* argv[argc + 1]) {
  double A[5] = {
      [0] = 9.0,
      [1] = 2.9,
      [4] = 3.E+25,
      [3] = .00007,
  };

  printf("SIZE_MAX is %zu\n", SIZE_MAX);

  for (size_t i = 0; i < 5; ++i) {
    if (i) {
      printf("element %zu is %g, \tits square is %g\n", i, A[i], A[i] * A[i]);
    }
  }
  printf("maximum integer is %d\n", INT32_MAX);
  printf("maximum integer is %ld\n", INTMAX_MAX);
  printf("maximum integer is %lld\n", INT64_MAX);

  return EXIT_SUCCESS;
}
