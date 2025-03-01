#include <stdio.h>
#include <string.h>

int main() {
  FILE *file;
  char data[] = "Hello, World!\n";

  // Open a file in binary mode
  file = fopen("binaryfile.bin", "wb");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }

  // Write raw binary data
  fwrite(data, sizeof(char), strlen(data), file);
  fclose(file);

  // Reopen file for reading in binary mode
  file = fopen("binaryfile.bin", "rb");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }

  // Read binary data
  char buffer[100];
  size_t bytesRead = fread(buffer, sizeof(char), sizeof(buffer) - 1, file);
  buffer[bytesRead] = '\0';  // Null-terminate the string

  printf("Binary file content:\n%s", buffer);

  fclose(file);
  return 0;
}
