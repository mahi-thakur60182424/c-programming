#include<stdio.h>

void printAWPAdvancedPyramid(int rows){
    int num = 1; // Start number
    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf("   "); // Three spaces for alignment
        }

        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%4d", num++);
        }
        printf("\n");
    }
}

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nAdvanced AWP Pyramid Pattern:\n");
    printf(rows);

    return 0;
}
