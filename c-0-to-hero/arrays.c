#include <stdio.h>

#define MAX_IDS 32

int main()
{
    printf("Hello, World!\n");
    int ids[MAX_IDS] = {0, 1, 2, 3, 4, 5};
    printf("%d\n", ids[3]);
    ids[6] = 0x41; // 65
    printf("%d\n", ids[6]);
}