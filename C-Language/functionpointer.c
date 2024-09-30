#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("the sum is %d\n", sum(25, 2)); // testing the function

    int (*fptr)(int, int); // declaring a function pointer
    fptr = &sum;           // create a function pointer
    int d = (*fptr)(6, 5); // derefrence a function pointer
    printf("the value of d is %d\n", d);

    return 0;
}