#include<stdio.h>

void divide(float *a, float *b, float *result) {
    if (*b != 0) {
        *result = (*a) / (*b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
        *result = 0;
    }
}

int main() {
    float num1, num2, quotient;
    float *ptr1, *ptr2, *ptrQuotient;

    // Assign pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptrQuotient = &quotient;

    // Input numbers
    printf("Enter two numbers to divide: ");
    scanf("%f %f", ptr1, ptr2);

    // Call divide function
    divide(ptr1, ptr2, ptrQuotient);

    // Output result
    if (*ptr2 != 0) {
        printf("The result of dividing %.2f by %.2f is: %.2f\n", *ptr1, *ptr2, *ptrQuotient);
    }

    return 0;
}
