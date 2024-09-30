#include <stdio.h>
int sum(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *x + *y;
    *y = temp - *y;
    return 0;
}
int main()
{
    int a, b;                                                                                           
    printf("enter the first value\n");
    scanf("%d", &a);
    printf("enter the second value\n");
    scanf("%d", &b);
    printf("the value of a and b is %d and %d\n", a, b);
    sum(&a, &b);
    printf("sum of the value is %d\n", a);
    printf("subtact of the value is %d", b);
    return 0;
}

// int swap(int *x, int *y)
// {
//     *x = 254;
//      return 0;
// }
// int main()
// {
//     int a = 25, b = 12;
//     printf("value of a is :%d\n", a);
//     printf("value of a is :%d\n", b);
//     swap(&a, &b);
//     printf("value of a is :%d\n", a);
//     return 0;
// }
