#include <stdio.h>

int main() {
    int n = 7; // Adjust for different sizes
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Conditions to print the flower-like shape
            if ((i == 0 && j == n/2) ||   // Top petal
                (i == n-1 && j == n/2) || // Bottom petal
                (j == 0 && i == n/2) ||   // Left petal
                (j == n-1 && i == n/2) || // Right petal
                (i == n/2 && j == n/2))   // Center
            {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}