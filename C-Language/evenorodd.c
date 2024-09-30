#include <stdio.h>
int main()
{
    int number;
    printf("enter the number   ");
    scanf("%d", &number);
    if (number % 4 == 0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }

    return 0;
}