#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter the last natural number you want the sum  ");
    scanf("%d", &n);

    // run in  liner time O(n)
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // printf("sum of first %d n natural number is:  %d", n, sum);


    // run in constant time O(1)
    sum = (n * n + n) / 2;
    printf("sum of first %d n natural number is:  %d", n, sum);

    return 0;
}