#include <stdio.h>

int main() {
    int n = 5; // You can change the value of n
    char start, end;

    for (int i = 0; i < n; i++) {
        start = 'A' + i;         // Character for the first diagonal
        end = 'A' + (n - i - 1); // Character for the second diagonal

        for (int j = 0; j < 2 * n - 1; j++) {
            if (j == i) {
                printf("%c", start); // Print for the first diagonal
            } else if (j == 2 * n - 2 - i) {
                printf("%c", end); // Print for the second diagonal
            } else {
                printf(" "); // Fill spaces
            }
        }
        printf("\n");
    }
    return 0;
}

