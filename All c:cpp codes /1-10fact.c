#include <stdio.h>

int main()
{
    // 1. Declare and initialize variables
    int n = 5;      // The number whose factorial we want to calculate
    long long fact = 1; // Use long long for 'fact' as factorials grow very quickly
    int i;
    
    // 2. Print what the program is doing
    printf("Calculating the factorial of %d\n", n);
  

    // 3. Loop from 1 up to n to calculate the factorial
    for(i = 1; i <= n; i++)
    {
        // Correct calculation and assignment
        fact = fact * i; 
    }
    
    // 4. Print the final result
    printf("The factorial of %d is: %lld\n", n, fact);

    return 0;
}