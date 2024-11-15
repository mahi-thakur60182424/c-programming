#include <stdio.h>

int main() {
    int size;

    // Get the size of the diamond from the user
    printf("Enter the size of the diamond: ");
    scanf("%d", &size);

    // Upper part of the diamond
    for (int i = 1; i <= size; i++) {
        // Print spaces
        for (int j = 1; j <= size - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    // Lower part of the diamond
    for (int i = size - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= size - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
