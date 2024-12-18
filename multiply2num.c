#include <stdio.h>

void multiply(int *a, int *b, int *result) {
    *result = (*a) * (*b);
}

int main() {
    int num1, num2, product;
    int *ptr1, *ptr2, *ptrProduct;

    // Assign pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptrProduct = &product;

    // Input numbers
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", ptr1, ptr2);

    // Call multiply function
    multiply(ptr1, ptr2, ptrProduct);

    // Output result
    printf("The product of %d and %d is: %d\n", *ptr1, *ptr2, *ptrProduct);

    return 0;
}
