#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 1000

struct employee_t {  // _t is a convention he uses to indicate a type
  int id;
  char firstname[32];
  char lastname[32];
  float salary;
  bool is_manager;
};

int main() {
  struct employee_t employees[MAX_EMPLOYEES];
  int num_employees = 0;

  // Add an employee
  struct employee_t emp1;
  emp1.id = 1;
  strcpy(emp1.firstname, "John");
  strcpy(emp1.lastname, "Doe");
  emp1.salary = 50000.0;
  emp1.is_manager = false;

  employees[num_employees++] = emp1;
  // Add another employee
  struct employee_t emp2 = {2, "Jane", "Smith", 60000.0,
                            true};  // Using initializer list
  employees[num_employees++] = emp2;

  // Print employee details
  printf("number of employees: %d\n", num_employees);
  for (int i = 0; i < num_employees; i++) {
    printf("ID: %d, Name: %s %s, Salary: %.2f, Manager: %s\n", employees[i].id,
           employees[i].firstname, employees[i].lastname, employees[i].salary,
           employees[i].is_manager ? "Yes" : "No");
  }

  return 0;
}