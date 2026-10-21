#include <stdio.h>

int main() 
{
    int physics, maths, chemistry;

    printf("Enter Physics marks: ");
    scanf("%d", &physics);

    printf("Enter Maths marks: ");
    scanf("%d", &maths);

    printf("Enter Chemistry marks: ");
    scanf("%d", &chemistry);

    if (physics >= 65 && maths >= 65 && chemistry >= 65)
     {
        printf("You are eligible for admission.\n");
    } else 
    {
        printf("You are NOT eligible for admission.\n");
    }

    return 0;
}
