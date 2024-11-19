#include <stdio.h>

void printHourglass(int n) {
    int i, j;

    // Top half of the hourglass
    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the hourglass
    for (i = 2; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the hourglass: ");
    scanf("%d", &n);

    printHourglass(n);

    return 0;
}
