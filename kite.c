#include <stdio.h>

int main() {
    int size;

    // Get the size of the kite from the user
    printf("Enter the size of the kite: ");
    scanf("%d", &size);

    // Upper triangle (top half of the kite)
    for (int i = 1; i <= size; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= size - i; j++) {
            printf(" ");
        }
        // Print stars for the current row
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    // Lower inverted triangle (bottom half of the kite)
    for (int i = size - 1; i >= 1; i--) {
        // Print spaces for alignment
        for (int j = 1; j <= size - i; j++) {
            printf(" ");
        }
        // Print stars for the current row
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
