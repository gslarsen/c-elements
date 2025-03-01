
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>

#define N 100'000  // Number of employees
#define SALARY 75000.0

typedef struct {
  int id;
  float salary;
  char name[20];
} Employee;

// Function to measure file size
long get_file_size(const char *filename) {
  struct stat st;
  if (stat(filename, &st) == 0) {
    return st.st_size;
  }
  return -1;
}

int main() {
  Employee employees[N];
  for (int i = 0; i < N; i++) {
    employees[i].id = i + 1;
    employees[i].salary = SALARY + (i % 5000);  // Vary salaries
    snprintf(employees[i].name, 20, "Employee%d", i + 1);
  }

  clock_t start, end;
  FILE *file;

  // 1. Writing in TEXT MODE
  start = clock();
  file = fopen("employees.txt", "w");
  if (!file) {
    perror("Error opening text file");
    return 1;
  }
  for (int i = 0; i < N; i++) {
    fprintf(file, "%d %.6f %s\n", employees[i].id, employees[i].salary, employees[i].name);
  }
  fclose(file);
  end = clock();
  double text_write_time = (double)(end - start) / CLOCKS_PER_SEC;

  // 2. Writing in BINARY MODE
  start = clock();
  file = fopen("employees.bin", "wb");
  if (!file) {
    perror("Error opening binary file");
    return 1;
  }
  fwrite(employees, sizeof(Employee), N, file);
  fclose(file);
  end = clock();
  double binary_write_time = (double)(end - start) / CLOCKS_PER_SEC;

  // Get file sizes
  long text_size = get_file_size("employees.txt");
  long binary_size = get_file_size("employees.bin");

  // 3. Reading in TEXT MODE
  start = clock();
  file = fopen("employees.txt", "r");
  if (!file) {
    perror("Error opening text file for reading");
    return 1;
  }
  Employee temp;
  float precision_loss = 0.0;
  for (int i = 0; i < N; i++) {
    fscanf(file, "%d %f %s", &temp.id, &temp.salary, temp.name);
    precision_loss += fabs(employees[i].salary - temp.salary);  // Check precision difference
  }
  fclose(file);
  end = clock();
  double text_read_time = (double)(end - start) / CLOCKS_PER_SEC;

  // 4. Reading in BINARY MODE
  start = clock();
  file = fopen("employees.bin", "rb");
  if (!file) {
    perror("Error opening binary file for reading");
    return 1;
  }
  fread(employees, sizeof(Employee), N, file);
  fclose(file);
  end = clock();
  double binary_read_time = (double)(end - start) / CLOCKS_PER_SEC;

  // Print results
  printf("---- File Size Comparison ----\n");
  printf("Text file size:   %ld bytes\n", text_size);
  printf("Binary file size: %ld bytes\n", binary_size);

  printf("\n---- Read/Write Time Comparison ----\n");
  printf("Text write time:   %.6f seconds\n", text_write_time);
  printf("Binary write time: %.6f seconds\n", binary_write_time);
  printf("Text read time:    %.6f seconds\n", text_read_time);
  printf("Binary read time:  %.6f seconds\n", binary_read_time);

  printf("\n---- Precision Loss in Text Mode ----\n");
  printf("Total precision loss (sum of salary differences): %.9f\n", precision_loss);

  return 0;
}

// // EXTREME PRECISION LOSS EXAMPLE

// #define N 100'000  // More employees to amplify loss

// typedef struct {
//   int id;
//   float salary;  // Stored as float
//   char name[20];
// } Employee;

// // Function to measure file size
// long get_file_size(const char *filename) {
//   struct stat st;
//   if (stat(filename, &st) == 0) {
//     return st.st_size;
//   }
//   return -1;
// }

// int main() {
//   Employee employees[N];
//   srand(time(NULL));

//   for (int i = 0; i < N; i++) {
//     employees[i].id = i + 1;

//     // Generate tiny salaries that will suffer from truncation
//     double precise_salary = (rand() % 5000000) * 1e-6;
//     employees[i].salary = (float)precise_salary;  // Force truncation

//     snprintf(employees[i].name, 20, "Emp%d", i + 1);
//   }

//   clock_t start, end;
//   FILE *file;

//   // 1. Writing in TEXT MODE (force extreme loss with %.0f)
//   start = clock();
//   file = fopen("employees.txt", "w");
//   if (!file) {
//     perror("Error opening text file");
//     return 1;
//   }
//   for (int i = 0; i < N; i++) {
//     fprintf(file, "%d %.0f %s\n", employees[i].id, employees[i].salary, employees[i].name);
//   }
//   fclose(file);
//   end = clock();
//   double text_write_time = (double)(end - start) / CLOCKS_PER_SEC;

//   // 2. Writing in BINARY MODE
//   start = clock();
//   file = fopen("employees.bin", "wb");
//   if (!file) {
//     perror("Error opening binary file");
//     return 1;
//   }
//   fwrite(employees, sizeof(Employee), N, file);
//   fclose(file);
//   end = clock();
//   double binary_write_time = (double)(end - start) / CLOCKS_PER_SEC;

//   // Get file sizes
//   long text_size = get_file_size("employees.txt");
//   long binary_size = get_file_size("employees.bin");

//   // 3. Reading in TEXT MODE (check precision loss)
//   start = clock();
//   file = fopen("employees.txt", "r");
//   if (!file) {
//     perror("Error opening text file for reading");
//     return 1;
//   }

//   Employee temp;
//   double total_precision_loss = 0.0;
//   double max_precision_loss = 0.0;

//   for (int i = 0; i < N; i++) {
//     double original_salary = (double)employees[i].salary;  // What was written
//     fscanf(file, "%d %f %s", &temp.id, &temp.salary, temp.name);

//     double difference = fabs(original_salary - temp.salary);
//     total_precision_loss += difference;
//     if (difference > max_precision_loss) {
//       max_precision_loss = difference;
//     }
//   }

//   fclose(file);
//   end = clock();
//   double text_read_time = (double)(end - start) / CLOCKS_PER_SEC;

//   // 4. Reading in BINARY MODE
//   start = clock();
//   file = fopen("employees.bin", "rb");
//   if (!file) {
//     perror("Error opening binary file for reading");
//     return 1;
//   }
//   fread(employees, sizeof(Employee), N, file);
//   fclose(file);
//   end = clock();
//   double binary_read_time = (double)(end - start) / CLOCKS_PER_SEC;

//   // Print results
//   printf("---- File Size Comparison ----\n");
//   printf("Text file size:   %ld bytes\n", text_size);
//   printf("Binary file size: %ld bytes\n", binary_size);

//   printf("\n---- Read/Write Time Comparison ----\n");
//   printf("Text write time:   %.6f seconds\n", text_write_time);
//   printf("Binary write time: %.6f seconds\n", binary_write_time);
//   printf("Text read time:    %.6f seconds\n", text_read_time);
//   printf("Binary read time:  %.6f seconds\n", binary_read_time);

//   printf("\n---- Precision Loss in Text Mode ----\n");
//   printf("Total precision loss (sum of salary differences): %.15f\n", total_precision_loss);
//   printf("Maximum single precision loss: %.15f\n", max_precision_loss);

//   return 0;
// }
