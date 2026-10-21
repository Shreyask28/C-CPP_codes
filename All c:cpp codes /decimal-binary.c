#include <stdio.h>

long decimalToBinary(int n) 
{
    long binary = 0;
    long place = 1;
    int rem;

    while(n > 0) 
    {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    return binary;
}

int main() 
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    long result = decimalToBinary(n);
    printf("Binary equivalent: %ld\n", result);

    return 0;
}
