#include <stdio.h>
int main()
{
    int a;
    printf("enter your age:");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("you can drive car");
    }
    else
    {
        printf("you can't drive car");
    }
    return 0;
}