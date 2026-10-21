#include <stdio.h>

int main() 
{
    float fahrenheit;
    float celsius;

    printf("--- Fahrenheit to Celsius Converter ---\n");
    printf("Enter temperature in Fahrenheit (F): ");
    
    if (scanf("%f", &fahrenheit) != 1) 
    {
        printf("Error: Invalid input. Please enter a numerical value.\n");
        return 1;
    }

    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

    printf("\nConversion Result:\n");
    printf("%f degrees Fahrenheit is equal to %f degrees Celsius.\n", fahrenheit, celsius);

    return 0;
}