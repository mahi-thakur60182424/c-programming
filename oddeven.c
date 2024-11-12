#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Positive ");
        if (number % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    } else if (number < 0) {
        printf("Negative ");
        if (number % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        }
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
// done