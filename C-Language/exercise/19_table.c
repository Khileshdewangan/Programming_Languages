#include <stdio.h>
int main()
{
    int enter_num, num;
    printf("enter the number you want multiption table of:");
    scanf("%d", &enter_num);
    printf("table of %d:\n", enter_num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", num = enter_num * i);
    }
    
    // printf("table of %d:\n", enter_num);
    // printf("%d\n", num = enter_num * 1);
    // printf("%d\n", num = enter_num * 2);
    // printf("%d\n", num = enter_num * 3);
    // printf("%d\n", num = enter_num * 4);
    // printf("%d\n", num = enter_num * 5);
    // printf("%d\n", num = enter_num * 6);
    // printf("%d\n", num = enter_num * 7);
    // printf("%d\n", num = enter_num * 8);
    // printf("%d\n", num = enter_num * 9);
    // printf("%d\n", num = enter_num * 10);

    return 0;
}