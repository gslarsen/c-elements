#include <stdint.h>
#include <stdio.h>

int main() {
  uint32_t hex_value = 0x3f800000;

  puts("IEEE 754-2019 std for floating point arithmetic:\n");

  // Print as floating point (interpretation if viewed as IEEE 754 float)
  float *float_ptr = (float *)&hex_value;
  printf("Floating point: %f\n", *float_ptr);

  // Print as hexadecimal
  printf("Hexadecimal bit representation: 0x%x\n", hex_value);

  // Print binary representation
  printf("Bit representation: ");
  for (int i = 31; i >= 0; i--) {
    printf("%d", (hex_value >> i) & 1);

    // Add a space every 4 bits for readability
    if (i % 4 == 0 && i != 0) {
      printf(" ");
    }
  }
  printf("\n");

  // Print as decimal
  printf("Decimal representation: %u\n", hex_value);

  return 0;
}