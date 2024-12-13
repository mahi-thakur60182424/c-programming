#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function and store the result
    sum = addNumbers(num1, num2);

    // Output the result
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}
