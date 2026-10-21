#include <stdio.h>

int main() 
{
    float a, b, f, d, c;
    a = 32;           // Offset for Fahrenheit to Celsius conversion
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);  // Read the input value and store it in f
    d = f - a;        // Subtract 32
    b = 5.0 / 9.0;    // Use floating-point division for accuracy
    c = d * b;        // Multiply by 5/9 to get Celsius
    printf("The temperature in Celsius is: %.2f\n", c);
    return 0;
}
