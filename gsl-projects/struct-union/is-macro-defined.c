#include <stdio.h>
int main() {
#ifdef __STDC_IEC_60559_BFP__
  printf("Defined: %ld\n", __STDC_IEC_60559_BFP__);
#else
  printf("Not defined\n");
#endif
  return 0;
}