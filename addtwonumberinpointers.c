#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the sum of two numbers using pointers
int sum(int *a, int *b) {
    return *a + *b;
}

// Function to compare two numbers using pointers
void compare(int *a, int *b) {
    if (*a > *b)
        printf("%d is greater than %d\n", *a, *b);
    else if (*a < *b)
        printf("%d is less than %d\n", *a, *b);
    else
        printf("%d is equal to %d\n", *a, *b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Pointers to the numbers
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    // Display the original numbers
    printf("\nOriginal numbers: num1 = %d, num2 = %d\n", *ptr1, *ptr2);

    // Perform operations
    printf("Sum of numbers: %d\n", sum(ptr1, ptr2));
    compare(ptr1, ptr2);

    // Swap the numbers
    swap(ptr1, ptr2);
    printf("After swapping: num1 = %d, num2 = %d\n", *ptr1, *ptr2);

    return 0;
}
