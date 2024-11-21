#include <stdio.h>

void convertToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
}

void convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
}

int main() {
    int choice;
    float temperature;

    printf("Temperature Converter\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertToFahrenheit(temperature);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertToCelsius(temperature);+
        
    } else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
