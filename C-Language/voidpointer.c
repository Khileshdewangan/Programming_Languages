#include <stdio.h>
int main()
{
    int a = 35;
    float b = 5.8;
    void *ptr;
    // ptr = NULL;
    ptr = &a;
    printf("the value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("the value of b is %f\n", *((float *)ptr));
    return 0;
}