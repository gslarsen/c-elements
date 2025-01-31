#include <stdbool.h>
#include <stdio.h>

#define MAX_EMPLOYEES 1000

struct employee_t {  // _t is a convention he uses to indicate a type
  int id;
  char firstname[32];
  char lastname[32];
  float salary;
  bool is_manager;
};

int main() {
  // array of employees of type struct employee_t
  struct employee_t employees[MAX_EMPLOYEES];

  for (int i = 0; i < MAX_EMPLOYEES; i++) {
    employees[i].id = i + 1;
    employees[i].salary = 1000.0f;
    employees[i].is_manager = false;
  }

  printf("employees[999].id = %d\n", employees[999].id);
}