#include <stdio.h>
int main()
{
    // table of any number
    int i = 0, num;
    printf("enter the number you what a table");
    scanf("%d", &num);
    printf("table of %d\n", num);

    do
    {
        i++;
        printf("%d\n", i * num);
    } while (i < 10);

    return 0;
}