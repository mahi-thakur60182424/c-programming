#include <stdio.h>

int main() {
    int rows;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print each row
    for (int i = 1; i <= rows; i++) {
        // Print i asterisks in the ith row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
