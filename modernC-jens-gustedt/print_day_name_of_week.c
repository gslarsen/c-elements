#include <stdio.h>
#include <stdlib.h>

void print_day(char const* day);

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Usage: %s <day_number> (values 1-7)\n", argv[0]);
    return 1;
  }

  int day = atoi(argv[1]);

  switch (day) {
    case 1: {
      char const* p = "Monday";
      print_day(p);
      break;
    }
    case 2: {
      char const* p = "Tuesday";
      print_day(p);
      break;
    }
    case 3: {
      char const* p = "Wednesday";
      print_day(p);
      break;
    }
    case 4: {
      char const* p = "Thursday";
      print_day(p);
      break;
    }
    case 5: {
      char const* p = "Friday";
      print_day(p);
      break;
    }
    case 6: {
      char const* p = "Saturday";
      print_day(p);
      break;
    }
    case 7: {
      char const* p = "Sunday";
      print_day(p);
      break;
    }
    default:
      printf("Invalid Input\n");
      break;
  }

  return 0;
}

void print_day(char const* day) { printf("%s\n", day); }
