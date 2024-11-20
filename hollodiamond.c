#include <stdio.h>

void printHollowDiamond(int n) {
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars and spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*"); // Print star at boundaries
            } else {
                printf(" "); // Print space inside +
            }
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars and spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*"); // Print star at boundaries
            } else {
                printf(" "); // Print space inside
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);

    printHollowDiamond(n);
    return 0;
}