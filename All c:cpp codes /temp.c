#include <stdio.h>
int main()
{
    int choice;
    printf("1.Temp<=-10 \n");
    printf("2.Temp<=-0 \n");
    printf("3.Temp<=10 \n");
    printf("4.Temp<=20 \n");
    printf("5.Temp<30 \n");
    printf("Enter your choice(1-5)\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Deep freeze \n");
        break;
    case 2:
        printf("Freeze \n");
        break;
    case 3:
        printf("Cold \n");
        break;
    case 4:
        printf("Cool \n");
        break;
    case 5:
        printf("Normal \n");
        break;
    default:
        printf("Hot \n");
    }
    return 0;
}