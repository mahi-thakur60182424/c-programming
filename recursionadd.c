#include <stdio.h>

// Function to add two numbers using recursion
int add(int a, int b) {
    if (b == 0) {
        return a; // Base case: when b becomes 0, return a
    } else {
        return add(a + 1, b - 1); // Increment a and decrement b
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers to add: ");
    scanf("%d %d", &num1, &num2);

    int sum = add(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
