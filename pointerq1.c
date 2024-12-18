#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    
    printf("%d\n", *(p + 3));
    printf("%p\n", (void*)(p + 3));
    
    return 0;
}
