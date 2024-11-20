#include <stdio.h>

void printSpiralMatrix(int n) {
    int matrix[n][n]; // Matrix to store the spiral
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1; // Start with 1

    while (top <= bottom && left <= right) {
        // Fill the top row
        for (int i = left; i <= right; i++)
            matrix[top][i] = num++;
        top++;

        // Fill the right column
        for (int i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;

        // Fill the bottom row (if applicable)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                matrix[bottom][i] = num++;
            bottom--;
        }

        // Fill the left column (if applicable)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                matrix[i][left] = num++;
            left++;
        }
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    if (n > 0)
        printSpiralMatrix(n);
    else
        printf("Invalid size. Please enter a positive integer.\n");

    return 0;
}
