#include <stdio.h>

void addArrays(int *arr1, int *arr2, int *result, int size) {
    for (int i = 0; i < size; i++) {
        *(result + i) = *(arr1 + i) + *(arr2 + i); // Using pointer arithmetic
    }
}

int main() {
    int size;

    // Input array size
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], result[size];

    // Input first array
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", (arr1 + i)); // Using pointer to access array elements
    }

    // Input second array
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("arr2[%d]: ", i);
        scanf("%d", (arr2 + i)); // Using pointer to access array elements
    }

    // Add the arrays
    addArrays(arr1, arr
