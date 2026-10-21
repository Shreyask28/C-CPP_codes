#include <stdio.h>
int main()
{
    int units;
    units=12;
    double surcharge,a,b,c,d;
    surcharge=0.20;
    a=0.50+units+surcharge;
    b=0.75+units+surcharge;
    c=1.20+units+surcharge;
    d=1.50+units+surcharge;

    printf("for %d units ",units);
    
    if(units<=0)
    {
        printf("invalid unit or input",units);
    }
    else if(units<=50)
    {
      printf("The electricity bill is %d ",a);  
    }
    else if(units<=100)
    {
      printf("The electricity bill is %d ",b);    
    }
    else if(units<=150)
    {
      printf("The electricity bill is %d ",c);    
    }
    else
    {
      printf("The electricity bill is %d ",d);    
    }
}