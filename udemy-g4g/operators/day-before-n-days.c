/**
 * @file day-before-n-days.c
 * @author Gregory Larsen
 * @date 2025-05-21
 */

#include <stdio.h>

enum { SUNDAY = 0, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main(int argc, char *argv[]) {
  int d = SATURDAY, n = -1;
  // my answer
  int ans = (d - n) % 7 < 0 ? (d - n) % 7 + 7 : (d - n) % 7;
  // video answer; incorrect for n < 0 (e.g., n = -1)
  int ans2 = d - n % 7 < 0 ? (d - n % 7) + 7 : d - n % 7;

  printf("%d days before %d is %d\n", n, d, ans);
  printf("%d days before %d is %d\n", n, d, ans2);
  return 0;
}