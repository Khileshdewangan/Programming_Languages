#include <stdio.h>
int rat()
{
    return 2 * 21;
}
int fun1(int b)
{
    static int myvar = 68;
    printf("the value of myvar is %d\n ", myvar);
    myvar++;
    return 0;
}
int main()
{
    int b = 565;
    int val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    val = fun1(b);
    // int *ptr = &val;
    // printf("the value of fun1 is %d ", val);
    return 0;
}