#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var;     // Pointer to var
    int **pptr = &ptr;   // Pointer to pointer

    printf("Value of var = %d\n", var);
    printf("Value via ptr = %d\n", *ptr);
    printf("Value via pptr = %d\n", **pptr);
    return 0;
}
