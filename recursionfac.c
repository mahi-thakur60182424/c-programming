#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the input is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, factorial(num));
    }

    return 0;
}
