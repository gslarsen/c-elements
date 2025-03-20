// Key points illustrated:
// Structure

// All members get their own dedicated memory space
// The size of the structure is roughly the sum of its members' sizes (plus potential padding)
// All members maintain their values independently
// Total size: ~28 bytes (may vary due to alignment)

// Union

// All members share the same memory location
// The size of the union equals the size of its largest member (20 bytes for the string)
// When you modify one member, you're overwriting the memory used by other members
// Only one member holds a meaningful value at any given time
// Changing the value of one member "corrupts" the values of others
// The "union" provides multiple ways to interpret the same bytes in memory

// This example demonstrates Robert Seacord's point about memory overlapping in unions. When you
// write to one member of the union, you're writing to the exact same memory location used by all
// other members.
#include <stdio.h>

// Structure definition
struct Person {
  int id;         // 4 bytes
  char name[20];  // 20 bytes
  float salary;   // 4 bytes
};

// Union definition
union Data {
  int i;         // 4 bytes
  char str[20];  // 20 bytes
  float f;       // 4 bytes
};

int main() {
  // Structure example
  struct Person employee;

  employee.id = 1001;
  sprintf(employee.name, "John Doe");
  employee.salary = 45000.50;

  printf("Structure:\n");
  printf("ID: %d, Name: %s, Salary: %.2f\n", employee.id, employee.name, employee.salary);
  printf("Size of structure: %lu bytes\n\n", sizeof(struct Person));

  // Union example
  union Data data;

  // Using the union as an integer
  data.i = 42;
  printf("Union:\n");
  printf("data.i: %d\n", data.i);

  // Using the union as a string (OVERWRITES the integer value)
  sprintf(data.str, "Hello");
  printf("data.str: %s\n", data.str);
  printf("data.i: %d (corrupted after string assignment)\n", data.i);

  // Using the union as a float (OVERWRITES the string value)
  data.f = 3.14;
  printf("data.f: %.2f\n", data.f);
  printf("data.str: %s (corrupted after float assignment)\n", data.str);

  printf("Size of union: %lu bytes\n", sizeof(union Data));

  return 0;
}