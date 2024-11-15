#include <stdio.h>

int main() {
    int size;

    // Get the size of the rhombus from the user
    printf("Enter the size of the rhombus: ");
    scanf("%d", &size);

    // Loop to print each row
    for (int i = 1; i <= size; i++) {
        // Print leading spaces
        for (int j = 1; j <= size - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= size; k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
