#include <stdio.h>
int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;

    printf("%d\n", (a < b) ? b : a);
    // printf("%d\n", (a > b) || (b > c));
    // printf("%d", !(a == b));

    return 0;
}