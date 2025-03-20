#include <stdio.h>

int main() {
  FILE *file;

  // Open a file in text mode
  file = fopen("textfile.txt", "w");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }

  // Write text to the file
  fprintf(file, "Hello, World!\n");
  fprintf(file, "This is a text file.\n");
  fclose(file);  // Close the file

  // Reopen file for reading
  file = fopen("textfile.txt", "r");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }

  // Read and print content line by line
  char buffer[100];
  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    printf("%s", buffer);
  }

  fclose(file);
  return 0;
}
