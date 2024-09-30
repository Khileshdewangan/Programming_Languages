#include <stdio.h>
int main()
{

    int roll[5], num;

    for (int i = 0; i < 5; i++)
    {

        printf("enter the value");
        scanf("%d", &num);
        printf("the valueof roll[%d] is:%d\n", i, num);
    }

    return 0;
}