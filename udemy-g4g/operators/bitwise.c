/**
 * @file bitwise.c
 * @author Gregory Larsen
 * @brief Bitwise operators in C
 * @details This program demonstrates the use of bitwise operators in C.
 * It includes examples of AND, OR, XOR, NOT, left shift, and right shift operations.
 * @note Bitwise operators are typically faster than arithmetic operators.
 * @date 2025-05-16
 */

#include <stdio.h>

void print_binary(int num);

int main(int argc, char *argv[]) {
  int x = 3, y = 6, bx = 0b00000000000000000000000000000011,
      by = 0b00000000000000000000000000000110;
  printf("x = %d, bx = %d, y = %d, by = %d \n", x, bx, y, by);
  printf("Binary rep. %d: ", x);
  print_binary(x);
  printf("Binary rep. %d: ", y);
  print_binary(y);
  // AND
  printf("Bitwise %d & %d: ", x, y);
  print_binary(x & y);
  printf("Decimal %d & %d: %d\n", x, y, x & y);
  // OR
  printf("Bitwise %d | %d: ", x, y);
  print_binary(x | y);
  printf("Decimal %d | %d: %d\n", x, y, x | y);
  // XOR
  printf("Bitwise %d ^ %d: ", x, y);
  print_binary(x ^ y);
  printf("Decimal %d ^ %d: %d\n", x, y, x ^ y);
  // NOT
  printf("Bitwise    ~%d: ", x);
  print_binary(~x);
  printf("Decimal    ~%d: %d\n", x, ~x);

  printf("\nShift operators:\n");
  // x shifts
  printf("\t<< shifts left, equivalent to multiplying by 2^n (for non-negative integers), where n is the number of bits shifted.\n");
  printf("Bitwise %d << 1: ", x);
  print_binary(x << 1);
  printf("Decimal %d << 1: %d\n", x, x << 1);
  printf("Bitwise %d << 2: ", x);
  print_binary(x << 2);
  printf("Decimal %d << 2: %d\n", x, x << 2);
  printf("Bitwise %d << %d: ", x, y);
  print_binary(x << y);
  printf("Decimal %d << %d: %d\n\n", x, y, x << y);
  printf("Bitwise %d << 1: ", y);
  print_binary(y << 1);
  printf("Decimal %d << 1: %d\n", y, y << 1);
  printf("Bitwise %d << 2: ", y);
  print_binary(y << 2);
  printf("Decimal %d << 2: %d\n\n", y, y << 2);

  printf("\t>> shifts right, equivalent to integer division by 2^n for non-negative integers; for negative numbers, results may differ.\n");
  printf("Bitwise %d >> 1: ", x);
  print_binary(x >> 1);
  printf("Decimal %d >> 1: %d\n", x, x >> 1);
  printf("Bitwise %d >> 2: ", x);
  print_binary(x >> 2);
  printf("Decimal %d >> 2: %d\n\n", x, x >> 2);

  printf("Bitwise %d >> 1: ", y);
  print_binary(y >> 1);
  printf("Decimal %d >> 1: %d\n", y, y >> 1);
  printf("Bitwise %d >> 2: ", y);
  print_binary(y >> 2);
  printf("Decimal %d >> 2: %d\n", y, y >> 2);

  printf("\nBitwise arithmetic operations:\n");
  // Bitwise sum (using + operator, as true bitwise sum is not possible without loops)
  printf("%d + %d = %d\n", x, y, x + y);
  // Bitwise difference (using - operator, as true bitwise difference is not possible without loops)
  printf("%d - %d = %d\n", x, y, x - y);
  // Bitwise product (using * operator, as true bitwise product is not possible without loops)
  printf("%d * %d = %d\n", x, y, x * y);
  // Bitwise quotient (using / operator, as true bitwise division is not possible without loops)
  if (y != 0) {
    printf("%d / %d = %d\n", x, y, x / y);
  } else {
    printf("%d / %d = undefined (division by zero)\n", x, y);
  }

  printf("\nBitwise arithmetic operations (using only bitwise operators):\n");
  // Bitwise sum (using bitwise operators)
  int bitwise_sum = x, carry = y;
  while (carry != 0) {
    int temp = bitwise_sum & carry;
    bitwise_sum = bitwise_sum ^ carry;
    carry = temp << 1;
  }
  printf("Bitwise sum (%d + %d) = %d\n", x, y, bitwise_sum);

  // Bitwise difference (using robust bitwise algorithm for signed integers)
  int bitwise_diff = x;
  int y_neg = ~y + 1;  // Two's complement negation of y
  int carry_diff = y_neg;
  while (carry_diff != 0) {
    int temp = bitwise_diff & carry_diff;
    bitwise_diff = bitwise_diff ^ carry_diff;
    carry_diff = temp << 1;
  }
  printf("Bitwise difference (%d - %d) = %d\n", x, y, bitwise_diff);

  // Bitwise product (using bitwise operators)
  int bitwise_prod = 0, a = x, b = y;
  while (b != 0) {
    if (b & 1) {
      // Add a to result if current bit of b is set
      int temp_sum = bitwise_prod, temp_carry = a;
      while (temp_carry != 0) {
        int t = temp_sum & temp_carry;
        temp_sum = temp_sum ^ temp_carry;
        temp_carry = t << 1;
      }
      bitwise_prod = temp_sum;
    }
    a <<= 1;
    b >>= 1;
  }
  printf("Bitwise product (%d * %d) = %d\n", x, y, bitwise_prod);

  // Bitwise quotient (using bitwise operators)
  int bitwise_quot = 0, dividend = x, divisor = y;
  if (divisor != 0) {
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    unsigned int udividend = dividend < 0 ? -dividend : dividend;
    unsigned int udivisor = divisor < 0 ? -divisor : divisor;
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
      if ((udividend >> i) >= udivisor) {
        udividend -= (udivisor << i);
        bitwise_quot |= (1U << i);
      }
    }
    bitwise_quot = sign > 0 ? bitwise_quot : -bitwise_quot;
    printf("Bitwise quotient (%d / %d) = %d\n", x, y, bitwise_quot);
  } else {
    printf("Bitwise quotient (%d / %d) = undefined (division by zero)\n", x, y);
  }

  return 0;
}

/**
 * @brief Prints the binary representation of an integer with spaces every 4 bits for readability.
 *
 * @param num The integer to print in binary.
 */
void print_binary(int num) {
  for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
    printf("%d", (num >> i) & 1);
    // Add a space after every 4 bits for better readability
    if (i % 4 == 0) {
      printf(" ");
    }
  }
  // Print a newline at the end
  printf("\n");
}