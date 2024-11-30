#include<stdio.h>

int main() {
    int n = 5; // Number of rows in Pascal's Triangle
    int coef;  // To store coefficients for each possible

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Calculate and print coefficients
        coef = 1; // First coefficient is always 1
        for (int j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1); // Calculate next coefficient
        }

        printf("\n");
    }

    return 0;
}
