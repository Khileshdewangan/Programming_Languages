#include <stdio.h>
int main()
{
    int day;
    printf("enter a number");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THUESDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATERDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    default:
        printf("please enter valid number");
    }
    return 0;
}