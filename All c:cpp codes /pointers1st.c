#include <stdio.h>
int main()
{
    int a;
    a=365;
    int *p;
    p= &a;
    {
    printf("The value of a", a);
    }
    printf("The value of p%u", p);
    printf("The value of a%u", &a);
    printf("adress of p", &p);
    printf("p%u",*p);




}
