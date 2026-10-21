#include <stdio.h>
int main()
{
    int n;
    printf("note = please pay bill according to 1,5,10 rupees\n");
     printf("--------------------------------------------------\n");
    printf("ENTER THE VALUE OF WATER IN LITRES:%d",n);
    
    scanf("%d", &n);
    
    
    if(n==0)
    {
        printf("INVALID INPUT\n");
    }
    else if(n==1)
    {
        printf("PAY RUPEES 1\n");
    }
    else if(n==5)
    {
        printf("PAY RUPEES 5\n");
    }
    else if(n==10)
    {
        printf("PAY RUPEES 10\n");
    }
    else {
        printf("NO MATCHING BILL OPTION\n");
    }
    printf("----------------------------\n");
    printf("Thank you....... visit again");

}
