#include <stdio.h>

int main() {
    int rows;

    // Get the number of rows from the user
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    // Loop to print each row
    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
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
