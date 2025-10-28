//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main() {
    float celsius, fahrenheit;

    // Ask user for temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display the result
    printf("%f Celsius is equal to %f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}