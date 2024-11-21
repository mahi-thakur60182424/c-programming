#include <stdio.h>
#include <stdlib.h>

void calculator() {
    char operator;
    double num1, num2, result;

    while (1) {
        // Display menu
        printf("\nSimple Calculator\n");
        printf("Choose an operation (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        // Exit if user enters 'q'
        if (operator == 'q' || operator == 'Q') {
            printf("Exiting calculator...\n");
            break;
        }

        // Get numbers from the user
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Perform the selected operation
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error! Invalid operator.\n");
                break;
        }
    }
}

int main() {
    calculator();
    return 0;
}
