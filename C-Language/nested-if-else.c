#include <stdio.h>
int main()
{
    int a;
    int y;
    printf("enter your age:");
    scanf("%d", &a);
    if (a >= 18)
    {
        printf("Ok tall me! you have liacance\n 1 for yes and 0 for no:");
        scanf("%d", &y);
        if (y == 1)
        {
            printf("Congratulation! You can Drive Car and any vahical");
        }
        else{
            printf("You can't Drive Car and any vahical");
        }
    }
    else
    {
        printf("You can't Drive Car and any vahical");
    }
    return 0;
}