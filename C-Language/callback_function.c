#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

void greethello(int (*fptr)(int, int))
{
    printf("hello user\n");
    printf("the sum of %d\n", fptr(5, 7));
}

void greetgood(int (*fptr)(int, int))
{
    printf("good morning user\n");
    printf("the sum of %d\n", fptr(5, 7));
}

int main()
{
    int (*fptr)(int, int);
    fptr = sum;
    greethello(fptr);
    return 0;
}