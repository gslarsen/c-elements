#include <stdio.h>

#define MAX_IDS 32

int main() {
  int ids[MAX_IDS] = {0, 1, 2};
  // always terminate char array with '\0' (evaluates to 0)
  // p30 in K&R
  char mystr[] = {0x68, 0x65, 'l', 'l', 'o', '\0'};
  // when string is defined as below, compiler automatically adds '\0'
  char *myotherstr = "hello";
  char mystr2[] = "hello";
  printf("%s\n", mystr);
  printf("%s\n", mystr2);
  printf("%s\n", myotherstr);
  printf("hello\n");  // same as printf("%s\n", "hello");
  return 0;
}