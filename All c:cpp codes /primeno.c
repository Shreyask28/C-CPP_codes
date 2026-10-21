#include <stdio.h>

int main()
{
    int n;
    int i; 
    printf("Enter a positive integer: ");
    scanf("%d", &n);
  
    if (n <= 1) 
    {
       printf("%d is not a prime number.\n",n);
    } 
    else 
    { 
        for(i = 2; i <= n/2 ; i++) 
        {
            if (n%i == 0) 
            {
                printf("%d is not a prime number.\n",n);
                break;     
            }
            else if (n%i == 1)
            {
               printf("%d is a prime number.\n", n);
           }
           else
           {
               printf("%d is NOT a prime number.\n", n);
           }
            
        }
    }

    return 0;
}