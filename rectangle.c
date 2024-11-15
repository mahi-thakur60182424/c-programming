#include <stdio.h>

int main() {
    int rows, columns;

    // Get the number of rows and columns for the rectangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Loop to print the rectangle
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
